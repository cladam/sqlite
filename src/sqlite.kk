/*
 * hica – SQLite3 Koka extern bindings  [SKETCH — not yet wired into the build]
 *
 * This source file is part of the hica open source project
 * Copyright (C) 2026 Claes Adamsson <claes.adamsson@gmail.com>
 *
 * See https://github.com/cladam/hica/blob/main/LICENSE for license information
 *
 * Low-level Koka bindings for the C trampoline in sqlite-inline.c.
 * End users should import "std/sqlite" instead — this module is internal.
 *
 * Build note: link with -lsqlite3
 */
module sqlite

extern import
  c file "sqlite-inline.c"

// ---------------------------------------------------------------------------
// Handle primitives
// Open returns 0 on failure; the hica layer converts to result<Db, string>.
// ---------------------------------------------------------------------------

pub extern sqlite-open( path : string ) : io int
  c "kk_hica_sqlite_open"

pub extern sqlite-close( handle : int ) : io ()
  c "kk_hica_sqlite_close"

pub extern sqlite-errmsg( handle : int ) : io string
  c "kk_hica_sqlite_errmsg"

pub extern sqlite-last-insert-id( handle : int ) : io int
  c "kk_hica_sqlite_last_insert_id"

pub extern sqlite-changes( handle : int ) : io int
  c "kk_hica_sqlite_changes"

// ---------------------------------------------------------------------------
// Statement execution (no result rows)
// Returns 0 on success, SQLite error code on failure.
// ---------------------------------------------------------------------------

pub extern sqlite-exec( handle : int, sql : string ) : io int
  c "kk_hica_sqlite_exec"

// params: \x1F-delimited bind values, one per ? placeholder.
pub extern sqlite-exec-p( handle : int, sql : string, params : string ) : io int
  c "kk_hica_sqlite_exec_p"

// ---------------------------------------------------------------------------
// Query (returns serialised rows as described in sqlite-inline.c)
// Empty string signals an error; caller checks sqlite-errmsg.
// ---------------------------------------------------------------------------

// params: \x1F-delimited bind values (pass "" for no params).
pub extern sqlite-query-p( handle : int, sql : string, params : string ) : io string
  c "kk_hica_sqlite_query_p"
