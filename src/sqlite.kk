/*
 * sqlite.kk — SQLite3 library for Koka / Hica
 *
 *  /==\   /==\                  Moonbun says:
 *  |  |   |  |      *  .    "store all the things!"
 *   \  \ /  /  .         *
 *    ( o.o )    ← robot bunny
 *    ( ^‿^ )
 *   /[hica=>]\
 *  /___________\
 *
 * This source file is part of the hica open source project
 * Copyright (C) 2026 Claes Adamsson <claes.adamsson@gmail.com>
 *
 * See https://github.com/cladam/hica/blob/main/LICENSE for license information
 *
 * Row serialisation protocol (see sqlite-inline.c for details):
 *   col1\x1Fcol2\x1F...\x1Eval1\x1Fval2\x1F...\x1E...
 *   \x1F = Unit Separator  (field delimiter within a row)
 *   \x1E = Record Separator (row delimiter; first row = column names)
 *
 * Import with:  extern import "sqlite"
 * Link with:    --cclib=sqlite3
 */
module sqlite

extern import
  c file "sqlite-inline.c"

// ---------------------------------------------------------------------------
// Internal raw bindings — not exported to library users
// ---------------------------------------------------------------------------

extern sqlite_open_raw( path : string ) : io int
  c "kk_hica_sqlite_open"

extern sqlite_close_raw( handle : int ) : io ()
  c "kk_hica_sqlite_close"

extern sqlite_errmsg_raw( handle : int ) : io string
  c "kk_hica_sqlite_errmsg"

extern sqlite_last_insert_id_raw( handle : int ) : io int
  c "kk_hica_sqlite_last_insert_id"

extern sqlite_changes_raw( handle : int ) : io int
  c "kk_hica_sqlite_changes"

extern sqlite_exec_raw( handle : int, sql : string ) : io int
  c "kk_hica_sqlite_exec"

extern sqlite_exec_p_raw( handle : int, sql : string, params : string ) : io int
  c "kk_hica_sqlite_exec_p"

extern sqlite_query_p_raw( handle : int, sql : string, params : string ) : io string
  c "kk_hica_sqlite_query_p"

// ---------------------------------------------------------------------------
// Types
// ---------------------------------------------------------------------------

// Opaque database handle. Always close with sqlite_close or use with_sqlite.
pub struct db
  handle : int

// A single result row — ordered list of column values as strings.
// SQL NULL is represented as the empty string "".
pub struct row
  values : list<string>

// Full result of a SELECT query.
pub struct query_result
  columns : list<string>   // column names in declaration order
  rows    : list<row>      // data rows (may be empty)

// ---------------------------------------------------------------------------
// Open / Close
// ---------------------------------------------------------------------------

// Open (or create) a SQLite database at path.
// Use ":memory:" for a temporary in-memory database.
// Returns Error(msg) if the file cannot be opened or created.
pub fun sqlite_open( path : string ) : io result<db, string>
  val h = sqlite_open_raw(path)
  if h == 0 then Error("sqlite open failed: " + path)
  else Ok(Db(h))

// Close a database handle and release all resources.
// After calling sqlite_close the db must not be used again.
pub fun sqlite_close( d : db ) : io ()
  sqlite_close_raw(d.handle)

// ---------------------------------------------------------------------------
// Execute (no rows returned)
// ---------------------------------------------------------------------------

// Execute a plain SQL statement.
// Use for DDL (CREATE TABLE, DROP TABLE) or when SQL contains no user input.
pub fun sqlite_exec( d : db, sql : string ) : io result<(), string>
  val rc = sqlite_exec_raw(d.handle, sql)
  if rc == 0 then Ok(())
  else
    val msg = sqlite_errmsg_raw(d.handle)
    Error(msg)

// Execute a parameterised SQL statement.
// ALWAYS use this instead of string concatenation when SQL contains user input.
// params bind to ? placeholders in order; prevents SQL injection at the C layer.
pub fun sqlite_exec_p( d : db, sql : string, params : list<string> ) : io result<(), string>
  val params_str = params.join("\x1F")
  val rc = sqlite_exec_p_raw(d.handle, sql, params_str)
  if rc == 0 then Ok(())
  else
    val msg = sqlite_errmsg_raw(d.handle)
    Error(msg)

// ---------------------------------------------------------------------------
// Query (rows returned)
// ---------------------------------------------------------------------------

// Internal: deserialise the \x1E/\x1F-encoded string from sqlite-inline.c.
fun parse_query_result( raw : string ) : query_result
  val rs       = "\x1E"
  val fs       = "\x1F"
  val row_strs = raw.split(rs).filter(fn(s) s != "")
  match row_strs
    [] -> Query_result([], [])
    Cons(header, data_rows) ->
      val cols = header.split(fs)
      val rows = data_rows.map(fn(r) Row(r.split(fs)))
      Query_result(cols, rows)

// Run a parameterised SELECT. params bind to ? placeholders in order.
pub fun sqlite_query_p( d : db, sql : string, params : list<string> ) : io result<query_result, string>
  val params_str = params.join("\x1F")
  val raw        = sqlite_query_p_raw(d.handle, sql, params_str)
  if raw == "" then
    val msg = sqlite_errmsg_raw(d.handle)
    Error(msg)
  else Ok(parse_query_result(raw))

// Run a plain SELECT (no parameters).
pub fun sqlite_query( d : db, sql : string ) : io result<query_result, string>
  sqlite_query_p(d, sql, [])

// Return at most one row. Useful for aggregate queries or SELECT ... LIMIT 1.
pub fun sqlite_query_one( d : db, sql : string, params : list<string> ) : io result<maybe<row>, string>
  match sqlite_query_p(d, sql, params)
    Error(e) -> Error(e)
    Ok(r)    -> Ok(r.rows.head)

// ---------------------------------------------------------------------------
// Metadata
// ---------------------------------------------------------------------------

// Row-id of the last successful INSERT, or -1 if no INSERT has been run.
pub fun sqlite_last_insert_id( d : db ) : io int
  sqlite_last_insert_id_raw(d.handle)

// Number of rows affected by the last INSERT/UPDATE/DELETE.
pub fun sqlite_changes( d : db ) : io int
  sqlite_changes_raw(d.handle)

// Return true if a table with the given name exists in the main schema.
pub fun sqlite_table_exists( d : db, name : string ) : io result<bool, string>
  match sqlite_query_p(d, "SELECT 1 FROM sqlite_master WHERE type='table' AND name=?", [name])
    Error(e) -> Error(e)
    Ok(r)    -> Ok(match r.rows
      []  -> False
      _   -> True)

// ---------------------------------------------------------------------------
// Row accessors
// ---------------------------------------------------------------------------

// Get a column value as a string (0-indexed). Returns Nothing if out of range.
pub fun row_str( r : row, idx : int ) : maybe<string>
  if idx < 0 then Nothing
  else r.values.drop(idx).head

// Get a column value parsed as int. Returns Nothing if out of range or not parseable.
pub fun row_int( r : row, idx : int ) : maybe<int>
  match r.row_str(idx)
    Nothing -> Nothing
    Just(s) -> s.parse-int

// ---------------------------------------------------------------------------
// Resource management helpers
// ---------------------------------------------------------------------------

// Open a database, run f(db), then close — even if f returns an error.
// Recommended for short-lived programs or single-use operations.
pub fun with_sqlite( path : string, f : (db) -> io () ) : io result<(), string>
  match sqlite_open(path)
    Error(e) -> Error(e)
    Ok(d) ->
      f(d)
      sqlite_close(d)
      Ok(())

// Variant that lets f return a result value.
pub fun with_sqlite_r( path : string, f : (db) -> io result<a, string> ) : io result<a, string>
  match sqlite_open(path)
    Error(e) -> Error(e)
    Ok(d) ->
      val r = f(d)
      sqlite_close(d)
      r

// ---------------------------------------------------------------------------
// Display helpers
// ---------------------------------------------------------------------------

// Print a query-result to stdout as a simple table (useful for debugging).
pub fun print_rows( r : query_result ) : io ()
  println(r.columns.join(" | "))
  r.rows.foreach fn(row)
    println(row.values.join(" | "))
