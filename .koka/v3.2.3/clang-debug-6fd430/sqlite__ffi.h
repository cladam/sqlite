#pragma once
#ifndef kk_sqlite__ffi_H
#define kk_sqlite__ffi_H
// Koka generated module: sqlite_ffi, koka version: 3.2.3, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core_hnd.h"
#include "std_core_exn.h"
#include "std_core_bool.h"
#include "std_core_order.h"
#include "std_core_char.h"
#include "std_core_int.h"
#include "std_core_vector.h"
#include "std_core_string.h"
#include "std_core_sslice.h"
#include "std_core_list.h"
#include "std_core_maybe.h"
#include "std_core_maybe2.h"
#include "std_core_either.h"
#include "std_core_tuple.h"
#include "std_core_lazy.h"
#include "std_core_show.h"
#include "std_core_debug.h"
#include "std_core_delayed.h"
#include "std_core_console.h"
#include "std_core.h"

// type declarations

// value declarations

kk_integer_t kk_sqlite__ffi_sqlite__open__raw(kk_string_t path, kk_context_t* _ctx); /* (path : string) -> io int */ 

kk_unit_t kk_sqlite__ffi_sqlite__close__raw(kk_integer_t h, kk_context_t* _ctx); /* (h : int) -> io () */ 

kk_string_t kk_sqlite__ffi_sqlite__errmsg__raw(kk_integer_t h, kk_context_t* _ctx); /* (h : int) -> io string */ 

kk_integer_t kk_sqlite__ffi_sqlite__last__insert__id__raw(kk_integer_t h, kk_context_t* _ctx); /* (h : int) -> io int */ 

kk_integer_t kk_sqlite__ffi_sqlite__changes__raw(kk_integer_t h, kk_context_t* _ctx); /* (h : int) -> io int */ 

kk_integer_t kk_sqlite__ffi_sqlite__exec__raw(kk_integer_t h, kk_string_t sql, kk_context_t* _ctx); /* (h : int, sql : string) -> io int */ 

kk_integer_t kk_sqlite__ffi_sqlite__exec__p__raw(kk_integer_t h, kk_string_t sql, kk_string_t params, kk_context_t* _ctx); /* (h : int, sql : string, params : string) -> io int */ 

kk_string_t kk_sqlite__ffi_sqlite__query__p__raw(kk_integer_t h, kk_string_t sql, kk_string_t params, kk_context_t* _ctx); /* (h : int, sql : string, params : string) -> io string */ 

void kk_sqlite__ffi__init(kk_context_t* _ctx);


void kk_sqlite__ffi__done(kk_context_t* _ctx);

#endif // header
