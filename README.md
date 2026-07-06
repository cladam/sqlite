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
    let _ = sqlite_exec_p(db, "INSERT INTO notes (body) VALUES (?)", ["Hello from hica"])
    let _ = sqlite_exec_p(db, "INSERT INTO notes (body) VALUES (?)", ["Moonbun stores all the things!"])

    match sqlite_query(db, "SELECT * FROM notes") {
      Err(e) => println("query failed: " + e),
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
| `Row` | `values: list<string>` | A single result row; SQL NULL → `""` |
| `QueryResult` | `columns: list<string>`, `rows: list<Row>` | Full SELECT result |

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
| `sqlite_exec_p(db, sql, params)` | Execute with `?` placeholders bound to `params` in order |

Both return `result<bool, string>` — `Ok(true)` on success, `Err(message)` on failure.

### Query (rows returned)

| Function | Description |
|----------|-------------|
| `sqlite_query(db, sql)` | Plain SELECT; returns `result<QueryResult, string>` |
| `sqlite_query_p(db, sql, params)` | Parameterised SELECT; returns `result<QueryResult, string>` |
| `sqlite_query_one(db, sql, params)` | At most one row; returns `result<maybe<Row>, string>` |

### Metadata

| Function | Description |
|----------|-------------|
| `sqlite_last_insert_id(db)` | Rowid of the last INSERT, or `-1` |
| `sqlite_changes(db)` | Rows affected by the last INSERT / UPDATE / DELETE |
| `sqlite_table_exists(db, name)` | Returns `result<bool, string>` |

### Row accessors

| Function | Description |
|----------|-------------|
| `row_str(row, idx)` | Column value as `maybe<string>` (0-indexed); `None` if out of range |
| `row_int(row, idx)` | Column value parsed as `maybe<int>`; `None` if out of range or non-numeric |

### Resource management

| Function | Description |
|----------|-------------|
| `with_sqlite(path, f)` | Open → `f(db)` → close, always. Returns `result<bool, string>` |

### Display

| Function | Description |
|----------|-------------|
| `print_rows(r)` | Print a `QueryResult` to stdout as a simple pipe-separated table |

## Examples

### Parameterised query

```hica
import "sqlite"

fun find_users(db, min_age: int) {
  match sqlite_query_p(db, "SELECT name FROM users WHERE age >= ?", [show(min_age)]) {
    Err(e) => println("error: " + e),
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
  match sqlite_query_one(db, "SELECT value FROM settings WHERE key = ?", [key]) {
    Err(e)        => println("db error: " + e),
    Ok(None)      => println("key not found"),
    Ok(Some(row)) => match row_str(row, 0) {
      None    => println("null value"),
      Some(v) => println("{key} = {v}")
    }
  }
}
```

## Security

`sqlite_exec_p` and `sqlite_query_p` bind values at the C layer via `sqlite3_bind_text` — SQL injection is prevented at the source. Never build SQL strings by concatenating user input; always use `?` placeholders and the `_p` variants.

## License

MIT