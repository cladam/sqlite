# sqlite

Hica SQLite3 library — a thin, safe wrapper around the system SQLite3 C library.

## Requirements

- [SQLite3](https://www.sqlite.org/) installed on your system (ships with macOS, `apt install libsqlite3-dev` on Debian/Ubuntu, `dnf install sqlite-devel` on Fedora)
- [Koka](https://koka-lang.github.io/) 3.2.3+
- [Hica](https://github.com/cladam/hica) 0.39.0+

## Setup

Add the library as a git submodule in your project:

```sh
mkdir -p lib
git submodule add https://github.com/cladam/sqlite lib/sqlite
```

Then configure your `hica.hml` to include the library source and link SQLite3:

```hml
@project {
    name: "my-app"
    version: "0.1.0"
    entry: "main.hc"
}

@koka {
    include: "./lib/sqlite/src"
    flags: "--cclib=sqlite3"
}
```

The `sqlite` module is written in Koka (C FFI), so import it with `extern import`:

```hica
extern import "sqlite"
```

## Quick start

```hica
extern import "sqlite"

fun main() {
  match with_sqlite(":memory:", fun(db) {
    let _ = sqlite_exec(db, "CREATE TABLE notes (id INTEGER PRIMARY KEY, body TEXT)")
    let _ = sqlite_exec_p(db, "INSERT INTO notes (body) VALUES (?)", ["Hello from hica"])
    let _ = sqlite_exec_p(db, "INSERT INTO notes (body) VALUES (?)", ["Moonbun stores all the things!"])

    match sqlite_query(db, "SELECT * FROM notes") {
      Err(e) => println("query failed: " + e),
      Ok(r)  => print_rows(r)
    }
  }) {
    Err(e) => println("Error: " + e),
    Ok(_)  => {}
  }
}
```

Build and run:

```sh
hica run main.hc
```

## API reference

All functions are in the `sqlite` Koka module, accessed via `extern import "sqlite"`.
In hica, Koka names use underscores (e.g. `sqlite_open`, `print_rows`).

### Types

| Type | Fields | Description |
|---|---|---|
| `Db` | `handle: int` | Opaque database handle |
| `Row` | `values: list<string>` | A single result row; SQL NULL → `""` |
| `QueryResult` | `columns: list<string>`, `rows: list<Row>` | Full SELECT result |

### Open / Close

| Function | Returns | Description |
|---|---|---|
| `sqlite_open(path)` | `result<Db, string>` | Open or create a database file. Use `":memory:"` for an in-memory DB |
| `sqlite_close(db)` | `()` | Close the database and free resources |

### Execute (no rows returned)

| Function | Returns | Description |
|---|---|---|
| `sqlite_exec(db, sql)` | `result<(), string>` | Execute a plain SQL statement (DDL, trusted SQL) |
| `sqlite_exec_p(db, sql, params)` | `result<(), string>` | Execute with `?` parameters — **use this for all user input** |

### Query (rows returned)

| Function | Returns | Description |
|---|---|---|
| `sqlite_query(db, sql)` | `result<QueryResult, string>` | Plain SELECT |
| `sqlite_query_p(db, sql, params)` | `result<QueryResult, string>` | Parameterised SELECT |
| `sqlite_query_one(db, sql, params)` | `result<maybe<Row>, string>` | At most one row (useful for aggregates or `LIMIT 1`) |

### Metadata

| Function | Returns | Description |
|---|---|---|
| `sqlite_last_insert_id(db)` | `int` | Rowid of the last INSERT, or `-1` |
| `sqlite_changes(db)` | `int` | Rows affected by the last INSERT/UPDATE/DELETE |
| `sqlite_table_exists(db, name)` | `result<bool, string>` | Check whether a table exists in the main schema |

### Row accessors

| Function | Returns | Description |
|---|---|---|
| `row_str(row, idx)` | `maybe<string>` | Column value as string (0-indexed) |
| `row_int(row, idx)` | `maybe<int>` | Column value parsed as int |

### Resource management

| Function | Returns | Description |
|---|---|---|
| `with_sqlite(path, f)` | `result<(), string>` | Open → `f(db)` → close, always |
| `with_sqlite_r(path, f)` | `result<a, string>` | Same, but `f` returns a value |

### Display

| Function | Returns | Description |
|---|---|---|
| `print_rows(result)` | `()` | Print a `QueryResult` to stdout as a simple table |

## Security

Parameterised queries (`sqlite_exec_p`, `sqlite_query_p`) bind values at the C layer via `sqlite3_bind_text`, preventing SQL injection. Never build SQL strings by concatenating user input — always use `?` placeholders and the `_p` variants.

## License

MIT
