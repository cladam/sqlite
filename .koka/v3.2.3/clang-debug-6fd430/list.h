#pragma once
#ifndef kk_list_H
#define kk_list_H
// Koka generated module: list, koka version: 3.2.3, platform: 64-bit
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

kk_unit_t kk_list_hc_assert(bool b, kk_context_t* _ctx); /* (b : bool) -> exn () */ 

static inline kk_integer_t kk_list_hc__abs(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> int */ 
  bool _match_x368 = kk_integer_lt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x368) {
    return kk_integer_sub((kk_integer_from_small(0)),n,kk_context());
  }
  {
    return n;
  }
}

static inline kk_integer_t kk_list_hc__min(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> int */ 
  bool _match_x367 = kk_integer_lt_borrow(a,b,kk_context()); /*bool*/;
  if (_match_x367) {
    kk_integer_drop(b, _ctx);
    return a;
  }
  {
    kk_integer_drop(a, _ctx);
    return b;
  }
}

static inline kk_integer_t kk_list_hc__max(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> int */ 
  bool _match_x366 = kk_integer_gt_borrow(a,b,kk_context()); /*bool*/;
  if (_match_x366) {
    kk_integer_drop(b, _ctx);
    return a;
  }
  {
    kk_integer_drop(a, _ctx);
    return b;
  }
}

kk_integer_t kk_list_hc__clamp(kk_integer_t v, kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx); /* (v : int, lo : int, hi : int) -> int */ 

kk_integer_t kk_list_hc__gcd(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx); /* (a : int, b : int) -> div int */ 

kk_integer_t kk_list_hc__lcm(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx); /* (a : int, b : int) -> div int */ 

kk_integer_t kk_list_hc__pow(kk_integer_t base, kk_integer_t exp, kk_context_t* _ctx); /* (base : int, exp : int) -> div int */ 

kk_integer_t kk_list_hc__sign(kk_integer_t n, kk_context_t* _ctx); /* (n : int) -> int */ 

kk_std_core_types__list kk_list_hc__range(kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx); /* (lo : int, hi : int) -> div list<int> */ 

kk_std_core_types__list kk_list_hc__range__inc(kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx); /* (lo : int, hi : int) -> div list<int> */ 

kk_integer_t kk_list_hc__isqrt__loop(kk_integer_t n, kk_integer_t x0, kk_integer_t x1, kk_context_t* _ctx); /* (n : int, x0 : int, x1 : int) -> div int */ 

kk_integer_t kk_list_hc__isqrt(kk_integer_t n, kk_context_t* _ctx); /* (n : int) -> div int */ 

bool kk_list_hc__is__digit(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_list_hc__is__upper(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_list_hc__is__lower(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_list_hc__is__alpha(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_list_hc__is__alnum(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_list_hc__is__space(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_list_hc__is__punct(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_list_hc__all__digits(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_list_hc__all__alpha(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_list_hc__all__upper(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_list_hc__all__lower(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_list_hc__all__alnum(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_list_hc__glob__match__chars(kk_std_core_types__list pat, kk_std_core_types__list input, kk_context_t* _ctx); /* (pat : list<char>, input : list<char>) -> div bool */ 

bool kk_list_hc__glob__star(kk_std_core_types__list prest_0, kk_std_core_types__list input_0, kk_context_t* _ctx); /* (prest : list<char>, input : list<char>) -> div bool */ 

static inline bool kk_list_hc__glob__match(kk_string_t pattern, kk_string_t s, kk_context_t* _ctx) { /* (pattern : string, s : string) -> div bool */ 
  kk_std_core_types__list _x_x447 = kk_std_core_string_list(pattern, _ctx); /*list<char>*/
  kk_std_core_types__list _x_x448 = kk_std_core_string_list(s, _ctx); /*list<char>*/
  return kk_list_hc__glob__match__chars(_x_x447, _x_x448, _ctx);
}

bool kk_list_hc__glob__doublestar(kk_std_core_types__list prest, kk_std_core_types__list paths, kk_context_t* _ctx); /* (prest : list<string>, paths : list<string>) -> div bool */ 

bool kk_list_hc__glob__match__segments(kk_std_core_types__list pats, kk_std_core_types__list paths_0, kk_context_t* _ctx); /* (pats : list<string>, paths : list<string>) -> div bool */ 

bool kk_list_hc__glob__match__path(kk_string_t pattern, kk_string_t hc__path, kk_context_t* _ctx); /* (pattern : string, hc_path : string) -> div bool */ 

static inline bool kk_list_hc__is__empty(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  kk_integer_t _brw_x290 = kk_std_core_string_chars_fs_count(s, _ctx); /*int*/;
  bool _brw_x291 = kk_integer_eq_borrow(_brw_x290,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x290, _ctx);
  return _brw_x291;
}

static inline bool kk_list_hc__is__blank(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  kk_string_t s_0_10036;
  kk_string_t _x_x477 = kk_string_trim_left(s,kk_context()); /*string*/
  s_0_10036 = kk_string_trim_right(_x_x477,kk_context()); /*string*/
  kk_integer_t _brw_x288 = kk_std_core_string_chars_fs_count(s_0_10036, _ctx); /*int*/;
  bool _brw_x289 = kk_integer_eq_borrow(_brw_x288,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x288, _ctx);
  return _brw_x289;
}

kk_std_core_types__list kk_list_hc__words(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> list<string> */ 

kk_std_core_types__list kk_list_hc__lines(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> list<string> */ 

static inline kk_string_t kk_list_hc__unwords(kk_std_core_types__list ws, kk_context_t* _ctx) { /* (ws : list<string>) -> string */ 
  kk_string_t _x_x498;
  kk_define_string_literal(static, _s_x499, 1, " ", _ctx)
  _x_x498 = kk_string_dup(_s_x499, _ctx); /*string*/
  return kk_std_core_list_joinsep(ws, _x_x498, _ctx);
}

static inline kk_string_t kk_list_hc__unlines(kk_std_core_types__list ls, kk_context_t* _ctx) { /* (ls : list<string>) -> string */ 
  kk_string_t _x_x500;
  kk_define_string_literal(static, _s_x501, 1, "\n", _ctx)
  _x_x500 = kk_string_dup(_s_x501, _ctx); /*string*/
  return kk_std_core_list_joinsep(ls, _x_x500, _ctx);
}

kk_string_t kk_list_hc__repeat__str(kk_string_t s, kk_integer_t n, kk_context_t* _ctx); /* (s : string, n : int) -> div string */ 

kk_string_t kk_list_hc__pad__left(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx); /* (s : string, width : int, ch : string) -> div string */ 

kk_string_t kk_list_hc__pad__right(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx); /* (s : string, width : int, ch : string) -> div string */ 

kk_string_t kk_list_hc__center(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx); /* (s : string, width : int, ch : string) -> div string */ 

kk_string_t kk_list_hc__removeprefix(kk_string_t s, kk_string_t pre, kk_context_t* _ctx); /* (s : string, pre : string) -> string */ 

kk_std_core_types__list kk_list_hc__intersperse(kk_std_core_types__list xs, kk_box_t sep, kk_context_t* _ctx); /* forall<a> (xs : list<a>, sep : a) -> list<a> */ 

kk_integer_t kk_list_hc__sum(kk_std_core_types__list xs, kk_context_t* _ctx); /* (xs : list<int>) -> int */ 

kk_integer_t kk_list_hc__product(kk_std_core_types__list xs, kk_context_t* _ctx); /* (xs : list<int>) -> int */ 

kk_std_core_types__list kk_list__mlift_hc__scan_10125(kk_box_t init, kk_std_core_types__list _y_x10082, kk_context_t* _ctx); /* forall<a,e> (init : a, list<a>) -> e list<a> */ 

kk_std_core_types__list kk_list__mlift_hc__scan_10126(kk_function_t f, kk_box_t init_0, kk_std_core_types__list rest, kk_box_t _y_x10081, kk_context_t* _ctx); /* forall<a,b,e> (f : (b, a) -> e b, init : b, rest : list<a>, b) -> e list<b> */ 

kk_std_core_types__list kk_list_hc__scan(kk_std_core_types__list xs, kk_box_t init_1, kk_function_t f_0, kk_context_t* _ctx); /* forall<a,b,e> (xs : list<a>, init : b, f : (b, a) -> e b) -> e list<b> */ 

kk_std_core_types__list kk_list_hc__zip__with(kk_std_core_types__list xs, kk_std_core_types__list ys, kk_function_t f, kk_context_t* _ctx); /* forall<a,b,c,e> (xs : list<a>, ys : list<b>, f : (a, b) -> e c) -> e list<c> */ 

kk_std_core_types__list kk_list_hc__unique(kk_std_core_types__list xs, kk_context_t* _ctx); /* (xs : list<int>) -> list<int> */ 

kk_std_core_types__list kk_list_hc__chunks(kk_std_core_types__list xs, kk_integer_t n, kk_context_t* _ctx); /* forall<a> (xs : list<a>, n : int) -> div list<list<a>> */ 

kk_box_t kk_list_hc__head__or(kk_std_core_types__list xs, kk_box_t kkloc_default, kk_context_t* _ctx); /* forall<a> (xs : list<a>, default : a) -> a */ 

kk_std_core_types__list kk_list__mlift_hc__take__while_10127(kk_box_t x, kk_std_core_types__list _y_x10087, kk_context_t* _ctx); /* forall<a,e> (x : a, list<a>) -> e list<a> */ 

kk_std_core_types__list kk_list__mlift_hc__take__while_10128(kk_function_t pred, kk_std_core_types__list rest, kk_box_t x_0, bool _y_x10086, kk_context_t* _ctx); /* forall<a,e> (pred : (a) -> e bool, rest : list<a>, x : a, bool) -> e list<a> */ 

kk_std_core_types__list kk_list_hc__take__while(kk_std_core_types__list xs, kk_function_t pred_0, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, pred : (a) -> e bool) -> e list<a> */ 

kk_std_core_types__list kk_list__mlift_hc__drop__while_10129(kk_function_t pred, kk_std_core_types__list rest, kk_std_core_types__list xs, bool _y_x10090, kk_context_t* _ctx); /* forall<a,e> (pred : (a) -> e bool, rest : list<a>, xs : list<a>, bool) -> e list<a> */ 

kk_std_core_types__list kk_list_hc__drop__while(kk_std_core_types__list xs_0, kk_function_t pred_0, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, pred : (a) -> e bool) -> e list<a> */ 
 
// monadic lift

static inline kk_integer_t kk_list__mlift_hc__count_10130(kk_integer_t acc, bool _y_x10094, kk_context_t* _ctx) { /* forall<e> (acc : int, bool) -> e int */ 
  if (_y_x10094) {
    return kk_integer_add_small_const(acc, 1, _ctx);
  }
  {
    return acc;
  }
}

kk_integer_t kk_list_hc__count(kk_std_core_types__list xs, kk_function_t pred, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, pred : (a) -> e bool) -> e int */ 

kk_std_core_types__list kk_list_hc__group__by__insert(kk_std_core_types__list pairs, kk_string_t key, kk_box_t item, kk_context_t* _ctx); /* forall<a> (pairs : list<(string, list<a>)>, key : string, item : a) -> list<(string, list<a>)> */ 
 
// monadic lift

static inline kk_std_core_types__list kk_list__mlift_hc__group__by_10131(kk_std_core_types__list acc, kk_box_t x, kk_string_t _y_x10097, kk_context_t* _ctx) { /* forall<a,e> (acc : list<(string, list<a>)>, x : a, string) -> e list<(string, list<a>)> */ 
  return kk_list_hc__group__by__insert(acc, _y_x10097, x, _ctx);
}

kk_std_core_types__list kk_list_hc__group__by(kk_std_core_types__list xs, kk_function_t f, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, f : (a) -> e string) -> e list<(string, list<a>)> */ 

kk_box_t kk_list_hc__pick__min(kk_box_t a, kk_box_t b, kk_integer_t ka, kk_integer_t kb, kk_context_t* _ctx); /* forall<a> (a : a, b : a, ka : int, kb : int) -> a */ 

kk_box_t kk_list_hc__pick__max(kk_box_t a, kk_box_t b, kk_integer_t ka, kk_integer_t kb, kk_context_t* _ctx); /* forall<a> (a : a, b : a, ka : int, kb : int) -> a */ 

kk_box_t kk_list__mlift_hc__min__by_10132(kk_integer_t _y_x10099, kk_box_t best, kk_box_t x, kk_integer_t _y_x10100, kk_context_t* _ctx); /* forall<a,e> (int, best : a, x : a, int) -> e a */ 

kk_box_t kk_list__mlift_hc__min__by_10133(kk_box_t best, kk_function_t f, kk_box_t x, kk_integer_t _y_x10099, kk_context_t* _ctx); /* forall<a,e> (best : a, f : (a) -> e int, x : a, int) -> e a */ 
 
// monadic lift

static inline kk_std_core_types__maybe kk_list__mlift_hc__min__by_10134(kk_box_t _y_x10101, kk_context_t* _ctx) { /* forall<a,e> (a) -> e maybe<a> */ 
  return kk_std_core_types__new_Just(_y_x10101, _ctx);
}

kk_std_core_types__maybe kk_list_hc__min__by(kk_std_core_types__list xs, kk_function_t f, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, f : (a) -> e int) -> e maybe<a> */ 

kk_box_t kk_list__mlift_hc__max__by_10135(kk_integer_t _y_x10103, kk_box_t best, kk_box_t x, kk_integer_t _y_x10104, kk_context_t* _ctx); /* forall<a,e> (int, best : a, x : a, int) -> e a */ 

kk_box_t kk_list__mlift_hc__max__by_10136(kk_box_t best, kk_function_t f, kk_box_t x, kk_integer_t _y_x10103, kk_context_t* _ctx); /* forall<a,e> (best : a, f : (a) -> e int, x : a, int) -> e a */ 
 
// monadic lift

static inline kk_std_core_types__maybe kk_list__mlift_hc__max__by_10137(kk_box_t _y_x10105, kk_context_t* _ctx) { /* forall<a,e> (a) -> e maybe<a> */ 
  return kk_std_core_types__new_Just(_y_x10105, _ctx);
}

kk_std_core_types__maybe kk_list_hc__max__by(kk_std_core_types__list xs, kk_function_t f, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, f : (a) -> e int) -> e maybe<a> */ 

void kk_list__init(kk_context_t* _ctx);


void kk_list__done(kk_context_t* _ctx);

#endif // header
