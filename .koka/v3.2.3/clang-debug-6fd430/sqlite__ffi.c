// Koka generated module: sqlite_ffi, koka version: 3.2.3, platform: 64-bit
#include "sqlite__ffi.h"
/*
 * hica – SQLite3 C backend
 *
 *  /==\   /==\                  Moonbun says:
 *  |  |   |  |      *  .    "store all the things!"
 *   \  \ /  /  .         *
 *    ( o.o )    ← robot bunny
 *    ( ^‿^ )
 *   /[hica=>]\
 *  /___________\
 *
 * This source file is part of the hica open source project
 * Copyright (C) 2026 Claes Adamsson <claes.adamsson@gmail.com>
 *
 * See https://github.com/cladam/hica/blob/main/LICENSE for license information
 *
 * Strategy
 * --------
 * sqlite3* handles are passed across the FFI boundary as int64_t.
 * On all 64-bit platforms hica targets, sizeof(void*) == 8, so this is safe.
 * Passing 0 as a handle is treated as a NULL / invalid-db sentinel.
 *
 * Row serialisation
 * -----------------
 * Returning structured data (rows × columns) through the Koka C FFI is
 * non-trivial because we would need to build kk_vector_t chains by hand.
 * Instead, each query packs its result into a single flat string:
 *
 *   <col1>\x1F<col2>\x1F...\x1E<val1>\x1F<val2>\x1F...\x1E...
 *
 *   \x1F  Unit Separator  — separates column/field values within a row
 *   \x1E  Record Separator — separates rows (first row = column names)
 *   NULL  SQL NULL is serialised as the empty string ""
 *
 * The hica stdlib layer (sqlite.hc) parses this back into
 * list<list<string>> and then into the typed QueryResult struct.
 *
 * Parameterised queries
 * ---------------------
 * Callers pass params as a single \x1F-delimited string.
 * kk_hica_sqlite_query_p / kk_hica_sqlite_exec_p split on \x1F,
 * then bind each token as SQLITE_TEXT via sqlite3_bind_text.
 * This eliminates SQL-injection at the C layer for all parameterised paths.
 *
 * Build note
 * ----------
 * Link with: -lsqlite3
 * macOS system SQLite lives in /usr/lib/libsqlite3.dylib (always present).
 * Linux: apt install libsqlite3-dev  /  dnf install sqlite-devel
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <sqlite3.h>

// ---------------------------------------------------------------------------
// Internal helpers
// ---------------------------------------------------------------------------

// Pack a sqlite3* into int64_t for transport across the FFI.
static inline int64_t db_to_handle(sqlite3* db) {
  return (int64_t)(uintptr_t)db;
}

// Unpack int64_t back to sqlite3*.  Returns NULL for invalid handles.
static inline sqlite3* handle_to_db(int64_t h) {
  return (sqlite3*)(uintptr_t)h;
}

// Grow-buffer for building the serialised result string.
typedef struct {
  char*  data;
  size_t size;
  size_t cap;
} hica_sb_t;

static int sb_push(hica_sb_t* sb, const char* src, size_t n) {
  if (sb->size + n + 1 > sb->cap) {
    size_t new_cap = (sb->cap + n + 1) * 2;
    char* p = (char*)realloc(sb->data, new_cap);
    if (!p) return 0;
    sb->data = p;
    sb->cap  = new_cap;
  }
  memcpy(sb->data + sb->size, src, n);
  sb->size += n;
  sb->data[sb->size] = '\0';
  return 1;
}

static int sb_push_sep(hica_sb_t* sb, char c) { return sb_push(sb, &c, 1); }

// ---------------------------------------------------------------------------
// kk_hica_sqlite_open — open (or create) a database file
//
// Returns the sqlite3* handle cast to int64_t, or 0 on failure.
// ---------------------------------------------------------------------------

static kk_integer_t kk_hica_sqlite_open(kk_string_t path_str, kk_context_t* ctx) {
  const char* path = kk_string_cbuf_borrow(path_str, NULL, ctx);
  sqlite3* db = NULL;
  if (sqlite3_open(path, &db) != SQLITE_OK) {
    if (db) sqlite3_close(db);
    kk_string_drop(path_str, ctx);
    return kk_integer_from_int(0, ctx);
  }
  // Enable WAL mode for better concurrency (non-fatal if it fails).
  sqlite3_exec(db, "PRAGMA journal_mode=WAL;", NULL, NULL, NULL);
  kk_string_drop(path_str, ctx);
  return kk_integer_from_int64(db_to_handle(db), ctx);
}

// ---------------------------------------------------------------------------
// kk_hica_sqlite_close — close a database handle
// ---------------------------------------------------------------------------

static void kk_hica_sqlite_close(kk_integer_t h_kk, kk_context_t* ctx) {
  int64_t handle = kk_integer_clamp64(h_kk, ctx);
  sqlite3* db = handle_to_db(handle);
  if (db) sqlite3_close(db);
  (void)ctx;
}

// ---------------------------------------------------------------------------
// kk_hica_sqlite_errmsg — last error message for a handle
//
// Returns a freshly-allocated kk_string_t owned by the Koka GC.
// ---------------------------------------------------------------------------

static kk_string_t kk_hica_sqlite_errmsg(kk_integer_t h_kk, kk_context_t* ctx) {
  int64_t handle = kk_integer_clamp64(h_kk, ctx);
  sqlite3* db = handle_to_db(handle);
  if (!db) return kk_string_alloc_dup_valid_utf8("invalid db handle", ctx);
  return kk_string_alloc_dup_valid_utf8(sqlite3_errmsg(db), ctx);
}

// ---------------------------------------------------------------------------
// kk_hica_sqlite_last_insert_id
// ---------------------------------------------------------------------------

static kk_integer_t kk_hica_sqlite_last_insert_id(kk_integer_t h_kk, kk_context_t* ctx) {
  int64_t handle = kk_integer_clamp64(h_kk, ctx);
  sqlite3* db = handle_to_db(handle);
  (void)ctx;
  return kk_integer_from_int64(db ? (int64_t)sqlite3_last_insert_rowid(db) : -1, ctx);
}

// ---------------------------------------------------------------------------
// kk_hica_sqlite_changes — rows affected by last INSERT/UPDATE/DELETE
// ---------------------------------------------------------------------------

static kk_integer_t kk_hica_sqlite_changes(kk_integer_t h_kk, kk_context_t* ctx) {
  int64_t handle = kk_integer_clamp64(h_kk, ctx);
  sqlite3* db = handle_to_db(handle);
  (void)ctx;
  return kk_integer_from_int(db ? sqlite3_changes(db) : 0, ctx);
}

// ---------------------------------------------------------------------------
// kk_hica_sqlite_exec — run a plain SQL statement (no result rows)
//
// Returns 0 on success, non-zero on failure.
// ---------------------------------------------------------------------------

static kk_integer_t kk_hica_sqlite_exec(kk_integer_t h_kk, kk_string_t sql_str, kk_context_t* ctx) {
  int64_t handle = kk_integer_clamp64(h_kk, ctx);
  sqlite3* db = handle_to_db(handle);
  if (!db) { kk_string_drop(sql_str, ctx); return kk_integer_from_int(-1, ctx); }
  const char* sql = kk_string_cbuf_borrow(sql_str, NULL, ctx);
  char* errmsg = NULL;
  int rc = sqlite3_exec(db, sql, NULL, NULL, &errmsg);
  if (errmsg) sqlite3_free(errmsg);
  kk_string_drop(sql_str, ctx);
  return kk_integer_from_int(rc, ctx);
}

// ---------------------------------------------------------------------------
// kk_hica_sqlite_exec_p — parameterised exec (? placeholders)
//
// params_str: \x1F-delimited list of text values, one per ? placeholder.
// Returns 0 on success, non-zero on failure.
// ---------------------------------------------------------------------------

static kk_integer_t kk_hica_sqlite_exec_p(kk_integer_t h_kk, kk_string_t sql_str,
                                           kk_string_t params_str, kk_context_t* ctx) {
  int64_t handle = kk_integer_clamp64(h_kk, ctx);
  sqlite3* db = handle_to_db(handle);
  if (!db) {
    kk_string_drop(sql_str, ctx);
    kk_string_drop(params_str, ctx);
    return kk_integer_from_int(-1, ctx);
  }
  const char* sql    = kk_string_cbuf_borrow(sql_str, NULL, ctx);
  const char* params = kk_string_cbuf_borrow(params_str, NULL, ctx);

  sqlite3_stmt* stmt = NULL;
  int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);
  if (rc != SQLITE_OK) goto done;

  // Bind each \x1F-delimited token in order.
  {
    char* copy = strdup(params);
    char* tok  = strtok(copy, "\x1F");
    int   idx  = 1;
    while (tok) {
      sqlite3_bind_text(stmt, idx++, tok, -1, SQLITE_TRANSIENT);
      tok = strtok(NULL, "\x1F");
    }
    free(copy);
  }

  rc = sqlite3_step(stmt);
  if (rc == SQLITE_DONE) rc = SQLITE_OK;

done:
  if (stmt) sqlite3_finalize(stmt);
  kk_string_drop(sql_str, ctx);
  kk_string_drop(params_str, ctx);
  return kk_integer_from_int((rc == SQLITE_OK) ? 0 : rc, ctx);
}

// ---------------------------------------------------------------------------
// kk_hica_sqlite_query_p — parameterised SELECT, returns serialised rows
//
// params_str: \x1F-delimited bind values (pass empty string for no params).
//
// Return format (a single kk_string_t):
//   col1\x1Fcol2\x1F...\x1E   ← header row  (column names)
//   val1\x1Fval2\x1F...\x1E   ← data row 0
//   val1\x1Fval2\x1F...\x1E   ← data row 1
//   ...
//
// Returns an empty string on failure (caller checks via sqlite_errmsg).
// ---------------------------------------------------------------------------

static kk_string_t kk_hica_sqlite_query_p(kk_integer_t h_kk, kk_string_t sql_str,
                                           kk_string_t params_str, kk_context_t* ctx) {
  int64_t handle = kk_integer_clamp64(h_kk, ctx);
  sqlite3* db = handle_to_db(handle);
  if (!db) {
    kk_string_drop(sql_str, ctx);
    kk_string_drop(params_str, ctx);
    return kk_string_alloc_dup_valid_utf8("", ctx);
  }

  const char* sql    = kk_string_cbuf_borrow(sql_str, NULL, ctx);
  const char* params = kk_string_cbuf_borrow(params_str, NULL, ctx);

  sqlite3_stmt* stmt = NULL;
  hica_sb_t sb = { NULL, 0, 0 };
  int ok = 1;

  if (sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) != SQLITE_OK) {
    ok = 0; goto done;
  }

  // Bind parameters.
  {
    char* copy = strdup(params);
    char* tok  = strtok(copy, "\x1F");
    int   idx  = 1;
    while (tok) {
      sqlite3_bind_text(stmt, idx++, tok, -1, SQLITE_TRANSIENT);
      tok = strtok(NULL, "\x1F");
    }
    free(copy);
  }

  // Emit header row (column names).
  {
    int ncols = sqlite3_column_count(stmt);
    for (int c = 0; c < ncols; c++) {
      const char* name = sqlite3_column_name(stmt, c);
      if (c > 0) sb_push_sep(&sb, '\x1F');
      sb_push(&sb, name ? name : "", name ? strlen(name) : 0);
    }
    sb_push_sep(&sb, '\x1E');
  }

  // Emit data rows.
  while (sqlite3_step(stmt) == SQLITE_ROW) {
    int ncols = sqlite3_column_count(stmt);
    for (int c = 0; c < ncols; c++) {
      const char* val = (const char*)sqlite3_column_text(stmt, c);
      if (c > 0) sb_push_sep(&sb, '\x1F');
      sb_push(&sb, val ? val : "", val ? strlen(val) : 0);
    }
    sb_push_sep(&sb, '\x1E');
  }

done:
  if (stmt) sqlite3_finalize(stmt);
  kk_string_drop(sql_str, ctx);
  kk_string_drop(params_str, ctx);

  if (!ok || !sb.data) {
    free(sb.data);
    return kk_string_alloc_dup_valid_utf8("", ctx);
  }

  // Transfer sb.data ownership to Koka's GC.
  kk_string_t result = kk_string_alloc_dup_valid_utf8(sb.data, ctx);
  free(sb.data);
  return result;
}


kk_integer_t kk_sqlite__ffi_sqlite__open__raw(kk_string_t path, kk_context_t* _ctx) { /* (path : string) -> io int */ 
  return kk_hica_sqlite_open(path,kk_context());
}

kk_unit_t kk_sqlite__ffi_sqlite__close__raw(kk_integer_t h, kk_context_t* _ctx) { /* (h : int) -> io () */ 
  kk_hica_sqlite_close(h,kk_context()); return kk_Unit;
}

kk_string_t kk_sqlite__ffi_sqlite__errmsg__raw(kk_integer_t h, kk_context_t* _ctx) { /* (h : int) -> io string */ 
  return kk_hica_sqlite_errmsg(h,kk_context());
}

kk_integer_t kk_sqlite__ffi_sqlite__last__insert__id__raw(kk_integer_t h, kk_context_t* _ctx) { /* (h : int) -> io int */ 
  return kk_hica_sqlite_last_insert_id(h,kk_context());
}

kk_integer_t kk_sqlite__ffi_sqlite__changes__raw(kk_integer_t h, kk_context_t* _ctx) { /* (h : int) -> io int */ 
  return kk_hica_sqlite_changes(h,kk_context());
}

kk_integer_t kk_sqlite__ffi_sqlite__exec__raw(kk_integer_t h, kk_string_t sql, kk_context_t* _ctx) { /* (h : int, sql : string) -> io int */ 
  return kk_hica_sqlite_exec(h,sql,kk_context());
}

kk_integer_t kk_sqlite__ffi_sqlite__exec__p__raw(kk_integer_t h, kk_string_t sql, kk_string_t params, kk_context_t* _ctx) { /* (h : int, sql : string, params : string) -> io int */ 
  return kk_hica_sqlite_exec_p(h,sql,params,kk_context());
}

kk_string_t kk_sqlite__ffi_sqlite__query__p__raw(kk_integer_t h, kk_string_t sql, kk_string_t params, kk_context_t* _ctx) { /* (h : int, sql : string, params : string) -> io string */ 
  return kk_hica_sqlite_query_p(h,sql,params,kk_context());
}

// initialization
void kk_sqlite__ffi__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core_hnd__init(_ctx);
  kk_std_core_exn__init(_ctx);
  kk_std_core_bool__init(_ctx);
  kk_std_core_order__init(_ctx);
  kk_std_core_char__init(_ctx);
  kk_std_core_int__init(_ctx);
  kk_std_core_vector__init(_ctx);
  kk_std_core_string__init(_ctx);
  kk_std_core_sslice__init(_ctx);
  kk_std_core_list__init(_ctx);
  kk_std_core_maybe__init(_ctx);
  kk_std_core_maybe2__init(_ctx);
  kk_std_core_either__init(_ctx);
  kk_std_core_tuple__init(_ctx);
  kk_std_core_lazy__init(_ctx);
  kk_std_core_show__init(_ctx);
  kk_std_core_debug__init(_ctx);
  kk_std_core_delayed__init(_ctx);
  kk_std_core_console__init(_ctx);
  kk_std_core__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_sqlite__ffi__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core__done(_ctx);
  kk_std_core_console__done(_ctx);
  kk_std_core_delayed__done(_ctx);
  kk_std_core_debug__done(_ctx);
  kk_std_core_show__done(_ctx);
  kk_std_core_lazy__done(_ctx);
  kk_std_core_tuple__done(_ctx);
  kk_std_core_either__done(_ctx);
  kk_std_core_maybe2__done(_ctx);
  kk_std_core_maybe__done(_ctx);
  kk_std_core_list__done(_ctx);
  kk_std_core_sslice__done(_ctx);
  kk_std_core_string__done(_ctx);
  kk_std_core_vector__done(_ctx);
  kk_std_core_int__done(_ctx);
  kk_std_core_char__done(_ctx);
  kk_std_core_order__done(_ctx);
  kk_std_core_bool__done(_ctx);
  kk_std_core_exn__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
