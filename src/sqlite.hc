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

// Structured error returned by all sqlite operations.
// code: SQLite extended error code (e.g. 1 = SQLITE_ERROR, 14 = SQLITE_CANTOPEN).
// message: human-readable description from sqlite3_errmsg.
pub struct SqliteError { code: int, message: string }

// ---------------------------------------------------------------------------
// Open / Close
// ---------------------------------------------------------------------------

// Open (or create) a SQLite database at path.
// Use ":memory:" for a temporary in-memory database.
// Returns Err(msg) if the file cannot be opened or created.
pub fun sqlite_open(path: string) {
  let h = sqlite_open_raw(path)
  if h == 0 {
    Err(SqliteError { code: -1, message: "sqlite open failed: " + path })
  } else {
    Ok(Db { h: h })
  }
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
  if rc == 0 {
    Ok(true)
  } else {
    let code = sqlite_errcode_raw(d.h)
    let msg  = sqlite_errmsg_raw(d.h)
    Err(SqliteError { code: code, message: msg })
  }
}

// Execute multiple semicolon-separated SQL statements as a batch.
// Statements are compiled and run individually via sqlite3_prepare_v2.
// Stops at the first error; no parameter binding (use sqlite_exec_p for user input).
// Ideal for schema migrations and multi-statement setup scripts.
pub fun sqlite_exec_batch(d: Db, sql: string) {
  let rc = sqlite_exec_batch_raw(d.h, sql)
  if rc == 0 {
    Ok(true)
  } else {
    let code = sqlite_errcode_raw(d.h)
    let msg  = sqlite_errmsg_raw(d.h)
    Err(SqliteError { code: code, message: msg })
  }
}

// Execute a parameterised SQL statement.
// ALWAYS use this instead of string concatenation when SQL contains user input.
// params bind to ? placeholders in order — prevents SQL injection at the C layer.
pub fun sqlite_exec_p(d: Db, sql: string, params: list<string>) {
  let params_str = if is_empty(params) { "" } else { join(params, "\x1F") + "\x1F" }
  let rc = sqlite_exec_p_raw(d.h, sql, params_str)
  if rc == 0 {
    Ok(true)
  } else {
    let code = sqlite_errcode_raw(d.h)
    let msg  = sqlite_errmsg_raw(d.h)
    Err(SqliteError { code: code, message: msg })
  }
}

// Execute a named-parameter SQL statement.
// params is a list of (name, value) pairs; names include the leading sigil
// (e.g. ":id", "@name", "$val").
pub fun sqlite_exec_named(d: Db, sql: string, params: list<(string, string)>) {
  let pairs_str = join(map(params, (p) => p.0 + "\x1E" + p.1), "\x1F") + "\x1F"
  let params_str = if is_empty(params) { "" } else { pairs_str }
  let rc = sqlite_exec_named_raw(d.h, sql, params_str)
  if rc == 0 {
    Ok(true)
  } else {
    let code = sqlite_errcode_raw(d.h)
    let msg  = sqlite_errmsg_raw(d.h)
    Err(SqliteError { code: code, message: msg })
  }
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
    let code = sqlite_errcode_raw(d.h)
    let msg  = sqlite_errmsg_raw(d.h)
    Err(SqliteError { code: code, message: msg })
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

// Run a named-parameter SELECT.
// params is a list of (name, value) pairs; names include the leading sigil.
pub fun sqlite_query_named(d: Db, sql: string, params: list<(string, string)>) {
  let pairs_str = join(map(params, (p) => p.0 + "\x1E" + p.1), "\x1F") + "\x1F"
  let params_str = if is_empty(params) { "" } else { pairs_str }
  let raw = sqlite_query_named_raw(d.h, sql, params_str)
  if is_empty(raw) {
    let code = sqlite_errcode_raw(d.h)
    let msg  = sqlite_errmsg_raw(d.h)
    Err(SqliteError { code: code, message: msg })
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

// Get a column value by name using the QueryResult's column list.
// Returns None if the column name is not found or the cell is SQL NULL.
pub fun row_str_by(r: Row, columns: list<string>, name: string) : maybe<string> =>
  match find(enumerate(columns), (pair) => pair.1 == name) {
    None       => None,
    Some(pair) => row_str(r, pair.0)
  }

// Get a column value by name, parsed as int.
// Returns None if the column is not found, is SQL NULL, or is not numeric.
pub fun row_int_by(r: Row, columns: list<string>, name: string) : maybe<int> =>
  match row_str_by(r, columns, name) {
    None    => None,
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
// Transactions
// ---------------------------------------------------------------------------

// Begin a transaction (DEFERRED by default).
pub fun sqlite_begin(d: Db) {
  let rc = sqlite_exec_raw(d.h, "BEGIN")
  if rc == 0 {
    Ok(true)
  } else {
    let code = sqlite_errcode_raw(d.h)
    let msg  = sqlite_errmsg_raw(d.h)
    Err(SqliteError { code: code, message: msg })
  }
}

// Commit the active transaction.
pub fun sqlite_commit(d: Db) {
  let rc = sqlite_exec_raw(d.h, "COMMIT")
  if rc == 0 {
    Ok(true)
  } else {
    let code = sqlite_errcode_raw(d.h)
    let msg  = sqlite_errmsg_raw(d.h)
    Err(SqliteError { code: code, message: msg })
  }
}

// Rollback the active transaction.
pub fun sqlite_rollback(d: Db) {
  let rc = sqlite_exec_raw(d.h, "ROLLBACK")
  if rc == 0 {
    Ok(true)
  } else {
    let code = sqlite_errcode_raw(d.h)
    let msg  = sqlite_errmsg_raw(d.h)
    Err(SqliteError { code: code, message: msg })
  }
}

// Run f(db) inside a transaction.
// Commits on Ok, rolls back on Err (discarding the rollback result).
pub fun with_transaction(d: Db, f) {
  match sqlite_begin(d) {
    Err(e) => Err(e),
    Ok(_)  => {
      let r = f(d)
      match r {
        Err(e) => {
          let _ = sqlite_rollback(d)
          Err(e)
        },
        Ok(v)  => {
          match sqlite_commit(d) {
            Err(e) => {
              let _ = sqlite_rollback(d)
              Err(e)
            },
            Ok(_) => Ok(v)
          }
        }
      }
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
