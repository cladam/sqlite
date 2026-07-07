// sqlite.hc — SQLite3 library for hica
//
// Import into your program with:
//   import "path/to/src/sqlite"
//
// Row serialisation protocol (see sqlite-inline.c for details):
//   col1\x1Fcol2\x1F...\x1Eval1\x1Fval2\x1F...\x1E...
//   \x1F = Unit Separator  (field delimiter within a row)
//   \x1E = Record Separator (row delimiter; first row = column names)
//   \x01 = SOH sentinel     (marks a SQL NULL cell; empty string = Some(""))
//
// This source file is part of the hica open source project
// Copyright (C) 2026 Claes Adamsson <claes.adamsson@gmail.com>
// See https://github.com/cladam/hica/blob/main/LICENSE for license information

extern import "sqlite_ffi"

// ---------------------------------------------------------------------------
// Types
// ---------------------------------------------------------------------------

// Opaque database handle. Always close with sqlite_close or use with_sqlite.
pub struct Db { h: int }

// A single result row — ordered list of column values.
// SQL NULL is represented as None; an empty string column is Some("").
pub struct Row { values: list<maybe<string>> }

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
  let params_str = if is_empty(params) { "" } else { join(params, "\x1F") + "\x1F" }
  let rc = sqlite_exec_p_raw(d.h, sql, params_str)
  if rc == 0 { Ok(true) } else { Err(sqlite_errmsg_raw(d.h)) }
}

// ---------------------------------------------------------------------------
// Query (rows returned)
// ---------------------------------------------------------------------------

// Run a parameterised SELECT. params bind to ? placeholders in order.
pub fun parse_row(raw_row: string) : Row {
  let cells = split(raw_row, "\x1F")
  let maybe_cells = map(cells, (s) => if s == "\x01" { None } else { Some(s) })
  Row { values: maybe_cells }
}

pub fun sqlite_query_p(d: Db, sql: string, params: list<string>) {
  let params_str = if is_empty(params) { "" } else { join(params, "\x1F") + "\x1F" }
  let raw = sqlite_query_p_raw(d.h, sql, params_str)
  if is_empty(raw) {
    Err(sqlite_errmsg_raw(d.h))
  } else {
    let all_strs = split(raw, "\x1E")
    let row_strs = match last(all_strs) {
      None    => [],
      Some(s) => if is_empty(s) { take(all_strs, length(all_strs) - 1) } else { all_strs }
    }
    match row_strs {
      [] => Ok(QueryResult { columns: [], rows: [] }),
      [header, ..data_rows] => Ok(QueryResult {
        columns: split(header, "\x1F"),
        rows: map(data_rows, parse_row)
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

// Get a column value as a string (0-indexed).
// Returns None for SQL NULL, out-of-range, or negative index.
pub fun row_str(r: Row, idx: int) : maybe<string> =>
  if idx < 0 { None } else {
    match head(drop(r.values, idx)) {
      None       => None,
      Some(cell) => cell
    }
  }

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
  foreach(r.rows, (row) => {
    let strs = map(row.values, (v) => match v { None => "NULL", Some(s) => s })
    println(join(strs, " | "))
  })
}
