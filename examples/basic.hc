// basic.hc — SQLite library quick-start example
//
// Demonstrates:
//   - opening / closing a database
//   - parameterised INSERT and SELECT (SQL-injection safe)
//   - print_rows helper
//   - with_sqlite resource-management helper
//   - sqlite_query_one + row_str accessor
//   - sqlite_table_exists
//
// Build and run from the library root:
//   hica run examples/basic.hc

extern import "sqlite"

// ---------------------------------------------------------------------------
// Helpers — extract multi-step operations into named functions so that
// match arms remain single expressions (Hica/Koka parser requirement).
// ---------------------------------------------------------------------------

fun show_kv(db) {
  match sqlite_query(db, "SELECT key, value FROM kv ORDER BY key") {
    Err(e) => println("query failed: " + e),
    Ok(r)  => print_rows(r)
  }
}

fun run_kv_demo(db) {
  let _ = sqlite_exec(db, "CREATE TABLE kv (key TEXT, value TEXT)")
  let _ = sqlite_exec_p(db, "INSERT INTO kv VALUES (?, ?)", ["language", "hica"])
  let _ = sqlite_exec_p(db, "INSERT INTO kv VALUES (?, ?)", ["db", "sqlite"])
  show_kv(db)
  sqlite_close(db)
  println("closed")
}

fun print_hit_value(row) {
  match row_str(row, 0) {
    Nothing => println("value missing"),
    Just(v) => println("hits = " + v)
  }
}

fun check_hits(db) {
  match sqlite_query_one(db, "SELECT n FROM counters WHERE name = ?", ["hits"]) {
    Err(e)        => println("query_one failed: " + e),
    Ok(Nothing)   => println("no row found"),
    Ok(Just(row)) => print_hit_value(row)
  }
}

fun print_table_exists(db, name) {
  match sqlite_table_exists(db, name) {
    Err(e)     => println("table_exists failed: " + e),
    Ok(exists) => println(name + " table exists: " + show(exists))
  }
}

fun run_counters(db) {
  let _ = sqlite_exec(db, "CREATE TABLE counters (name TEXT, n INT)")
  let _ = sqlite_exec_p(db, "INSERT INTO counters VALUES (?, ?)", ["hits", "42"])
  let _ = sqlite_exec_p(db, "INSERT INTO counters VALUES (?, ?)", ["misses", "7"])
  check_hits(db)
  print_table_exists(db, "counters")
  println("changes so far: " + show(sqlite_changes(db)))
}

// ---------------------------------------------------------------------------
// Demo sections
// ---------------------------------------------------------------------------

fun demo_open_close() {
  println("--- open/close ---")
  match sqlite_open(":memory:") {
    Err(e) => println("open failed: " + e),
    Ok(db) => run_kv_demo(db)
  }
}

fun demo_with_sqlite() {
  println("--- with_sqlite ---")
  match with_sqlite(":memory:", (db) => run_counters(db)) {
    Err(e) => println("Error: " + e),
    Ok(_)  => println("done")
  }
}

fun main() {
  println("=== basic SQLite example ===")
  println("")
  demo_open_close()
  println("")
  demo_with_sqlite()
}
