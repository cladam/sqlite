# sqlite

A SQLite3 library for [hica](https://github.com/cladam/hica). Thin, safe wrapper around the system SQLite3 C library with parameterised queries, structured result types, and automatic resource management.

## Requirements

SQLite3 must be present on the system:

```sh
# macOS — ships with the OS, nothing to install
# Linux (Debian/Ubuntu):
sudo apt install libsqlite3-dev
# Linux (Fedora/RHEL):
sudo dnf install sqlite-devel
```

## Installation

### 1. Add the package

```sh
hica add sqlite
hica fetch
```

This records the dependency in `hica.hml` and downloads the package into `vendor/`.

### 2. Configure `hica.hml`

Add the SQLite3 linker flag to your project's `hica.hml`:

```hml
@koka {
    flags: "--cclib=sqlite3"
}
```

### 3. Import

```hica
import "sqlite"
```

## Quick start

```hica
import "sqlite"

fun main() {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE notes (id INTEGER PRIMARY KEY, body TEXT)")
    let _ = sqlite_exec_p(db, "INSERT INTO notes (body) VALUES (?)", [param("Hello from hica")])
    let _ = sqlite_exec_p(db, "INSERT INTO notes (body) VALUES (?)", [param("Moonbun stores all the things!")])

    match sqlite_query(db, "SELECT * FROM notes") {
      Err(e) => println("query failed: " + e.message),
      Ok(r)  => print_rows(r)
    }
  })
}
```

Output:

```
id | body
1 | Hello from hica
2 | Moonbun stores all the things!
```

## API

### Types

| Type | Fields | Description |
|------|--------|-------------|
| `Db` | opaque | Database connection handle |
| `Row` | `values: list<maybe<string>>` | A single result row; SQL NULL → `None`, empty string → `Some("")` |
| `QueryResult` | `columns: list<string>`, `rows: list<Row>`, `row_count: int` | Full SELECT result; `row_count` equals `length(rows)` |
| `SqliteError` | `code: int`, `message: string` | Error from any sqlite operation; `code` is the SQLite extended error code |
| `SqlParam` | opaque | A bound parameter value. Create with `param(s)`. The private constructor prevents raw strings from reaching the query engine |
| `ColumnInfo` | `cid: int`, `name: string`, `col_type: string`, `notnull: bool`, `pk: int` | Column metadata returned by `sqlite_schema_columns` |

### Open / Close

| Function | Description |
|----------|-------------|
| `sqlite_open(path)` | Open or create a database file. Use `":memory:"` for an in-memory DB. Returns `Err(msg)` on failure |
| `sqlite_close(db)` | Close the connection and release all resources |

### Execute (no rows returned)

Always use the `_p` variants for any SQL that contains user input.

| Function | Description |
|----------|-------------|
| `sqlite_exec(db, sql)` | Execute a plain SQL statement (DDL, trusted SQL only) |
| `sqlite_exec_batch(db, sql)` | Execute multiple `;`-separated statements (schema migrations, setup scripts) |
| `sqlite_exec_p(db, sql, params)` | Execute with `?` placeholders; `params: list<SqlParam>` |
| `sqlite_exec_named(db, sql, params)` | Execute with named placeholders; `params: list<(string, SqlParam)>` |

All return `result<bool, SqliteError>`. Use `param(value)` to create each `SqlParam`.

### Query (rows returned)

| Function | Description |
|----------|-------------|
| `sqlite_query(db, sql)` | Plain SELECT; returns `result<QueryResult, SqliteError>` |
| `sqlite_query_p(db, sql, params)` | Parameterised SELECT; `params: list<SqlParam>`; returns `result<QueryResult, SqliteError>` |
| `sqlite_query_named(db, sql, params)` | Named-parameter SELECT; `params: list<(string, SqlParam)>`; returns `result<QueryResult, SqliteError>` |
| `sqlite_query_one(db, sql, params)` | At most one row; `params: list<SqlParam>`; returns `result<maybe<Row>, SqliteError>` |

### Metadata

| Function | Description |
|----------|-------------|
| `sqlite_last_insert_id(db)` | Rowid of the last INSERT, or `-1` |
| `sqlite_changes(db)` | Rows affected by the last INSERT / UPDATE / DELETE |
| `sqlite_changes_total(db)` | Total rows changed since the connection was opened |
| `sqlite_table_exists(db, name)` | Returns `result<bool, SqliteError>` |
| `sqlite_schema_columns(db, table)` | Column metadata via `PRAGMA table_info`; returns `result<list<ColumnInfo>, SqliteError>` |

### Row accessors

| Function | Description |
|----------|-------------|
| `row_str(row, idx)` | Column value as `maybe<string>` (0-indexed); `None` for SQL NULL or out of range |
| `row_int(row, idx)` | Column value parsed as `maybe<int>`; `None` if out of range or non-numeric |
| `row_str_by(row, columns, name)` | Column value by name using `QueryResult.columns`; `None` if name not found or SQL NULL |
| `row_int_by(row, columns, name)` | Column value by name, parsed as `maybe<int>` |
| `param(s)` | Wrap a string as a `SqlParam` — the only way to create a bound parameter value |
| `param_value(p)` | Extract the underlying string from a `SqlParam` |

### Transactions

| Function | Description |
|----------|-------------|
| `sqlite_begin(db)` | Begin a transaction (DEFERRED) |
| `sqlite_commit(db)` | Commit the active transaction |
| `sqlite_rollback(db)` | Roll back the active transaction |
| `with_transaction(db, f)` | Begin → `f(db)` → commit on `Ok`, rollback on `Err` |

### Resource management

| Function | Description |
|----------|-------------|
| `with_sqlite(path, f)` | Open → `f(db)` → close, always. Returns `result<bool, SqliteError>` |

### Display

| Function | Description |
|----------|-------------|
| `print_rows(r)` | Print a `QueryResult` to stdout as a simple pipe-separated table |

## Examples

### Parameterised query

```hica
import "sqlite"

fun find_users(db, min_age: int) {
  match sqlite_query_p(db, "SELECT name FROM users WHERE age >= ?", [param(show(min_age))]) {
    Err(e) => println("error: " + e.message),
    Ok(r)  => foreach(r.rows, (row) => {
      match row_str(row, 0) {
        None    => { },
        Some(n) => println(n)
      }
    })
  }
}
```

### Single-row lookup

```hica
import "sqlite"

fun get_setting(db, key: string) {
  match sqlite_query_one(db, "SELECT value FROM settings WHERE key = ?", [param(key)]) {
    Err(e)        => println("db error: " + e.message),
    Ok(None)      => println("key not found"),
    Ok(Some(row)) => match row_str(row, 0) {
      None    => println("null value"),
      Some(v) => println("{key} = {v}")
    }
  }
}
```

## Security

`sqlite_exec_p`, `sqlite_exec_named`, `sqlite_query_p`, `sqlite_query_named`, and `sqlite_query_one` require `SqlParam` values, not plain strings. `SqlParam` has a private constructor — the only way to create one is via `param(s)`. This makes it **structurally impossible** at the type level to pass a raw string where a bound parameter is required:

```hica
// This does NOT compile:
sqlite_exec_p(db, "SELECT * FROM t WHERE id = ?", [user_id])
//                                                 ^^^^^^^
// error: expected SqlParam, got string

// This is the required form:
sqlite_exec_p(db, "SELECT * FROM t WHERE id = ?", [param(user_id)])
```

All four parameterised functions bind values at the C layer via `sqlite3_bind_text`. Never build SQL strings by concatenating user input; always use `?` or named placeholders and the `_p` / `_named` variants.

## License

MIT