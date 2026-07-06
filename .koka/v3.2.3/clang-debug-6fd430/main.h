#pragma once
#ifndef kk_main_H
#define kk_main_H
// Koka generated module: main, koka version: 3.2.3, platform: 64-bit
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
#include "sqlite.h"
#include "sqlite__ffi.h"

// type declarations

// value declarations

kk_unit_t kk_main_hc_assert(bool b, kk_context_t* _ctx); /* (b : bool) -> exn () */ 
 
// monadic lift

static inline kk_string_t kk_main__mlift_hc_show_maybe_10111(kk_string_t _y_x10075, kk_context_t* _ctx) { /* forall<e> (string) -> e string */ 
  kk_string_t _x_x411;
  kk_define_string_literal(static, _s_x412, 5, "Some(", _ctx)
  _x_x411 = kk_string_dup(_s_x412, _ctx); /*string*/
  kk_string_t _x_x413;
  kk_string_t _x_x414;
  kk_define_string_literal(static, _s_x415, 1, ")", _ctx)
  _x_x414 = kk_string_dup(_s_x415, _ctx); /*string*/
  _x_x413 = kk_std_core_types__lp__plus__plus__rp_(_y_x10075, _x_x414, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x411, _x_x413, _ctx);
}

kk_string_t kk_main_hc_show_maybe(kk_std_core_types__maybe m, kk_function_t show_a, kk_context_t* _ctx); /* forall<a,e> (m : maybe<a>, show-a : (a) -> e string) -> e string */ 
 
// monadic lift

static inline kk_string_t kk_main__mlift_hc_show_result_10112(kk_string_t _y_x10077, kk_context_t* _ctx) { /* forall<e> (string) -> e string */ 
  kk_string_t _x_x430;
  kk_define_string_literal(static, _s_x431, 3, "Ok(", _ctx)
  _x_x430 = kk_string_dup(_s_x431, _ctx); /*string*/
  kk_string_t _x_x432;
  kk_string_t _x_x433;
  kk_define_string_literal(static, _s_x434, 1, ")", _ctx)
  _x_x433 = kk_string_dup(_s_x434, _ctx); /*string*/
  _x_x432 = kk_std_core_types__lp__plus__plus__rp_(_y_x10077, _x_x433, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x430, _x_x432, _ctx);
}
 
// monadic lift

static inline kk_string_t kk_main__mlift_hc_show_result_10113(kk_string_t _y_x10078, kk_context_t* _ctx) { /* forall<e> (string) -> e string */ 
  kk_string_t _x_x435;
  kk_define_string_literal(static, _s_x436, 4, "Err(", _ctx)
  _x_x435 = kk_string_dup(_s_x436, _ctx); /*string*/
  kk_string_t _x_x437;
  kk_string_t _x_x438;
  kk_define_string_literal(static, _s_x439, 1, ")", _ctx)
  _x_x438 = kk_string_dup(_s_x439, _ctx); /*string*/
  _x_x437 = kk_std_core_types__lp__plus__plus__rp_(_y_x10078, _x_x438, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x435, _x_x437, _ctx);
}

kk_string_t kk_main_hc_show_result(kk_std_core_types__either r, kk_function_t show_a, kk_function_t show_e, kk_context_t* _ctx); /* forall<a,b,e> (r : either<a,b>, show-a : (b) -> e string, show-e : (a) -> e string) -> e string */ 

static inline kk_integer_t kk_main_hc__abs(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> int */ 
  bool _match_x393 = kk_integer_lt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x393) {
    return kk_integer_sub((kk_integer_from_small(0)),n,kk_context());
  }
  {
    return n;
  }
}

static inline kk_integer_t kk_main_hc__min(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> int */ 
  bool _match_x392 = kk_integer_lt_borrow(a,b,kk_context()); /*bool*/;
  if (_match_x392) {
    kk_integer_drop(b, _ctx);
    return a;
  }
  {
    kk_integer_drop(a, _ctx);
    return b;
  }
}

static inline kk_integer_t kk_main_hc__max(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> int */ 
  bool _match_x391 = kk_integer_gt_borrow(a,b,kk_context()); /*bool*/;
  if (_match_x391) {
    kk_integer_drop(b, _ctx);
    return a;
  }
  {
    kk_integer_drop(a, _ctx);
    return b;
  }
}

kk_integer_t kk_main_hc__clamp(kk_integer_t v, kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx); /* (v : int, lo : int, hi : int) -> int */ 

kk_integer_t kk_main_hc__gcd(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx); /* (a : int, b : int) -> div int */ 

kk_integer_t kk_main_hc__lcm(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx); /* (a : int, b : int) -> div int */ 

kk_integer_t kk_main_hc__pow(kk_integer_t base, kk_integer_t exp, kk_context_t* _ctx); /* (base : int, exp : int) -> div int */ 

kk_integer_t kk_main_hc__sign(kk_integer_t n, kk_context_t* _ctx); /* (n : int) -> int */ 

kk_std_core_types__list kk_main_hc__range(kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx); /* (lo : int, hi : int) -> div list<int> */ 

kk_std_core_types__list kk_main_hc__range__inc(kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx); /* (lo : int, hi : int) -> div list<int> */ 

kk_integer_t kk_main_hc__isqrt__loop(kk_integer_t n, kk_integer_t x0, kk_integer_t x1, kk_context_t* _ctx); /* (n : int, x0 : int, x1 : int) -> div int */ 

kk_integer_t kk_main_hc__isqrt(kk_integer_t n, kk_context_t* _ctx); /* (n : int) -> div int */ 

bool kk_main_hc__is__digit(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_main_hc__is__upper(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_main_hc__is__lower(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_main_hc__is__alpha(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_main_hc__is__alnum(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_main_hc__is__space(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_main_hc__is__punct(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_main_hc__all__digits(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_main_hc__all__alpha(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_main_hc__all__upper(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_main_hc__all__lower(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_main_hc__all__alnum(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_main_hc__glob__match__chars(kk_std_core_types__list pat, kk_std_core_types__list input, kk_context_t* _ctx); /* (pat : list<char>, input : list<char>) -> div bool */ 

bool kk_main_hc__glob__star(kk_std_core_types__list prest_0, kk_std_core_types__list input_0, kk_context_t* _ctx); /* (prest : list<char>, input : list<char>) -> div bool */ 

static inline bool kk_main_hc__glob__match(kk_string_t pattern, kk_string_t s, kk_context_t* _ctx) { /* (pattern : string, s : string) -> div bool */ 
  kk_std_core_types__list _x_x521 = kk_std_core_string_list(pattern, _ctx); /*list<char>*/
  kk_std_core_types__list _x_x522 = kk_std_core_string_list(s, _ctx); /*list<char>*/
  return kk_main_hc__glob__match__chars(_x_x521, _x_x522, _ctx);
}

bool kk_main_hc__glob__doublestar(kk_std_core_types__list prest, kk_std_core_types__list paths, kk_context_t* _ctx); /* (prest : list<string>, paths : list<string>) -> div bool */ 

bool kk_main_hc__glob__match__segments(kk_std_core_types__list pats, kk_std_core_types__list paths_0, kk_context_t* _ctx); /* (pats : list<string>, paths : list<string>) -> div bool */ 

bool kk_main_hc__glob__match__path(kk_string_t pattern, kk_string_t hc__path, kk_context_t* _ctx); /* (pattern : string, hc_path : string) -> div bool */ 

static inline bool kk_main_hc__is__empty(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  kk_integer_t _brw_x315 = kk_std_core_string_chars_fs_count(s, _ctx); /*int*/;
  bool _brw_x316 = kk_integer_eq_borrow(_brw_x315,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x315, _ctx);
  return _brw_x316;
}

static inline bool kk_main_hc__is__blank(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  kk_string_t s_0_10036;
  kk_string_t _x_x551 = kk_string_trim_left(s,kk_context()); /*string*/
  s_0_10036 = kk_string_trim_right(_x_x551,kk_context()); /*string*/
  kk_integer_t _brw_x313 = kk_std_core_string_chars_fs_count(s_0_10036, _ctx); /*int*/;
  bool _brw_x314 = kk_integer_eq_borrow(_brw_x313,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x313, _ctx);
  return _brw_x314;
}

kk_std_core_types__list kk_main_hc__words(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> list<string> */ 

kk_std_core_types__list kk_main_hc__lines(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> list<string> */ 

static inline kk_string_t kk_main_hc__unwords(kk_std_core_types__list ws, kk_context_t* _ctx) { /* (ws : list<string>) -> string */ 
  kk_string_t _x_x572;
  kk_define_string_literal(static, _s_x573, 1, " ", _ctx)
  _x_x572 = kk_string_dup(_s_x573, _ctx); /*string*/
  return kk_std_core_list_joinsep(ws, _x_x572, _ctx);
}

static inline kk_string_t kk_main_hc__unlines(kk_std_core_types__list ls, kk_context_t* _ctx) { /* (ls : list<string>) -> string */ 
  kk_string_t _x_x574;
  kk_define_string_literal(static, _s_x575, 1, "\n", _ctx)
  _x_x574 = kk_string_dup(_s_x575, _ctx); /*string*/
  return kk_std_core_list_joinsep(ls, _x_x574, _ctx);
}

kk_string_t kk_main_hc__repeat__str(kk_string_t s, kk_integer_t n, kk_context_t* _ctx); /* (s : string, n : int) -> div string */ 

kk_string_t kk_main_hc__pad__left(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx); /* (s : string, width : int, ch : string) -> div string */ 

kk_string_t kk_main_hc__pad__right(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx); /* (s : string, width : int, ch : string) -> div string */ 

kk_string_t kk_main_hc__center(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx); /* (s : string, width : int, ch : string) -> div string */ 

kk_string_t kk_main_hc__removeprefix(kk_string_t s, kk_string_t pre, kk_context_t* _ctx); /* (s : string, pre : string) -> string */ 

kk_unit_t kk_main__mlift_hc__print__all__rows_10114(kk_std_core_types__either _y_x10080, kk_context_t* _ctx); /* (either<string,sqlite/queryresult>) -> io () */ 

kk_unit_t kk_main_hc__print__all__rows(kk_sqlite__db db, kk_string_t sql, kk_context_t* _ctx); /* (db : sqlite/db, sql : string) -> io () */ 

kk_unit_t kk_main__mlift_hc__print__filtered_10115(kk_std_core_types__either _y_x10082, kk_context_t* _ctx); /* (either<string,sqlite/queryresult>) -> io () */ 

kk_unit_t kk_main_hc__print__filtered(kk_sqlite__db db, kk_context_t* _ctx); /* (db : sqlite/db) -> io () */ 

kk_unit_t kk_main__mlift_hc__print__table__check_10116(kk_string_t name, kk_std_core_types__either _y_x10084, kk_context_t* _ctx); /* (name : string, either<string,bool>) -> io () */ 

kk_unit_t kk_main_hc__print__table__check(kk_sqlite__db db, kk_string_t name, kk_context_t* _ctx); /* (db : sqlite/db, name : string) -> io () */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift_hc__run__demo_10117(kk_sqlite__db db, kk_integer_t _y_x10093, kk_context_t* _ctx) { /* (db : sqlite/db, int) -> io () */ 
  kk_unit_t ___7 = kk_Unit;
  kk_string_t _x_x672;
  kk_string_t _x_x673;
  kk_define_string_literal(static, _s_x674, 16, "Last insert id: ", _ctx)
  _x_x673 = kk_string_dup(_s_x674, _ctx); /*string*/
  kk_string_t _x_x675 = kk_std_core_int_show(_y_x10093, _ctx); /*string*/
  _x_x672 = kk_std_core_types__lp__plus__plus__rp_(_x_x673, _x_x675, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x672, _ctx);
  kk_string_t _x_x676;
  kk_define_string_literal(static, _s_x677, 5, "notes", _ctx)
  _x_x676 = kk_string_dup(_s_x677, _ctx); /*string*/
  kk_main_hc__print__table__check(db, _x_x676, _ctx); return kk_Unit;
}

kk_unit_t kk_main__mlift_hc__run__demo_10118(kk_sqlite__db db, kk_unit_t wild___5, kk_context_t* _ctx); /* (db : sqlite/db, wild_@5 : ()) -> io () */ 

kk_unit_t kk_main__mlift_hc__run__demo_10119(kk_sqlite__db db, kk_unit_t _c_x10091, kk_context_t* _ctx); /* (db : sqlite/db, ()) -> () */ 

kk_unit_t kk_main__mlift_hc__run__demo_10120(kk_sqlite__db db, kk_std_core_types__either _y_x10090, kk_context_t* _ctx); /* (db : sqlite/db, either<string,sqlite/queryresult>) -> io () */ 

kk_unit_t kk_main__mlift_hc__run__demo_10121(kk_sqlite__db db, kk_integer_t _y_x10089, kk_context_t* _ctx); /* (db : sqlite/db, int) -> io () */ 

kk_unit_t kk_main__mlift_hc__run__demo_10122(kk_sqlite__db db, kk_std_core_types__either _pat_1, kk_context_t* _ctx); /* (db : sqlite/db, either<string,bool>) -> io () */ 

kk_unit_t kk_main__mlift_hc__run__demo_10123(kk_sqlite__db db, kk_std_core_types__either _pat_0, kk_context_t* _ctx); /* (db : sqlite/db, either<string,bool>) -> io () */ 

kk_unit_t kk_main__mlift_hc__run__demo_10124(kk_sqlite__db db, kk_std_core_types__either _pat, kk_context_t* _ctx); /* (db : sqlite/db, either<string,bool>) -> io () */ 

kk_unit_t kk_main_hc__run__demo(kk_sqlite__db db, kk_context_t* _ctx); /* (db : sqlite/db) -> io () */ 

kk_unit_t kk_main__mlift_main_10125(kk_std_core_types__either _y_x10095, kk_context_t* _ctx); /* (either<string,bool>) -> io () */ 

kk_unit_t kk_main_main(kk_context_t* _ctx); /* () -> io () */ 

void kk_main__init(kk_context_t* _ctx);


void kk_main__done(kk_context_t* _ctx);

#endif // header
