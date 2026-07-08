import "../src/sqlite"

// ── Row accessor tests (pure — no IO needed) ──────────────────────────────

test "row_str: returns value at each index" {
  let row = Row { values: [Some("alpha"), Some("beta"), Some("gamma")] }
  assert_eq(row_str(row, 0), Some("alpha"))
  assert_eq(row_str(row, 1), Some("beta"))
  assert_eq(row_str(row, 2), Some("gamma"))
}

test "row_str: negative index returns None" {
  let row = Row { values: [Some("x")] }
  assert_eq(row_str(row, -1), None)
}

test "row_str: out-of-range returns None" {
  let row = Row { values: [Some("x")] }
  assert_eq(row_str(row, 5), None)
}

test "row_str: empty row returns None" {
  let row = Row { values: [] }
  assert_eq(row_str(row, 0), None)
}

test "row_int: parses valid positive integer" {
  let row = Row { values: [Some("42")] }
  assert_eq(row_int(row, 0), Some(42))
}

test "row_int: parses negative integer" {
  let row = Row { values: [Some("-7")] }
  assert_eq(row_int(row, 0), Some(-7))
}

test "row_int: non-numeric returns None" {
  let row = Row { values: [Some("hello")] }
  assert_eq(row_int(row, 0), None)
}

test "row_int: empty string returns None" {
  let row = Row { values: [Some("")] }
  assert_eq(row_int(row, 0), None)
}

test "row_int: out-of-range returns None" {
  let row = Row { values: [Some("1")] }
  assert_eq(row_int(row, 9), None)
}

test "row_str: None for SQL NULL cell" {
  let row = Row { values: [Some("a"), None, Some("c")] }
  assert_eq(row_str(row, 1), None)
}

test "row_str: Some for empty-string cell" {
  let row = Row { values: [Some("")] }
  assert_eq(row_str(row, 0), Some(""))
}

test "row_int: None for SQL NULL cell" {
  let row = Row { values: [None] }
  assert_eq(row_int(row, 0), None)
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
    let r = sqlite_exec_p(db, "INSERT INTO kv VALUES (?, ?)", [param("lang"), param("hica")])
    assert(is_ok(r))
  })
}

test "exec_p: multiple inserts succeed" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (n INT)")
    let r1 = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("1")])
    let r2 = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("2")])
    let r3 = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("3")])
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
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("moonbun")])
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
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("10")])
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("20")])
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("30")])
    match sqlite_query(db, "SELECT * FROM t ORDER BY n") {
      Err(_) => assert(false),
      Ok(r)  => assert_eq(length(r.rows), 3)
    }
  })
}

test "query_p: filters rows by parameter" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (n INT)")
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("1")])
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("2")])
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("3")])
    match sqlite_query_p(db, "SELECT * FROM t WHERE n > ?", [param("1")]) {
      Err(_) => assert(false),
      Ok(r)  => assert_eq(length(r.rows), 2)
    }
  })
}

test "query_one: returns Some for existing row" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (x TEXT)")
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("hello")])
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
    let _ = sqlite_exec_p(db, "INSERT INTO t (x) VALUES (?)", [param("a")])
    assert(sqlite_last_insert_id(db) > 0)
  })
}

test "last_insert_id: increments on each insert" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (id INTEGER PRIMARY KEY, x TEXT)")
    let _ = sqlite_exec_p(db, "INSERT INTO t (x) VALUES (?)", [param("a")])
    let id1 = sqlite_last_insert_id(db)
    let _ = sqlite_exec_p(db, "INSERT INTO t (x) VALUES (?)", [param("b")])
    let id2 = sqlite_last_insert_id(db)
    assert(id2 > id1)
  })
}

test "changes: 1 after single insert" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (x TEXT)")
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("a")])
    assert_eq(sqlite_changes(db), 1)
  })
}

test "changes: matches affected rows after update" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (n INT)")
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("1")])
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("2")])
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("3")])
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

// ── NULL handling ──────────────────────────────────────────────────────────

test "query: SQL NULL column returns None from row_str" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (x TEXT, y TEXT)")
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?, NULL)", [param("hello")])
    match sqlite_query(db, "SELECT x, y FROM t") {
      Err(_) => assert(false),
      Ok(r)  => match head(r.rows) {
        None      => assert(false),
        Some(row) => {
          assert_eq(row_str(row, 0), Some("hello"))
          assert_eq(row_str(row, 1), None)
        }
      }
    }
  })
}

test "query: empty-string column is Some, not None" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (x TEXT)")
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("")])
    match sqlite_query(db, "SELECT x FROM t") {
      Err(_) => assert(false),
      Ok(r)  => match head(r.rows) {
        None      => assert(false),
        Some(row) => assert_eq(row_str(row, 0), Some(""))
      }
    }
  })
}

test "query: all-NULL row is distinguishable" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (a TEXT, b TEXT)")
    let _ = sqlite_exec(db, "INSERT INTO t VALUES (NULL, NULL)")
    match sqlite_query(db, "SELECT a, b FROM t") {
      Err(_) => assert(false),
      Ok(r)  => match head(r.rows) {
        None      => assert(false),
        Some(row) => {
          assert_eq(row_str(row, 0), None)
          assert_eq(row_str(row, 1), None)
        }
      }
    }
  })
}

// ── Named parameters ───────────────────────────────────────────────────────

test "exec_named: insert with colon params" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (k TEXT, v TEXT)")
    let r = sqlite_exec_named(db, "INSERT INTO t VALUES (:key, :val)",
              [(":key", param("lang")), (":val", param("hica"))])
    assert(is_ok(r))
    match sqlite_query(db, "SELECT k, v FROM t") {
      Err(_) => assert(false),
      Ok(r)  => {
        assert_eq(length(r.rows), 1)
        match head(r.rows) {
          None      => assert(false),
          Some(row) => {
            assert_eq(row_str(row, 0), Some("lang"))
            assert_eq(row_str(row, 1), Some("hica"))
          }
        }
      }
    }
  })
}

test "exec_named: at-sign params" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (n INT)")
    let r = sqlite_exec_named(db, "INSERT INTO t VALUES (@num)", [("@num", param("42"))])
    assert(is_ok(r))
  })
}

test "exec_named: reuse param in multiple places" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (a TEXT, b TEXT)")
    let r = sqlite_exec_named(db,
              "INSERT INTO t VALUES (:x, :x)",
              [(":x", param("same"))])
    assert(is_ok(r))
    match sqlite_query(db, "SELECT a, b FROM t") {
      Err(_) => assert(false),
      Ok(r)  => match head(r.rows) {
        None      => assert(false),
        Some(row) => {
          assert_eq(row_str(row, 0), Some("same"))
          assert_eq(row_str(row, 1), Some("same"))
        }
      }
    }
  })
}

test "query_named: filters by named param" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (n INT)")
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("1")])
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("5")])
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("10")])
    match sqlite_query_named(db, "SELECT n FROM t WHERE n > :min", [(":min", param("3"))]) {
      Err(_) => assert(false),
      Ok(r)  => assert_eq(length(r.rows), 2)
    }
  })
}

test "query_named: returns correct values" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (name TEXT, score INT)")
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?, ?)", [param("alice"), param("90")])
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?, ?)", [param("bob"), param("70")])
    match sqlite_query_named(db, "SELECT name FROM t WHERE score >= :min",
            [(":min", param("80"))]) {
      Err(_) => assert(false),
      Ok(r)  => {
        assert_eq(length(r.rows), 1)
        match head(r.rows) {
          None      => assert(false),
          Some(row) => assert_eq(row_str(row, 0), Some("alice"))
        }
      }
    }
  })
}

// ── SqliteError ────────────────────────────────────────────────────────────

test "error: bad sql has non-zero code and non-empty message" {
  let _ = with_sqlite(":memory:", (db) => {
    match sqlite_exec(db, "NOT VALID SQL") {
      Ok(_)  => assert(false),
      Err(e) => {
        assert(e.code != 0)
        assert(str_length(e.message) > 0)
      }
    }
  })
}

test "error: message is accessible as string" {
  let _ = with_sqlite(":memory:", (db) => {
    match sqlite_exec(db, "SELECT * FROM no_such_table") {
      Ok(_)  => assert(false),
      Err(e) => assert(contains(e.message, "no such table"))
    }
  })
}

// ── Transactions ───────────────────────────────────────────────────────────

test "transaction: committed changes are visible" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (x INT)")
    let _ = sqlite_begin(db)
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("42")])
    let _ = sqlite_commit(db)
    match sqlite_query(db, "SELECT x FROM t") {
      Err(_) => assert(false),
      Ok(r)  => assert_eq(length(r.rows), 1)
    }
  })
}

test "transaction: rolled back changes are not visible" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (x INT)")
    let _ = sqlite_begin(db)
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("42")])
    let _ = sqlite_rollback(db)
    match sqlite_query(db, "SELECT x FROM t") {
      Err(_) => assert(false),
      Ok(r)  => assert_eq(length(r.rows), 0)
    }
  })
}

test "with_transaction: commits on Ok" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (x INT)")
    let _ = with_transaction(db, (db) => {
      sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("1")])
    })
    match sqlite_query(db, "SELECT x FROM t") {
      Err(_) => assert(false),
      Ok(r)  => assert_eq(length(r.rows), 1)
    }
  })
}

test "with_transaction: rolls back on Err" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (x INT)")
    let _ = with_transaction(db, (db) => {
      let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("1")])
      sqlite_exec(db, "NOT VALID SQL")
    })
    match sqlite_query(db, "SELECT x FROM t") {
      Err(_) => assert(false),
      Ok(r)  => assert_eq(length(r.rows), 0)
    }
  })
}

test "with_transaction: multiple inserts are atomic" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (x INT)")
    let _ = with_transaction(db, (db) => {
      let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("1")])
      let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("2")])
      sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("3")])
    })
    match sqlite_query(db, "SELECT x FROM t") {
      Err(_) => assert(false),
      Ok(r)  => assert_eq(length(r.rows), 3)
    }
  })
}

// ── Batch execute ──────────────────────────────────────────────────────────

test "exec_batch: single statement works" {
  let _ = with_sqlite(":memory:", (db) => {
    let r = sqlite_exec_batch(db, "CREATE TABLE t (x INT)")
    assert(is_ok(r))
  })
}

test "exec_batch: two statements in one string" {
  let _ = with_sqlite(":memory:", (db) => {
    let r = sqlite_exec_batch(db,
      "CREATE TABLE t (x INT); INSERT INTO t VALUES (1)")
    assert(is_ok(r))
    match sqlite_query(db, "SELECT x FROM t") {
      Err(_) => assert(false),
      Ok(r)  => assert_eq(length(r.rows), 1)
    }
  })
}

test "exec_batch: multiple DDL statements" {
  let _ = with_sqlite(":memory:", (db) => {
    let r = sqlite_exec_batch(db,
      "CREATE TABLE a (id INT); CREATE TABLE b (id INT); CREATE TABLE c (id INT)")
    assert(is_ok(r))
    match sqlite_table_exists(db, "a") { Ok(found) => assert(found), Err(_) => assert(false) }
    match sqlite_table_exists(db, "b") { Ok(found) => assert(found), Err(_) => assert(false) }
    match sqlite_table_exists(db, "c") { Ok(found) => assert(found), Err(_) => assert(false) }
  })
}

test "exec_batch: stops and returns Err on first bad statement" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec_batch(db, "CREATE TABLE t (x INT)")
    let r = sqlite_exec_batch(db,
      "INSERT INTO t VALUES (1); NOT VALID SQL; INSERT INTO t VALUES (2)")
    assert(is_err(r))
    match sqlite_query(db, "SELECT x FROM t") {
      Err(_) => assert(false),
      Ok(r)  => assert_eq(length(r.rows), 1)
    }
  })
}

// ── Column access by name ──────────────────────────────────────────────────

test "row_str_by: returns value for existing column" {
  let cols = ["id", "name", "score"]
  let row  = Row { values: [Some("1"), Some("alice"), Some("90")] }
  assert_eq(row_str_by(row, cols, "id"),    Some("1"))
  assert_eq(row_str_by(row, cols, "name"),  Some("alice"))
  assert_eq(row_str_by(row, cols, "score"), Some("90"))
}

test "row_str_by: returns None for unknown column name" {
  let cols = ["a", "b"]
  let row  = Row { values: [Some("1"), Some("2")] }
  assert_eq(row_str_by(row, cols, "missing"), None)
}

test "row_str_by: returns None for SQL NULL column" {
  let cols = ["x", "y"]
  let row  = Row { values: [Some("hello"), None] }
  assert_eq(row_str_by(row, cols, "y"), None)
}

test "row_int_by: parses column value as int" {
  let cols = ["n", "label"]
  let row  = Row { values: [Some("42"), Some("hello")] }
  assert_eq(row_int_by(row, cols, "n"), Some(42))
  assert_eq(row_int_by(row, cols, "label"), None)
}

test "row_str_by: works with actual query result" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (name TEXT, age INT)")
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?, ?)", [param("alice"), param("30")])
    match sqlite_query(db, "SELECT name, age FROM t") {
      Err(_) => assert(false),
      Ok(r)  => match head(r.rows) {
        None      => assert(false),
        Some(row) => {
          assert_eq(row_str_by(row, r.columns, "name"), Some("alice"))
          assert_eq(row_int_by(row, r.columns, "age"),  Some(30))
          assert_eq(row_str_by(row, r.columns, "nope"), None)
        }
      }
    }
  })
}

// ── row_float / row_float_by (T2-1) ───────────────────────────────────────

test "row_float: parses valid float" {
  let row = Row { values: [Some("3.14")] }
  match row_float(row, 0) {
    None    => assert(false),
    Some(f) => assert(f > 3.0 && f < 3.2)
  }
}

test "row_float: returns None for non-numeric" {
  let row = Row { values: [Some("hello")] }
  assert_eq(row_float(row, 0), None)
}

test "row_float: returns None for SQL NULL" {
  let row = Row { values: [None] }
  assert_eq(row_float(row, 0), None)
}

test "row_float_by: returns parsed float by column name" {
  let cols = ["price", "label"]
  let row  = Row { values: [Some("9.99"), Some("item")] }
  match row_float_by(row, cols, "price") {
    None    => assert(false),
    Some(f) => assert(f > 9.0 && f < 10.0)
  }
}

// ── sqlite_changes_total (T2-3) ────────────────────────────────────────────

test "changes_total: accumulates across multiple statements" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (x INT)")
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("1")])
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("2")])
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("3")])
    assert_eq(sqlite_changes_total(db), 3)
  })
}

test "changes_total: includes rows from before the last statement" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (x INT)")
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("1")])
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("2")])
    let _ = sqlite_exec(db, "DELETE FROM t WHERE x = 1")
    assert_eq(sqlite_changes(db), 1)
    assert_eq(sqlite_changes_total(db), 3)
  })
}

// ── Open flags ─────────────────────────────────────────────────────────────

test "open_flags: readwrite+create works like sqlite_open" {
  let flags = sqlite_flag_readwrite() + sqlite_flag_create()
  match sqlite_open_flags(":memory:", flags) {
    Err(_) => assert(false),
    Ok(db) => {
      let r = sqlite_exec(db, "CREATE TABLE t (x INT)")
      assert(is_ok(r))
      sqlite_close(db)
    }
  }
}

test "open_flags: uri flag enables memory URI" {
  let flags = sqlite_flag_readwrite() + sqlite_flag_create() + sqlite_flag_uri()
  match sqlite_open_flags(":memory:", flags) {
    Err(_) => assert(false),
    Ok(db) => sqlite_close(db)
  }
}

test "open_readonly: fails on non-existent path" {
  match sqlite_open_readonly("/nonexistent/path/that/cannot/exist.db") {
    Err(_) => assert(true),
    Ok(db) => { sqlite_close(db); assert(false) }
  }
}

test "open_readonly: memory db opens but rejects writes" {
  match sqlite_open_readonly(":memory:") {
    Err(_) => assert(true),
    Ok(db) => {
      let r = sqlite_exec(db, "CREATE TABLE t (x INT)")
      assert(is_err(r))
      sqlite_close(db)
    }
  }
}

test "sqlite_flag_readonly: value is 1" {
  assert_eq(sqlite_flag_readonly(), 1)
}

test "sqlite_flag_readwrite: value is 2" {
  assert_eq(sqlite_flag_readwrite(), 2)
}

test "sqlite_flag_create: value is 4" {
  assert_eq(sqlite_flag_create(), 4)
}

// ── Schema columns ─────────────────────────────────────────────────────────

test "schema_columns: returns correct column count" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (id INTEGER PRIMARY KEY, name TEXT, score REAL)")
    match sqlite_schema_columns(db, "t") {
      Err(_) => assert(false),
      Ok(cs) => assert_eq(length(cs), 3)
    }
  })
}

test "schema_columns: column names are correct" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (id INTEGER, name TEXT)")
    match sqlite_schema_columns(db, "t") {
      Err(_) => assert(false),
      Ok(cs) => {
        assert_eq(length(cs), 2)
        match head(cs) {
          None    => assert(false),
          Some(c) => assert_eq(c.name, "id")
        }
      }
    }
  })
}

test "schema_columns: declared types are returned" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (x INTEGER, y TEXT, z REAL)")
    match sqlite_schema_columns(db, "t") {
      Err(_) => assert(false),
      Ok(cs) => {
        let types = map(cs, (c) => c.col_type)
        assert_eq(types[0], "INTEGER")
        assert_eq(types[1], "TEXT")
        assert_eq(types[2], "REAL")
      }
    }
  })
}

test "schema_columns: primary key detected" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (id INTEGER PRIMARY KEY, name TEXT)")
    match sqlite_schema_columns(db, "t") {
      Err(_) => assert(false),
      Ok(cs) => match head(cs) {
        None    => assert(false),
        Some(c) => assert(c.pk > 0)
      }
    }
  })
}

test "schema_columns: empty list for non-existent table" {
  let _ = with_sqlite(":memory:", (db) => {
    match sqlite_schema_columns(db, "ghost") {
      Err(_) => assert(false),
      Ok(cs) => assert_eq(length(cs), 0)
    }
  })
}

// ── QueryResult.row_count ──────────────────────────────────────────────────

test "row_count: zero for empty table" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (x INT)")
    match sqlite_query(db, "SELECT * FROM t") {
      Err(_) => assert(false),
      Ok(r)  => assert_eq(r.row_count, 0)
    }
  })
}

test "row_count: matches actual row count" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (x INT)")
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("1")])
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("2")])
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("3")])
    match sqlite_query(db, "SELECT * FROM t") {
      Err(_) => assert(false),
      Ok(r)  => {
        assert_eq(r.row_count, 3)
        assert_eq(r.row_count, length(r.rows))
      }
    }
  })
}

test "row_count: consistent after filter" {
  let _ = with_sqlite(":memory:", (db) => {
    let _ = sqlite_exec(db, "CREATE TABLE t (n INT)")
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("1")])
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("2")])
    let _ = sqlite_exec_p(db, "INSERT INTO t VALUES (?)", [param("3")])
    match sqlite_query_p(db, "SELECT * FROM t WHERE n > ?", [param("1")]) {
      Err(_) => assert(false),
      Ok(r)  => assert_eq(r.row_count, 2)
    }
  })
}
