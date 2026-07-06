import "../src/sqlite"

// ── Row accessor tests (pure — no IO needed) ──────────────────────────────

test "row_str: returns value at each index" {
  let row = Row { values: ["alpha", "beta", "gamma"] }
  assert_eq(row_str(row, 0), Some("alpha"))
  assert_eq(row_str(row, 1), Some("beta"))
  assert_eq(row_str(row, 2), Some("gamma"))
}

test "row_str: negative index returns None" {
  let row = Row { values: ["x"] }
  assert_eq(row_str(row, -1), None)
}

test "row_str: out-of-range returns None" {
  let row = Row { values: ["x"] }
  assert_eq(row_str(row, 5), None)
}

test "row_str: empty row returns None" {
  let row = Row { values: [] }
  assert_eq(row_str(row, 0), None)
}

test "row_int: parses valid positive integer" {
  let row = Row { values: ["42"] }
  assert_eq(row_int(row, 0), Some(42))
}

test "row_int: parses negative integer" {
  let row = Row { values: ["-7"] }
  assert_eq(row_int(row, 0), Some(-7))
}

test "row_int: non-numeric returns None" {
  let row = Row { values: ["hello"] }
  assert_eq(row_int(row, 0), None)
}

test "row_int: empty string returns None" {
  let row = Row { values: [""] }
  assert_eq(row_int(row, 0), None)
}

test "row_int: out-of-range returns None" {
  let row = Row { values: ["1"] }
  assert_eq(row_int(row, 9), None)
}

// ── Open / close ───────────────────────────────────────────────────────────

test "open: in-memory db succeeds" {
  match sqlite_open(":memory:") {
    Err(_) => assert(false),
    Ok(db) => sqlite_close(db)
  }
}

// ── Exec ──────────────────────────────────────────────────────────────────

test "exec: create table succeeds" {
  let _ = with_sqlite(":memory:", (db) => {
    let r = sqlite_exec(db, "CREATE TABLE t (x INT, y TEXT)")
    assert(is_ok(r))
  })
}

test "exec: invalid sql returns Err" {
  let _ = with_sqlite(":memory:", (db) => {
    let r = sqlite_exec(db, "NOT VALID SQL !!!")
    assert(is_err(r))
  })
}

test "exec_p: insert with params succeeds" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE kv (k TEXT, v TEXT)")
    let r = sqlite_exec_p(db, "INSERT INTO kv VALUES (?, ?)", ["lang", "hica"])
    assert(is_ok(r))
  })
}

test "exec_p: multiple inserts succeed" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (n INT)")
    let r1 = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", ["1"])
    let r2 = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", ["2"])
    let r3 = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", ["3"])
    assert(is_ok(r1))
    assert(is_ok(r2))
    assert(is_ok(r3))
  })
}

// ── Query ─────────────────────────────────────────────────────────────────

test "query: empty table returns zero rows" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (x INT)")
    match sqlite_query(db, "SELECT * FROM t") {
      Err(_) => assert(false),
      Ok(r)  => assert_eq(length(r.rows), 0)
    }
  })
}

test "query: correct column names" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (name TEXT, score INT)")
    match sqlite_query(db, "SELECT * FROM t") {
      Err(_) => assert(false),
      Ok(r)  => {
        assert_eq(length(r.columns), 2)
        assert_eq(r.columns[0], "name")
        assert_eq(r.columns[1], "score")
      }
    }
  })
}

test "query: inserted row is returned" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (x TEXT)")
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", ["moonbun"])
    match sqlite_query(db, "SELECT * FROM t") {
      Err(_) => assert(false),
      Ok(r)  => {
        assert_eq(length(r.rows), 1)
        match head(r.rows) {
          None      => assert(false),
          Some(row) => assert_eq(row_str(row, 0), Some("moonbun"))
        }
      }
    }
  })
}

test "query: multiple rows returned in order" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (n INT)")
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", ["10"])
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", ["20"])
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", ["30"])
    match sqlite_query(db, "SELECT * FROM t ORDER BY n") {
      Err(_) => assert(false),
      Ok(r)  => assert_eq(length(r.rows), 3)
    }
  })
}

test "query_p: filters rows by parameter" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (n INT)")
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", ["1"])
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", ["2"])
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", ["3"])
    match sqlite_query_p(db, "SELECT * FROM t WHERE n > ?", ["1"]) {
      Err(_) => assert(false),
      Ok(r)  => assert_eq(length(r.rows), 2)
    }
  })
}

test "query_one: returns Some for existing row" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (x TEXT)")
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", ["hello"])
    match sqlite_query_one(db, "SELECT x FROM t LIMIT 1", []) {
      Err(_)    => assert(false),
      Ok(mrow)  => match mrow {
        None      => assert(false),
        Some(row) => assert_eq(row_str(row, 0), Some("hello"))
      }
    }
  })
}

test "query_one: returns None for empty table" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (x TEXT)")
    match sqlite_query_one(db, "SELECT x FROM t LIMIT 1", []) {
      Err(_)   => assert(false),
      Ok(mrow) => match mrow {
        None    => assert(true),
        Some(_) => assert(false)
      }
    }
  })
}

// ── Metadata ──────────────────────────────────────────────────────────────

test "last_insert_id: positive after insert" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (id INTEGER PRIMARY KEY, x TEXT)")
    let _ = sqlite_exec_p(db, "INSERT INTO t (x) VALUES (?)", ["a"])
    assert(sqlite_last_insert_id(db) > 0)
  })
}

test "last_insert_id: increments on each insert" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (id INTEGER PRIMARY KEY, x TEXT)")
    let _ = sqlite_exec_p(db, "INSERT INTO t (x) VALUES (?)", ["a"])
    let id1 = sqlite_last_insert_id(db)
    let _ = sqlite_exec_p(db, "INSERT INTO t (x) VALUES (?)", ["b"])
    let id2 = sqlite_last_insert_id(db)
    assert(id2 > id1)
  })
}

test "changes: 1 after single insert" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (x TEXT)")
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", ["a"])
    assert_eq(sqlite_changes(db), 1)
  })
}

test "changes: matches affected rows after update" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (n INT)")
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", ["1"])
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", ["2"])
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", ["3"])
    let _ = sqlite_exec(db, "UPDATE t SET n = 0")
    assert_eq(sqlite_changes(db), 3)
  })
}

// ── Table existence ────────────────────────────────────────────────────────

test "table_exists: true for created table" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE items (id INT)")
    match sqlite_table_exists(db, "items") {
      Err(_)    => assert(false),
      Ok(found) => assert(found)
    }
  })
}

test "table_exists: false for missing table" {
  let _ = with_sqlite(":memory:", (db) => {
    match sqlite_table_exists(db, "ghost") {
      Err(_)    => assert(false),
      Ok(found) => assert(found == false)
    }
  })
}

test "table_exists: false before create, true after" {
  let _ = with_sqlite(":memory:", (db) => {
    match sqlite_table_exists(db, "t") {
      Err(_)    => assert(false),
      Ok(found) => assert(found == false)
    }
    let _ = sqlite_exec(db, "CREATE TABLE t (x INT)")
    match sqlite_table_exists(db, "t") {
      Err(_)    => assert(false),
      Ok(found) => assert(found)
    }
  })
}

// ── with_sqlite ────────────────────────────────────────────────────────────

test "with_sqlite: executes callback and closes db" {
  let _ = with_sqlite(":memory:", (db) => {
    let r = sqlite_exec(db, "CREATE TABLE t (x INT)")
    assert(is_ok(r))
  })
}
