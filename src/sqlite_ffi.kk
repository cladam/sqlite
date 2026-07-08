// sqlite_ffi.kk — raw C FFI declarations for the hica SQLite3 binding
//
// Do not import this directly — import the hica wrapper instead:
//   import "path/to/src/sqlite"
//
// This source file is part of the hica open source project
// Copyright (C) 2026 Claes Adamsson <claes.adamsson@gmail.com>
// See https://github.com/cladam/hica/blob/main/LICENSE for license information

module sqlite_ffi

extern import
  c file "sqlite-inline.c"

// ---------------------------------------------------------------------------
// Lifecycle
// ---------------------------------------------------------------------------

pub extern sqlite_open_raw( path : string ) : io int
  c "kk_hica_sqlite_open"

pub extern sqlite_close_raw( h : int ) : io ()
  c "kk_hica_sqlite_close"

pub extern sqlite_errmsg_raw( h : int ) : io string
  c "kk_hica_sqlite_errmsg"

pub extern sqlite_errcode_raw( h : int ) : io int
  c "kk_hica_sqlite_errcode"

// ---------------------------------------------------------------------------
// Metadata
// ---------------------------------------------------------------------------

pub extern sqlite_last_insert_id_raw( h : int ) : io int
  c "kk_hica_sqlite_last_insert_id"

pub extern sqlite_changes_raw( h : int ) : io int
  c "kk_hica_sqlite_changes"

pub extern sqlite_changes_total_raw( h : int ) : io int
  c "kk_hica_sqlite_changes_total"

// ---------------------------------------------------------------------------
// Execute (no rows returned)
// ---------------------------------------------------------------------------

pub extern sqlite_exec_raw( h : int, sql : string ) : io int
  c "kk_hica_sqlite_exec"

pub extern sqlite_exec_batch_raw( h : int, sql : string ) : io int
  c "kk_hica_sqlite_exec_batch"

pub extern sqlite_exec_p_raw( h : int, sql : string, params : string ) : io int
  c "kk_hica_sqlite_exec_p"

pub extern sqlite_exec_named_raw( h : int, sql : string, params : string ) : io int
  c "kk_hica_sqlite_exec_named"

// ---------------------------------------------------------------------------
// Query (rows returned)
// ---------------------------------------------------------------------------

pub extern sqlite_query_p_raw( h : int, sql : string, params : string ) : io string
  c "kk_hica_sqlite_query_p"

pub extern sqlite_query_named_raw( h : int, sql : string, params : string ) : io string
  c "kk_hica_sqlite_query_named"
