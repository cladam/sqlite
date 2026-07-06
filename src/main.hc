import "./sqlite"

fun print_all_rows(db, sql) {
  match sqlite_query(db, sql) {
    Err(e) => println("query failed: " + e),
    Ok(r)  => print_rows(r)
  }
}

fun print_filtered(db) {
  match sqlite_query_p(db, "SELECT * FROM notes WHERE body LIKE ?", ["%hica%"]) {
    Err(e) => println("filtered query failed: " + e),
    Ok(r)  => print_rows(r)
  }
}

fun print_table_check(db, name) {
  match sqlite_table_exists(db, name) {
    Err(e)     => println("table_exists failed: " + e),
    Ok(found) => println(name + " table exists: " + show(found))
  }
}

fun run_demo(db) {
  let _ = sqlite_exec(db, "CREATE TABLE notes (id INTEGER PRIMARY KEY, body TEXT)")
  let _ = sqlite_exec_p(db, "INSERT INTO notes (body) VALUES (?)", ["Hello from hica"])
  let _ = sqlite_exec_p(db, "INSERT INTO notes (body) VALUES (?)", ["Moonbun stores all the things!"])
  println("Inserted " + show(sqlite_changes(db)) + " row(s)")
  println("")
  println("All rows:")
  print_all_rows(db, "SELECT * FROM notes")
  println("")
  println("Filtered (LIKE '%hica%'):")
  print_filtered(db)
  println("")
  println("Last insert id: " + show(sqlite_last_insert_id(db)))
  print_table_check(db, "notes")
}

fun main() {
  println("=== sqlite library demo ===")
  println("")
  match with_sqlite(":memory:", (db) => run_demo(db)) {
    Err(e) => println("Error: " + e),
    Ok(_)  => println("Done!")
  }
}

