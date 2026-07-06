#pragma once
#ifndef kk_examples_basic_H
#define kk_examples_basic_H
// Koka generated module: examples/basic, koka version: 3.2.3, platform: 64-bit
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

kk_unit_t kk_examples_basic_hc_assert(bool b, kk_context_t* _ctx); /* (b : bool) -> exn () */ 
 
// monadic lift

static inline kk_string_t kk_examples_basic__mlift_hc_show_maybe_10115(kk_string_t _y_x10074, kk_context_t* _ctx) { /* forall<e> (string) -> e string */ 
  kk_string_t _x_x491;
  kk_define_string_literal(static, _s_x492, 5, "Some(", _ctx)
  _x_x491 = kk_string_dup(_s_x492, _ctx); /*string*/
  kk_string_t _x_x493;
  kk_string_t _x_x494;
  kk_define_string_literal(static, _s_x495, 1, ")", _ctx)
  _x_x494 = kk_string_dup(_s_x495, _ctx); /*string*/
  _x_x493 = kk_std_core_types__lp__plus__plus__rp_(_y_x10074, _x_x494, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x491, _x_x493, _ctx);
}

kk_string_t kk_examples_basic_hc_show_maybe(kk_std_core_types__maybe m, kk_function_t show_a, kk_context_t* _ctx); /* forall<a,e> (m : maybe<a>, show-a : (a) -> e string) -> e string */ 
 
// monadic lift

static inline kk_string_t kk_examples_basic__mlift_hc_show_result_10116(kk_string_t _y_x10076, kk_context_t* _ctx) { /* forall<e> (string) -> e string */ 
  kk_string_t _x_x510;
  kk_define_string_literal(static, _s_x511, 3, "Ok(", _ctx)
  _x_x510 = kk_string_dup(_s_x511, _ctx); /*string*/
  kk_string_t _x_x512;
  kk_string_t _x_x513;
  kk_define_string_literal(static, _s_x514, 1, ")", _ctx)
  _x_x513 = kk_string_dup(_s_x514, _ctx); /*string*/
  _x_x512 = kk_std_core_types__lp__plus__plus__rp_(_y_x10076, _x_x513, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x510, _x_x512, _ctx);
}
 
// monadic lift

static inline kk_string_t kk_examples_basic__mlift_hc_show_result_10117(kk_string_t _y_x10077, kk_context_t* _ctx) { /* forall<e> (string) -> e string */ 
  kk_string_t _x_x515;
  kk_define_string_literal(static, _s_x516, 4, "Err(", _ctx)
  _x_x515 = kk_string_dup(_s_x516, _ctx); /*string*/
  kk_string_t _x_x517;
  kk_string_t _x_x518;
  kk_define_string_literal(static, _s_x519, 1, ")", _ctx)
  _x_x518 = kk_string_dup(_s_x519, _ctx); /*string*/
  _x_x517 = kk_std_core_types__lp__plus__plus__rp_(_y_x10077, _x_x518, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x515, _x_x517, _ctx);
}

kk_string_t kk_examples_basic_hc_show_result(kk_std_core_types__either r, kk_function_t show_a, kk_function_t show_e, kk_context_t* _ctx); /* forall<a,b,e> (r : either<a,b>, show-a : (b) -> e string, show-e : (a) -> e string) -> e string */ 

static inline kk_integer_t kk_examples_basic_hc__abs(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> int */ 
  bool _match_x473 = kk_integer_lt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x473) {
    return kk_integer_sub((kk_integer_from_small(0)),n,kk_context());
  }
  {
    return n;
  }
}

static inline kk_integer_t kk_examples_basic_hc__min(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> int */ 
  bool _match_x472 = kk_integer_lt_borrow(a,b,kk_context()); /*bool*/;
  if (_match_x472) {
    kk_integer_drop(b, _ctx);
    return a;
  }
  {
    kk_integer_drop(a, _ctx);
    return b;
  }
}

static inline kk_integer_t kk_examples_basic_hc__max(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> int */ 
  bool _match_x471 = kk_integer_gt_borrow(a,b,kk_context()); /*bool*/;
  if (_match_x471) {
    kk_integer_drop(b, _ctx);
    return a;
  }
  {
    kk_integer_drop(a, _ctx);
    return b;
  }
}

kk_integer_t kk_examples_basic_hc__clamp(kk_integer_t v, kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx); /* (v : int, lo : int, hi : int) -> int */ 

kk_integer_t kk_examples_basic_hc__gcd(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx); /* (a : int, b : int) -> div int */ 

kk_integer_t kk_examples_basic_hc__lcm(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx); /* (a : int, b : int) -> div int */ 

kk_integer_t kk_examples_basic_hc__pow(kk_integer_t base, kk_integer_t exp, kk_context_t* _ctx); /* (base : int, exp : int) -> div int */ 

kk_integer_t kk_examples_basic_hc__sign(kk_integer_t n, kk_context_t* _ctx); /* (n : int) -> int */ 

kk_std_core_types__list kk_examples_basic_hc__range(kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx); /* (lo : int, hi : int) -> div list<int> */ 

kk_std_core_types__list kk_examples_basic_hc__range__inc(kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx); /* (lo : int, hi : int) -> div list<int> */ 

kk_integer_t kk_examples_basic_hc__isqrt__loop(kk_integer_t n, kk_integer_t x0, kk_integer_t x1, kk_context_t* _ctx); /* (n : int, x0 : int, x1 : int) -> div int */ 

kk_integer_t kk_examples_basic_hc__isqrt(kk_integer_t n, kk_context_t* _ctx); /* (n : int) -> div int */ 

bool kk_examples_basic_hc__is__digit(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_examples_basic_hc__is__upper(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_examples_basic_hc__is__lower(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_examples_basic_hc__is__alpha(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_examples_basic_hc__is__alnum(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_examples_basic_hc__is__space(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_examples_basic_hc__is__punct(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_examples_basic_hc__all__digits(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_examples_basic_hc__all__alpha(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_examples_basic_hc__all__upper(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_examples_basic_hc__all__lower(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_examples_basic_hc__all__alnum(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_examples_basic_hc__glob__match__chars(kk_std_core_types__list pat, kk_std_core_types__list input, kk_context_t* _ctx); /* (pat : list<char>, input : list<char>) -> div bool */ 

bool kk_examples_basic_hc__glob__star(kk_std_core_types__list prest_0, kk_std_core_types__list input_0, kk_context_t* _ctx); /* (prest : list<char>, input : list<char>) -> div bool */ 

static inline bool kk_examples_basic_hc__glob__match(kk_string_t pattern, kk_string_t s, kk_context_t* _ctx) { /* (pattern : string, s : string) -> div bool */ 
  kk_std_core_types__list _x_x601 = kk_std_core_string_list(pattern, _ctx); /*list<char>*/
  kk_std_core_types__list _x_x602 = kk_std_core_string_list(s, _ctx); /*list<char>*/
  return kk_examples_basic_hc__glob__match__chars(_x_x601, _x_x602, _ctx);
}

bool kk_examples_basic_hc__glob__doublestar(kk_std_core_types__list prest, kk_std_core_types__list paths, kk_context_t* _ctx); /* (prest : list<string>, paths : list<string>) -> div bool */ 

bool kk_examples_basic_hc__glob__match__segments(kk_std_core_types__list pats, kk_std_core_types__list paths_0, kk_context_t* _ctx); /* (pats : list<string>, paths : list<string>) -> div bool */ 

bool kk_examples_basic_hc__glob__match__path(kk_string_t pattern, kk_string_t hc__path, kk_context_t* _ctx); /* (pattern : string, hc_path : string) -> div bool */ 

static inline bool kk_examples_basic_hc__is__empty(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  kk_integer_t _brw_x395 = kk_std_core_string_chars_fs_count(s, _ctx); /*int*/;
  bool _brw_x396 = kk_integer_eq_borrow(_brw_x395,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x395, _ctx);
  return _brw_x396;
}

static inline bool kk_examples_basic_hc__is__blank(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  kk_string_t s_0_10036;
  kk_string_t _x_x631 = kk_string_trim_left(s,kk_context()); /*string*/
  s_0_10036 = kk_string_trim_right(_x_x631,kk_context()); /*string*/
  kk_integer_t _brw_x393 = kk_std_core_string_chars_fs_count(s_0_10036, _ctx); /*int*/;
  bool _brw_x394 = kk_integer_eq_borrow(_brw_x393,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x393, _ctx);
  return _brw_x394;
}

kk_std_core_types__list kk_examples_basic_hc__words(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> list<string> */ 

kk_std_core_types__list kk_examples_basic_hc__lines(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> list<string> */ 

static inline kk_string_t kk_examples_basic_hc__unwords(kk_std_core_types__list ws, kk_context_t* _ctx) { /* (ws : list<string>) -> string */ 
  kk_string_t _x_x652;
  kk_define_string_literal(static, _s_x653, 1, " ", _ctx)
  _x_x652 = kk_string_dup(_s_x653, _ctx); /*string*/
  return kk_std_core_list_joinsep(ws, _x_x652, _ctx);
}

static inline kk_string_t kk_examples_basic_hc__unlines(kk_std_core_types__list ls, kk_context_t* _ctx) { /* (ls : list<string>) -> string */ 
  kk_string_t _x_x654;
  kk_define_string_literal(static, _s_x655, 1, "\n", _ctx)
  _x_x654 = kk_string_dup(_s_x655, _ctx); /*string*/
  return kk_std_core_list_joinsep(ls, _x_x654, _ctx);
}

kk_string_t kk_examples_basic_hc__repeat__str(kk_string_t s, kk_integer_t n, kk_context_t* _ctx); /* (s : string, n : int) -> div string */ 

kk_string_t kk_examples_basic_hc__pad__left(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx); /* (s : string, width : int, ch : string) -> div string */ 

kk_string_t kk_examples_basic_hc__pad__right(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx); /* (s : string, width : int, ch : string) -> div string */ 

kk_string_t kk_examples_basic_hc__center(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx); /* (s : string, width : int, ch : string) -> div string */ 

kk_string_t kk_examples_basic_hc__removeprefix(kk_string_t s, kk_string_t pre, kk_context_t* _ctx); /* (s : string, pre : string) -> string */ 

kk_unit_t kk_examples_basic__mlift_hc__show__kv_10118(kk_std_core_types__either _y_x10079, kk_context_t* _ctx); /* (either<string,sqlite/queryresult>) -> io () */ 

kk_unit_t kk_examples_basic_hc__show__kv(kk_sqlite__db db, kk_context_t* _ctx); /* (db : sqlite/db) -> io () */ 
 
// monadic lift

static inline kk_unit_t kk_examples_basic__mlift_hc__run__kv__demo_10119(kk_unit_t wild___0, kk_context_t* _ctx) { /* (wild_@0 : ()) -> io () */ 
  kk_string_t _x_x700;
  kk_define_string_literal(static, _s_x701, 6, "closed", _ctx)
  _x_x700 = kk_string_dup(_s_x701, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x700, _ctx); return kk_Unit;
}

kk_unit_t kk_examples_basic__mlift_hc__run__kv__demo_10120(kk_sqlite__db db, kk_unit_t wild__, kk_context_t* _ctx); /* (db : sqlite/db, wild_ : ()) -> io () */ 

kk_unit_t kk_examples_basic__mlift_hc__run__kv__demo_10121(kk_sqlite__db db, kk_std_core_types__either _pat_1, kk_context_t* _ctx); /* (db : sqlite/db, either<string,bool>) -> io () */ 

kk_unit_t kk_examples_basic__mlift_hc__run__kv__demo_10122(kk_sqlite__db db, kk_std_core_types__either _pat_0, kk_context_t* _ctx); /* (db : sqlite/db, either<string,bool>) -> io () */ 

kk_unit_t kk_examples_basic__mlift_hc__run__kv__demo_10123(kk_sqlite__db db, kk_std_core_types__either _pat, kk_context_t* _ctx); /* (db : sqlite/db, either<string,bool>) -> io () */ 

kk_unit_t kk_examples_basic_hc__run__kv__demo(kk_sqlite__db db, kk_context_t* _ctx); /* (db : sqlite/db) -> io () */ 

kk_unit_t kk_examples_basic_hc__print__hit__value(kk_sqlite__row row, kk_context_t* _ctx); /* (row : sqlite/row) -> console/console () */ 

kk_unit_t kk_examples_basic__mlift_hc__check__hits_10124(kk_std_core_types__either _y_x10086, kk_context_t* _ctx); /* (either<string,maybe<sqlite/row>>) -> io () */ 

kk_unit_t kk_examples_basic_hc__check__hits(kk_sqlite__db db, kk_context_t* _ctx); /* (db : sqlite/db) -> io () */ 

kk_unit_t kk_examples_basic__mlift_hc__print__table__exists_10125(kk_string_t name, kk_std_core_types__either _y_x10088, kk_context_t* _ctx); /* (name : string, either<string,bool>) -> io () */ 

kk_unit_t kk_examples_basic_hc__print__table__exists(kk_sqlite__db db, kk_string_t name, kk_context_t* _ctx); /* (db : sqlite/db, name : string) -> io () */ 
 
// monadic lift

static inline kk_unit_t kk_examples_basic__mlift_hc__run__counters_10126(kk_integer_t _y_x10095, kk_context_t* _ctx) { /* (int) -> io () */ 
  kk_string_t _x_x855;
  kk_string_t _x_x856;
  kk_define_string_literal(static, _s_x857, 16, "changes so far: ", _ctx)
  _x_x856 = kk_string_dup(_s_x857, _ctx); /*string*/
  kk_string_t _x_x858 = kk_std_core_int_show(_y_x10095, _ctx); /*string*/
  _x_x855 = kk_std_core_types__lp__plus__plus__rp_(_x_x856, _x_x858, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x855, _ctx); return kk_Unit;
}

kk_unit_t kk_examples_basic__mlift_hc__run__counters_10127(kk_sqlite__db db, kk_unit_t wild___0, kk_context_t* _ctx); /* (db : sqlite/db, wild_@0 : ()) -> io () */ 

kk_unit_t kk_examples_basic__mlift_hc__run__counters_10128(kk_sqlite__db db, kk_unit_t wild__, kk_context_t* _ctx); /* (db : sqlite/db, wild_ : ()) -> io () */ 

kk_unit_t kk_examples_basic__mlift_hc__run__counters_10129(kk_sqlite__db db, kk_std_core_types__either _pat_1, kk_context_t* _ctx); /* (db : sqlite/db, either<string,bool>) -> io () */ 

kk_unit_t kk_examples_basic__mlift_hc__run__counters_10130(kk_sqlite__db db, kk_std_core_types__either _pat_0, kk_context_t* _ctx); /* (db : sqlite/db, either<string,bool>) -> io () */ 

kk_unit_t kk_examples_basic__mlift_hc__run__counters_10131(kk_sqlite__db db, kk_std_core_types__either _pat, kk_context_t* _ctx); /* (db : sqlite/db, either<string,bool>) -> io () */ 

kk_unit_t kk_examples_basic_hc__run__counters(kk_sqlite__db db, kk_context_t* _ctx); /* (db : sqlite/db) -> io () */ 

kk_unit_t kk_examples_basic__mlift_hc__demo__open__close_10132(kk_std_core_types__either _y_x10096, kk_context_t* _ctx); /* (either<string,sqlite/db>) -> io () */ 

kk_unit_t kk_examples_basic_hc__demo__open__close(kk_context_t* _ctx); /* () -> io () */ 

kk_unit_t kk_examples_basic__mlift_hc__demo__with__sqlite_10133(kk_std_core_types__either _y_x10099, kk_context_t* _ctx); /* (either<string,bool>) -> io () */ 

kk_unit_t kk_examples_basic_hc__demo__with__sqlite(kk_context_t* _ctx); /* () -> io () */ 
 
// monadic lift

static inline kk_unit_t kk_examples_basic__mlift_main_10134(kk_unit_t wild___1, kk_context_t* _ctx) { /* (wild_@1 : ()) -> io () */ 
  kk_unit_t ___2 = kk_Unit;
  kk_string_t _x_x997 = kk_string_empty(); /*string*/
  kk_std_core_console_printsln(_x_x997, _ctx);
  kk_examples_basic_hc__demo__with__sqlite(_ctx); return kk_Unit;
}

kk_unit_t kk_examples_basic_main(kk_context_t* _ctx); /* () -> io () */ 

void kk_examples_basic__init(kk_context_t* _ctx);


void kk_examples_basic__done(kk_context_t* _ctx);

#endif // header
