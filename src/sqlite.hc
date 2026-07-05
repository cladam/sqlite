// hica standard library — SQLite3  [SKETCH — not yet wired into the build]
//
//  /==\   /==\                  Moonbun says:
//  |  |   |  |      *  .    "store all the things!"
//   \  \ /  /  .         *
//    ( o.o )    ← robot bunny with floppy ears
//    ( ^‿^ )
//   /[hica=>]\
//  /___________\
//
// A thin, safe wrapper around SQLite3 for hica programs.
// Follows the same FFI pattern as std/http (C trampoline → Koka bindings → hica).
//
// Import with: import "std/sqlite"
//
// Quick-start:
//
//   import "std/sqlite"
//
//   fun main() {
//     match sqlite_open(":memory:") {
//       Err(e) => println("open failed: " + e),
//       Ok(db) => {
//         sqlite_exec(db, "CREATE TABLE notes (id INTEGER PRIMARY KEY, body TEXT)")
//         sqlite_exec_params(db, "INSERT INTO notes (body) VALUES (?)", ["hello moonbun"])
//         match sqlite_query(db, "SELECT * FROM notes") {
//           Ok(r) => print_rows(r),
//           Err(e) => println("query failed: " + e)
//         }
//         sqlite_close(db)
//       }
//     }
//   }
//
//   // Safer: use with_sqlite so the db is always closed on error too.
//   fun main() {
//     with_sqlite(":memory:", fun(db) {
//       sqlite_exec(db, "CREATE TABLE t (x INT)")
//       sqlite_exec_params(db, "INSERT INTO t VALUES (?)", ["42"])
//     })
//   }
//
// This source file is part of the hica open source project
// Copyright (C) 2026 Claes Adamsson <claes.adamsson@gmail.com>
//
// See https://github.com/cladam/hica/blob/main/LICENSE for license information

// ---------------------------------------------------------------------------
// Types
// ---------------------------------------------------------------------------

// Opaque database handle.  Do not inspect the `handle` field directly;
// use the functions in this module.  Always call sqlite_close when done,
// or use with_sqlite which closes automatically.
pub struct Db {
  handle: int    // sqlite3* cast to int64_t, 0 = invalid
}

// A single result row: ordered list of column values as strings.
// SQL NULL is represented as the empty string "".
// Use row_str / row_int / row_float for typed access.
pub struct Row {
  values: list<string>
}

// Full result of a SELECT query.
pub struct QueryResult {
  columns: list<string>,   // column names in declaration order
  rows: list<Row>          // data rows (may be empty)
}

// ---------------------------------------------------------------------------
// Core: open / close
// ---------------------------------------------------------------------------

// Open (or create) a SQLite database at path.
// Use ":memory:" for a temporary in-memory database.
// Returns Err(msg) if the file cannot be opened or created.
pub fun sqlite_open(path: string) : result<Db, string> =>
  // TODO: call sqlite.sqlite-open(path) once the Koka bindings are wired.
  // let h = sqlite_open_raw(path)
  // if h == 0 { Err("sqlite_open failed: " + path) } else { Ok(Db { handle: h }) }
  Err("sqlite not yet built — see src/sqlite.kk")

// Close a database handle and release all resources.
// After calling sqlite_close the Db must not be used again.
pub fun sqlite_close(db: Db) : () =>
  // TODO: call sqlite.sqlite-close(db.handle)
  ()

// ---------------------------------------------------------------------------
// Core: execute (no rows returned)
// ---------------------------------------------------------------------------

// Execute a plain SQL statement.  Use for DDL (CREATE TABLE, DROP TABLE)
// or when you are certain the SQL contains no user input.
pub fun sqlite_exec(db: Db, sql: string) : result<(), string> =>
  // TODO: let rc = sqlite_exec_raw(db.handle, sql)
  //       if rc == 0 { Ok(()) } else { Err(sqlite_errmsg(db)) }
  Err("not implemented")

// Execute a SQL statement with positional ? parameters.
// ALWAYS use this instead of string concatenation when the SQL contains
// user-supplied values — it prevents SQL injection at the C layer.
//
// Example:
//   sqlite_exec_params(db, "INSERT INTO t (name, age) VALUES (?, ?)", ["alice", "30"])
pub fun sqlite_exec_params(db: Db, sql: string, params: list<string>) : result<(), string> =>
  // TODO: let params_str = join(params, "\x1F")
  //       let rc = sqlite_exec_p_raw(db.handle, sql, params_str)
  //       if rc == 0 { Ok(()) } else { Err(sqlite_errmsg(db)) }
  Err("not implemented")

// ---------------------------------------------------------------------------
// Core: query (rows returned)
// ---------------------------------------------------------------------------

// Run a SELECT and return all rows.
// Column names are in QueryResult.columns; each row's values are in Row.values.
pub fun sqlite_query(db: Db, sql: string) : result<QueryResult, string> =>
  sqlite_query_params(db, sql, [])

// Run a parameterised SELECT.  params bind to ? placeholders in order.
pub fun sqlite_query_params(db: Db, sql: string, params: list<string>) : result<QueryResult, string> =>
  // TODO: Decode the \x1E/\x1F serialised result from sqlite-query-p.
  //
  // let raw = sqlite_query_p_raw(db.handle, sql, join(params, "\x1F"))
  // if raw == "" { Err(sqlite_errmsg(db)) }
  // else { Ok(parse_query_result(raw)) }
  Err("not implemented")

// Return at most one row.  Useful for SELECT ... LIMIT 1 or aggregate queries.
pub fun sqlite_query_one(db: Db, sql: string, params: list<string>) : result<maybe<Row>, string> =>
  match sqlite_query_params(db, sql, params) {
    Err(e) => Err(e),
    Ok(r)  => Ok(head(r.rows))
  }

// ---------------------------------------------------------------------------
// Metadata helpers
// ---------------------------------------------------------------------------

// Row-id of the last successful INSERT, or -1 if no INSERT has been run.
pub fun sqlite_last_insert_id(db: Db) : int =>
  // TODO: sqlite_last_insert_id_raw(db.handle)
  -1

// Number of rows affected by the last INSERT / UPDATE / DELETE.
pub fun sqlite_changes(db: Db) : int =>
  // TODO: sqlite_changes_raw(db.handle)
  0

// Return true if a table with the given name exists in the main schema.
pub fun sqlite_table_exists(db: Db, name: string) : result<bool, string> =>
  match sqlite_query_params(db,
    "SELECT 1 FROM sqlite_master WHERE type='table' AND name=?", [name]) {
    Err(e) => Err(e),
    Ok(r)  => Ok(length(r.rows) > 0)
  }

// ---------------------------------------------------------------------------
// Row accessors
// ---------------------------------------------------------------------------

// Get a column value as a string (0-indexed).  Returns Nothing if idx is out of range.
pub fun row_str(row: Row, idx: int) : maybe<string> =>
  // TODO: nth(row.values, idx)  — once std/list has nth
  Nothing

// Get a column value parsed as int.  Returns Nothing if out of range or not parseable.
pub fun row_int(row: Row, idx: int) : maybe<int> =>
  match row_str(row, idx) {
    Nothing => Nothing,
    Just(s) => parse_int(s)   // TODO: parse_int should be in prelude
  }

// Get a column value parsed as float.
pub fun row_float(row: Row, idx: int) : maybe<float> =>
  match row_str(row, idx) {
    Nothing => Nothing,
    Just(s) => parse_float(s)  // TODO: parse_float should be in prelude
  }

// ---------------------------------------------------------------------------
// Resource management helper
// ---------------------------------------------------------------------------

// Open a database, run f(db), then close — even if f returns Err.
// This is the recommended way to work with databases in short-lived programs.
//
// Example:
//   with_sqlite("data.db", fun(db) {
//     sqlite_exec(db, "CREATE TABLE IF NOT EXISTS t (x INT)")
//     sqlite_exec_params(db, "INSERT INTO t VALUES (?)", ["1"])
//   })
pub fun with_sqlite(path: string, f: fun(Db) -> ()) : result<(), string> =>
  match sqlite_open(path) {
    Err(e) => Err(e),
    Ok(db) => {
      f(db)
      sqlite_close(db)
      Ok(())
    }
  }

// Variant that lets f return a result value.
pub fun with_sqlite_r(path: string, f: fun(Db) -> result<a, string>) : result<a, string> =>
  match sqlite_open(path) {
    Err(e) => Err(e),
    Ok(db) => {
      let r = f(db)
      sqlite_close(db)
      r
    }
  }

// ---------------------------------------------------------------------------
// Internal: parse serialised query result
// ---------------------------------------------------------------------------
//
// Format from sqlite-inline.c:
//   col1\x1Fcol2\x1F...\x1E  ← header row
//   val1\x1Fval2\x1F...\x1E  ← data rows
//
// TODO: split / trim functions need to handle \x1E and \x1F delimiters.
// The current prelude's split() works on string delimiters — should be fine.

fun parse_query_result(raw: string) : QueryResult => {
  // Split into rows on \x1E (Record Separator).
  // The last element after the final \x1E will be "" — drop it.
  let record_sep = char_to_string(chr(30))   // \x1E
  let field_sep  = char_to_string(chr(31))   // \x1F
  let row_strs = filter(split(raw, record_sep), fun(s) => s != "")
  match row_strs {
    []           => QueryResult { columns: [], rows: [] },
    [header | data_rows] => {
      let cols = split(header, field_sep)
      let rows = map(data_rows, fun(r) => Row { values: split(r, field_sep) })
      QueryResult { columns: cols, rows: rows }
    }
  }
}

// ---------------------------------------------------------------------------
// Convenience: print a QueryResult to stdout (useful for REPL / debugging)
// ---------------------------------------------------------------------------

pub fun print_rows(r: QueryResult) : () => {
  // Print header
  println(join(r.columns, " | "))
  println(join(map(r.columns, fun(c) => join(map([1..str_length(c)], fun(_) => "-"), "")), "-+-"))
  // Print rows
  foreach(r.rows, fun(row) => println(join(row.values, " | ")))
  println(show(length(r.rows)) + " row(s)")
}
