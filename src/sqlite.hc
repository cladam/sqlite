// sqlite.hc — SQLite3 library for hica
//
// Import into your program with:
//   import "path/to/src/sqlite"
//
// Row serialisation protocol (see sqlite-inline.c for details):
//   col1\x1Fcol2\x1F...\x1Eval1\x1Fval2\x1F...\x1E...
//   \x1F = Unit Separator  (field delimiter within a row)
//   \x1E = Record Separator (row delimiter; first row = column names)
//
// This source file is part of the hica open source project
// Copyright (C) 2026 Claes Adamsson <claes.adamsson@gmail.com>
// See https://github.com/cladam/hica/blob/main/LICENSE for license information

extern import "sqlite_ffi"
import "std/list"

// ---------------------------------------------------------------------------
// Types
// ---------------------------------------------------------------------------

// Opaque database handle. Always close with sqlite_close or use with_sqlite.
pub struct Db { h: int }

// A single result row — ordered list of column values as strings.
// SQL NULL is represented as the empty string "".
pub struct Row { values: list<string> }

// Full result of a SELECT query.
pub struct QueryResult { columns: list<string>, rows: list<Row> }

// ---------------------------------------------------------------------------
// Open / Close
// ---------------------------------------------------------------------------

// Open (or create) a SQLite database at path.
// Use ":memory:" for a temporary in-memory database.
// Returns Err(msg) if the file cannot be opened or created.
pub fun sqlite_open(path: string) {
  let h = sqlite_open_raw(path)
  if h == 0 { Err("sqlite open failed: " + path) } else { Ok(Db { h: h }) }
}

// Close a database handle and release all resources.
// After calling sqlite_close the Db must not be used again.
pub fun sqlite_close(d: Db) {
  sqlite_close_raw(d.h)
}

// ---------------------------------------------------------------------------
// Execute (no rows returned)
// ---------------------------------------------------------------------------

// Execute a plain SQL statement.
// Use for DDL (CREATE TABLE, DROP TABLE) or when SQL contains no user input.
pub fun sqlite_exec(d: Db, sql: string) {
  let rc = sqlite_exec_raw(d.h, sql)
  if rc == 0 { Ok(true) } else { Err(sqlite_errmsg_raw(d.h)) }
}

// Execute a parameterised SQL statement.
// ALWAYS use this instead of string concatenation when SQL contains user input.
// params bind to ? placeholders in order — prevents SQL injection at the C layer.
pub fun sqlite_exec_p(d: Db, sql: string, params: list<string>) {
  let rc = sqlite_exec_p_raw(d.h, sql, join(params, "\x1F"))
  if rc == 0 { Ok(true) } else { Err(sqlite_errmsg_raw(d.h)) }
}

// ---------------------------------------------------------------------------
// Query (rows returned)
// ---------------------------------------------------------------------------

// Run a parameterised SELECT. params bind to ? placeholders in order.
pub fun sqlite_query_p(d: Db, sql: string, params: list<string>) {
  let raw = sqlite_query_p_raw(d.h, sql, join(params, "\x1F"))
  if raw == "" {
    Err(sqlite_errmsg_raw(d.h))
  } else {
    let row_strs = filter(split(raw, "\x1E"), (s) => s != "")
    match row_strs {
      [] => Ok(QueryResult { columns: [], rows: [] }),
      [header, ..data_rows] => Ok(QueryResult {
        columns: split(header, "\x1F"),
        rows: map(data_rows, (r) => Row { values: split(r, "\x1F") })
      })
    }
  }
}

// Run a plain SELECT (no parameters).
pub fun sqlite_query(d: Db, sql: string) {
  sqlite_query_p(d, sql, [])
}

// Return at most one row. Useful for aggregate queries or SELECT ... LIMIT 1.
pub fun sqlite_query_one(d: Db, sql: string, params: list<string>) {
  match sqlite_query_p(d, sql, params) {
    Err(e) => Err(e),
    Ok(r) => Ok(head(r.rows))
  }
}

// ---------------------------------------------------------------------------
// Metadata
// ---------------------------------------------------------------------------

// Row-id of the last successful INSERT, or -1 if no INSERT has been run.
pub fun sqlite_last_insert_id(d: Db) {
  sqlite_last_insert_id_raw(d.h)
}

// Number of rows affected by the last INSERT/UPDATE/DELETE.
pub fun sqlite_changes(d: Db) {
  sqlite_changes_raw(d.h)
}

// Return true if a table with the given name exists in the main schema.
pub fun sqlite_table_exists(d: Db, name: string) {
  match sqlite_query_p(d, "SELECT 1 FROM sqlite_master WHERE type='table' AND name=?", [name]) {
    Err(e) => Err(e),
    Ok(r) => Ok(length(r.rows) > 0)
  }
}

// ---------------------------------------------------------------------------
// Row accessors
// ---------------------------------------------------------------------------

// Get a column value as a string (0-indexed). Returns None if out of range.
pub fun row_str(r: Row, idx: int) : maybe<string> =>
  if idx < 0 { None } else { head(drop(r.values, idx)) }

// Get a column value parsed as int. Returns None if out of range or not parseable.
pub fun row_int(r: Row, idx: int) : maybe<int> =>
  match row_str(r, idx) {
    None => None,
    Some(s) => parse_int(s)
  }

// ---------------------------------------------------------------------------
// Resource management
// ---------------------------------------------------------------------------

// Open a database, run f(db), then close.
// Recommended for short-lived programs or single-use operations.
pub fun with_sqlite(path: string, f: (Db) -> ()) {
  match sqlite_open(path) {
    Err(e) => Err(e),
    Ok(d) => {
      f(d)
      sqlite_close(d)
      Ok(true)
    }
  }
}

// ---------------------------------------------------------------------------
// Display helpers
// ---------------------------------------------------------------------------

// Print a query result to stdout as a simple table (useful for debugging).
pub fun print_rows(r: QueryResult) {
  println(join(r.columns, " | "))
  foreach(r.rows, (row) => println(join(row.values, " | ")))
}
