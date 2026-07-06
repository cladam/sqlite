// Koka generated module: main, koka version: 3.2.3, platform: 64-bit
#include "main.h"


// lift anonymous function
struct kk_main_hc_assert_fun406__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_hc_assert_fun406(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc_assert_fun406(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hc_assert_fun406, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main_hc_assert_fun406(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x407;
  bool b_0_9 = kk_bool_unbox(_b_x2); /*bool*/;
  if (b_0_9) {
    _x_x407 = false; /*bool*/
  }
  else {
    _x_x407 = true; /*bool*/
  }
  return kk_bool_box(_x_x407);
}

kk_unit_t kk_main_hc_assert(bool b, kk_context_t* _ctx) { /* (b : bool) -> exn () */ 
  bool _match_x397;
  kk_box_t _x_x405 = kk_std_core_hnd__open_none1(kk_main_new_hc_assert_fun406(_ctx), kk_bool_box(b), _ctx); /*10001*/
  _match_x397 = kk_bool_unbox(_x_x405); /*bool*/
  if (_match_x397) {
    kk_box_t _x_x408;
    kk_string_t _x_x409;
    kk_define_string_literal(static, _s_x410, 16, "assertion failed", _ctx)
    _x_x409 = kk_string_dup(_s_x410, _ctx); /*string*/
    _x_x408 = kk_std_core_exn_throw(_x_x409, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    kk_unit_unbox(_x_x408); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}


// lift anonymous function
struct kk_main_hc_show_maybe_fun418__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_hc_show_maybe_fun418(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc_show_maybe_fun418(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hc_show_maybe_fun418, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main_hc_show_maybe_fun418(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _y_x10075_13 = kk_string_unbox(_b_x11); /*string*/;
  kk_string_t _x_x419;
  kk_string_t _x_x420;
  kk_define_string_literal(static, _s_x421, 5, "Some(", _ctx)
  _x_x420 = kk_string_dup(_s_x421, _ctx); /*string*/
  kk_string_t _x_x422;
  kk_string_t _x_x423;
  kk_define_string_literal(static, _s_x424, 1, ")", _ctx)
  _x_x423 = kk_string_dup(_s_x424, _ctx); /*string*/
  _x_x422 = kk_std_core_types__lp__plus__plus__rp_(_y_x10075_13, _x_x423, _ctx); /*string*/
  _x_x419 = kk_std_core_types__lp__plus__plus__rp_(_x_x420, _x_x422, _ctx); /*string*/
  return kk_string_box(_x_x419);
}

kk_string_t kk_main_hc_show_maybe(kk_std_core_types__maybe m, kk_function_t show_a, kk_context_t* _ctx) { /* forall<a,e> (m : maybe<a>, show-a : (a) -> e string) -> e string */ 
  if (kk_std_core_types__is_Nothing(m, _ctx)) {
    kk_function_drop(show_a, _ctx);
    kk_define_string_literal(static, _s_x416, 4, "None", _ctx)
    return kk_string_dup(_s_x416, _ctx);
  }
  {
    kk_box_t x = m._cons.Just.value;
    kk_string_t x_0_10126 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), show_a, (show_a, x, _ctx), _ctx); /*string*/;
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_0_10126, _ctx);
      kk_box_t _x_x417 = kk_std_core_hnd_yield_extend(kk_main_new_hc_show_maybe_fun418(_ctx), _ctx); /*10001*/
      return kk_string_unbox(_x_x417);
    }
    {
      kk_string_t _x_x425;
      kk_define_string_literal(static, _s_x426, 5, "Some(", _ctx)
      _x_x425 = kk_string_dup(_s_x426, _ctx); /*string*/
      kk_string_t _x_x427;
      kk_string_t _x_x428;
      kk_define_string_literal(static, _s_x429, 1, ")", _ctx)
      _x_x428 = kk_string_dup(_s_x429, _ctx); /*string*/
      _x_x427 = kk_std_core_types__lp__plus__plus__rp_(x_0_10126, _x_x428, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x425, _x_x427, _ctx);
    }
  }
}


// lift anonymous function
struct kk_main_hc_show_result_fun441__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_hc_show_result_fun441(kk_function_t _fself, kk_box_t _b_x15, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc_show_result_fun441(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hc_show_result_fun441, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main_hc_show_result_fun441(kk_function_t _fself, kk_box_t _b_x15, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _y_x10077_20 = kk_string_unbox(_b_x15); /*string*/;
  kk_string_t _x_x442;
  kk_string_t _x_x443;
  kk_define_string_literal(static, _s_x444, 3, "Ok(", _ctx)
  _x_x443 = kk_string_dup(_s_x444, _ctx); /*string*/
  kk_string_t _x_x445;
  kk_string_t _x_x446;
  kk_define_string_literal(static, _s_x447, 1, ")", _ctx)
  _x_x446 = kk_string_dup(_s_x447, _ctx); /*string*/
  _x_x445 = kk_std_core_types__lp__plus__plus__rp_(_y_x10077_20, _x_x446, _ctx); /*string*/
  _x_x442 = kk_std_core_types__lp__plus__plus__rp_(_x_x443, _x_x445, _ctx); /*string*/
  return kk_string_box(_x_x442);
}


// lift anonymous function
struct kk_main_hc_show_result_fun454__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_hc_show_result_fun454(kk_function_t _fself, kk_box_t _b_x17, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc_show_result_fun454(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hc_show_result_fun454, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main_hc_show_result_fun454(kk_function_t _fself, kk_box_t _b_x17, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _y_x10078_21 = kk_string_unbox(_b_x17); /*string*/;
  kk_string_t _x_x455;
  kk_string_t _x_x456;
  kk_define_string_literal(static, _s_x457, 4, "Err(", _ctx)
  _x_x456 = kk_string_dup(_s_x457, _ctx); /*string*/
  kk_string_t _x_x458;
  kk_string_t _x_x459;
  kk_define_string_literal(static, _s_x460, 1, ")", _ctx)
  _x_x459 = kk_string_dup(_s_x460, _ctx); /*string*/
  _x_x458 = kk_std_core_types__lp__plus__plus__rp_(_y_x10078_21, _x_x459, _ctx); /*string*/
  _x_x455 = kk_std_core_types__lp__plus__plus__rp_(_x_x456, _x_x458, _ctx); /*string*/
  return kk_string_box(_x_x455);
}

kk_string_t kk_main_hc_show_result(kk_std_core_types__either r, kk_function_t show_a, kk_function_t show_e, kk_context_t* _ctx) { /* forall<a,b,e> (r : either<a,b>, show-a : (b) -> e string, show-e : (a) -> e string) -> e string */ 
  if (kk_std_core_types__is_Right(r, _ctx)) {
    kk_box_t x = r._cons.Right.right;
    kk_function_drop(show_e, _ctx);
    kk_string_t x_0_10130 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), show_a, (show_a, x, _ctx), _ctx); /*string*/;
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_0_10130, _ctx);
      kk_box_t _x_x440 = kk_std_core_hnd_yield_extend(kk_main_new_hc_show_result_fun441(_ctx), _ctx); /*10001*/
      return kk_string_unbox(_x_x440);
    }
    {
      kk_string_t _x_x448;
      kk_define_string_literal(static, _s_x449, 3, "Ok(", _ctx)
      _x_x448 = kk_string_dup(_s_x449, _ctx); /*string*/
      kk_string_t _x_x450;
      kk_string_t _x_x451;
      kk_define_string_literal(static, _s_x452, 1, ")", _ctx)
      _x_x451 = kk_string_dup(_s_x452, _ctx); /*string*/
      _x_x450 = kk_std_core_types__lp__plus__plus__rp_(x_0_10130, _x_x451, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x448, _x_x450, _ctx);
    }
  }
  {
    kk_box_t e = r._cons.Left.left;
    kk_function_drop(show_a, _ctx);
    kk_string_t x_1_10134 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), show_e, (show_e, e, _ctx), _ctx); /*string*/;
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_1_10134, _ctx);
      kk_box_t _x_x453 = kk_std_core_hnd_yield_extend(kk_main_new_hc_show_result_fun454(_ctx), _ctx); /*10001*/
      return kk_string_unbox(_x_x453);
    }
    {
      kk_string_t _x_x461;
      kk_define_string_literal(static, _s_x462, 4, "Err(", _ctx)
      _x_x461 = kk_string_dup(_s_x462, _ctx); /*string*/
      kk_string_t _x_x463;
      kk_string_t _x_x464;
      kk_define_string_literal(static, _s_x465, 1, ")", _ctx)
      _x_x464 = kk_string_dup(_s_x465, _ctx); /*string*/
      _x_x463 = kk_std_core_types__lp__plus__plus__rp_(x_1_10134, _x_x464, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x461, _x_x463, _ctx);
    }
  }
}

kk_integer_t kk_main_hc__clamp(kk_integer_t v, kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (v : int, lo : int, hi : int) -> int */ 
  kk_integer_t a_10002;
  bool _match_x390 = kk_integer_gt_borrow(v,lo,kk_context()); /*bool*/;
  if (_match_x390) {
    kk_integer_drop(lo, _ctx);
    a_10002 = v; /*int*/
  }
  else {
    kk_integer_drop(v, _ctx);
    a_10002 = lo; /*int*/
  }
  bool _match_x389 = kk_integer_lt_borrow(a_10002,hi,kk_context()); /*bool*/;
  if (_match_x389) {
    kk_integer_drop(hi, _ctx);
    return a_10002;
  }
  {
    kk_integer_drop(a_10002, _ctx);
    return hi;
  }
}

kk_integer_t kk_main_hc__gcd(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> div int */ 
  kk__tailcall: ;
  bool _match_x388 = kk_integer_eq_borrow(b,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x388) {
    kk_integer_drop(b, _ctx);
    return a;
  }
  { // tailcall
    kk_integer_t _x_x466 = kk_integer_dup(b, _ctx); /*int*/
    kk_integer_t _x_x467 = kk_integer_mod(a,b,kk_context()); /*int*/
    a = _x_x466;
    b = _x_x467;
    goto kk__tailcall;
  }
}

kk_integer_t kk_main_hc__lcm(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> div int */ 
  bool _match_x385 = kk_integer_eq_borrow(a,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x385) {
    kk_integer_drop(b, _ctx);
    kk_integer_drop(a, _ctx);
    return kk_integer_from_small(0);
  }
  {
    bool _match_x386 = kk_integer_eq_borrow(b,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_x386) {
      kk_integer_drop(b, _ctx);
      kk_integer_drop(a, _ctx);
      return kk_integer_from_small(0);
    }
    {
      kk_integer_t n_10006;
      kk_integer_t _x_x468 = kk_integer_dup(a, _ctx); /*int*/
      kk_integer_t _x_x469 = kk_integer_dup(b, _ctx); /*int*/
      n_10006 = kk_integer_mul(_x_x468,_x_x469,kk_context()); /*int*/
      kk_integer_t _x_x470;
      bool _match_x387 = kk_integer_lt_borrow(n_10006,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      if (_match_x387) {
        _x_x470 = kk_integer_sub((kk_integer_from_small(0)),n_10006,kk_context()); /*int*/
      }
      else {
        _x_x470 = n_10006; /*int*/
      }
      kk_integer_t _x_x471 = kk_main_hc__gcd(a, b, _ctx); /*int*/
      return kk_integer_div(_x_x470,_x_x471,kk_context());
    }
  }
}

kk_integer_t kk_main_hc__pow(kk_integer_t base, kk_integer_t exp, kk_context_t* _ctx) { /* (base : int, exp : int) -> div int */ 
  bool _match_x384 = kk_integer_lte_borrow(exp,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x384) {
    kk_integer_drop(exp, _ctx);
    kk_integer_drop(base, _ctx);
    return kk_integer_from_small(1);
  }
  {
    kk_integer_t _x_x472 = kk_integer_dup(base, _ctx); /*int*/
    kk_integer_t _x_x473;
    kk_integer_t _x_x474 = kk_integer_add_small_const(exp, -1, _ctx); /*int*/
    _x_x473 = kk_main_hc__pow(base, _x_x474, _ctx); /*int*/
    return kk_integer_mul(_x_x472,_x_x473,kk_context());
  }
}

kk_integer_t kk_main_hc__sign(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> int */ 
  bool _match_x381 = kk_integer_gt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x381) {
    kk_integer_drop(n, _ctx);
    return kk_integer_from_small(1);
  }
  {
    bool _match_x382;
    bool _brw_x383 = kk_integer_lt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    _match_x382 = _brw_x383; /*bool*/
    if (_match_x382) {
      return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
    }
    {
      return kk_integer_from_small(0);
    }
  }
}

kk_std_core_types__list kk_main_hc__range(kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (lo : int, hi : int) -> div list<int> */ 
  bool _match_x380 = kk_integer_gte_borrow(lo,hi,kk_context()); /*bool*/;
  if (_match_x380) {
    kk_integer_drop(lo, _ctx);
    kk_integer_drop(hi, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    kk_std_core_types__list ys_10014;
    kk_integer_t _x_x475;
    kk_integer_t _x_x476 = kk_integer_dup(lo, _ctx); /*int*/
    _x_x475 = kk_integer_add_small_const(_x_x476, 1, _ctx); /*int*/
    ys_10014 = kk_main_hc__range(_x_x475, hi, _ctx); /*list<int>*/
    kk_std_core_types__list _x_x477 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(lo, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    return kk_std_core_list_append(_x_x477, ys_10014, _ctx);
  }
}

kk_std_core_types__list kk_main_hc__range__inc(kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (lo : int, hi : int) -> div list<int> */ 
  bool _match_x379 = kk_integer_gt_borrow(lo,hi,kk_context()); /*bool*/;
  if (_match_x379) {
    kk_integer_drop(lo, _ctx);
    kk_integer_drop(hi, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    kk_std_core_types__list ys_10018;
    kk_integer_t _x_x478;
    kk_integer_t _x_x479 = kk_integer_dup(lo, _ctx); /*int*/
    _x_x478 = kk_integer_add_small_const(_x_x479, 1, _ctx); /*int*/
    ys_10018 = kk_main_hc__range__inc(_x_x478, hi, _ctx); /*list<int>*/
    kk_std_core_types__list _x_x480 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(lo, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    return kk_std_core_list_append(_x_x480, ys_10018, _ctx);
  }
}

kk_integer_t kk_main_hc__isqrt__loop(kk_integer_t n, kk_integer_t x0, kk_integer_t x1, kk_context_t* _ctx) { /* (n : int, x0 : int, x1 : int) -> div int */ 
  kk__tailcall: ;
  bool _match_x378 = kk_integer_gte_borrow(x1,x0,kk_context()); /*bool*/;
  if (_match_x378) {
    kk_integer_drop(x1, _ctx);
    kk_integer_drop(n, _ctx);
    return x0;
  }
  {
    kk_integer_drop(x0, _ctx);
    kk_integer_t y_10022;
    kk_integer_t _x_x481 = kk_integer_dup(n, _ctx); /*int*/
    kk_integer_t _x_x482 = kk_integer_dup(x1, _ctx); /*int*/
    y_10022 = kk_integer_div(_x_x481,_x_x482,kk_context()); /*int*/
    kk_integer_t x2;
    kk_integer_t _x_x483;
    kk_integer_t _x_x484 = kk_integer_dup(x1, _ctx); /*int*/
    _x_x483 = kk_integer_add(_x_x484,y_10022,kk_context()); /*int*/
    x2 = kk_integer_div(_x_x483,(kk_integer_from_small(2)),kk_context()); /*int*/
    { // tailcall
      kk_integer_t _x_x485 = x1; /*int*/
      x0 = _x_x485;
      x1 = x2;
      goto kk__tailcall;
    }
  }
}

kk_integer_t kk_main_hc__isqrt(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> div int */ 
  bool _match_x377 = kk_integer_lte_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x377) {
    kk_integer_drop(n, _ctx);
    return kk_integer_from_small(0);
  }
  {
    kk_integer_t x1;
    kk_integer_t _x_x486;
    kk_integer_t _x_x487 = kk_integer_dup(n, _ctx); /*int*/
    _x_x486 = kk_integer_add_small_const(_x_x487, 1, _ctx); /*int*/
    x1 = kk_integer_div(_x_x486,(kk_integer_from_small(2)),kk_context()); /*int*/
    kk_integer_t _x_x488 = kk_integer_dup(n, _ctx); /*int*/
    return kk_main_hc__isqrt__loop(_x_x488, n, x1, _ctx);
  }
}

bool kk_main_hc__is__digit(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x375 = kk_integer_gte_borrow(n,(kk_integer_from_small(48)),kk_context()); /*bool*/;
  if (_match_x375) {
    bool _brw_x376 = kk_integer_lte_borrow(n,(kk_integer_from_small(57)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    return _brw_x376;
  }
  {
    kk_integer_drop(n, _ctx);
    return false;
  }
}

bool kk_main_hc__is__upper(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x373 = kk_integer_gte_borrow(n,(kk_integer_from_small(65)),kk_context()); /*bool*/;
  if (_match_x373) {
    bool _brw_x374 = kk_integer_lte_borrow(n,(kk_integer_from_small(90)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    return _brw_x374;
  }
  {
    kk_integer_drop(n, _ctx);
    return false;
  }
}

bool kk_main_hc__is__lower(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x371 = kk_integer_gte_borrow(n,(kk_integer_from_small(97)),kk_context()); /*bool*/;
  if (_match_x371) {
    bool _brw_x372 = kk_integer_lte_borrow(n,(kk_integer_from_small(122)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    return _brw_x372;
  }
  {
    kk_integer_drop(n, _ctx);
    return false;
  }
}

bool kk_main_hc__is__alpha(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x364 = kk_integer_gte_borrow(n,(kk_integer_from_small(65)),kk_context()); /*bool*/;
  if (_match_x364) {
    bool _match_x367;
    bool _brw_x370 = kk_integer_lte_borrow(n,(kk_integer_from_small(90)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    _match_x367 = _brw_x370; /*bool*/
    if (_match_x367) {
      return true;
    }
    {
      kk_integer_t n_0 = kk_integer_from_int(c,kk_context()); /*int*/;
      bool _match_x368 = kk_integer_gte_borrow(n_0,(kk_integer_from_small(97)),kk_context()); /*bool*/;
      if (_match_x368) {
        bool _brw_x369 = kk_integer_lte_borrow(n_0,(kk_integer_from_small(122)),kk_context()); /*bool*/;
        kk_integer_drop(n_0, _ctx);
        return _brw_x369;
      }
      {
        kk_integer_drop(n_0, _ctx);
        return false;
      }
    }
  }
  {
    kk_integer_drop(n, _ctx);
    kk_integer_t n_0_0 = kk_integer_from_int(c,kk_context()); /*int*/;
    bool _match_x365 = kk_integer_gte_borrow(n_0_0,(kk_integer_from_small(97)),kk_context()); /*bool*/;
    if (_match_x365) {
      bool _brw_x366 = kk_integer_lte_borrow(n_0_0,(kk_integer_from_small(122)),kk_context()); /*bool*/;
      kk_integer_drop(n_0_0, _ctx);
      return _brw_x366;
    }
    {
      kk_integer_drop(n_0_0, _ctx);
      return false;
    }
  }
}

bool kk_main_hc__is__alnum(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  bool _match_x361 = kk_main_hc__is__alpha(c, _ctx); /*bool*/;
  if (_match_x361) {
    return true;
  }
  {
    kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
    bool _match_x362 = kk_integer_gte_borrow(n,(kk_integer_from_small(48)),kk_context()); /*bool*/;
    if (_match_x362) {
      bool _brw_x363 = kk_integer_lte_borrow(n,(kk_integer_from_small(57)),kk_context()); /*bool*/;
      kk_integer_drop(n, _ctx);
      return _brw_x363;
    }
    {
      kk_integer_drop(n, _ctx);
      return false;
    }
  }
}

bool kk_main_hc__is__space(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x357 = kk_integer_eq_borrow(n,(kk_integer_from_small(32)),kk_context()); /*bool*/;
  if (_match_x357) {
    kk_integer_drop(n, _ctx);
    return true;
  }
  {
    bool _match_x358 = kk_integer_eq_borrow(n,(kk_integer_from_small(9)),kk_context()); /*bool*/;
    if (_match_x358) {
      kk_integer_drop(n, _ctx);
      return true;
    }
    {
      bool _match_x359 = kk_integer_eq_borrow(n,(kk_integer_from_small(10)),kk_context()); /*bool*/;
      if (_match_x359) {
        kk_integer_drop(n, _ctx);
        return true;
      }
      {
        bool _brw_x360 = kk_integer_eq_borrow(n,(kk_integer_from_small(13)),kk_context()); /*bool*/;
        kk_integer_drop(n, _ctx);
        return _brw_x360;
      }
    }
  }
}

bool kk_main_hc__is__punct(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x346;
  bool _match_x353 = kk_integer_gte_borrow(n,(kk_integer_from_small(33)),kk_context()); /*bool*/;
  if (_match_x353) {
    bool _match_x355 = kk_integer_lte_borrow(n,(kk_integer_from_small(47)),kk_context()); /*bool*/;
    if (_match_x355) {
      _match_x346 = true; /*bool*/
    }
    else {
      bool _match_x356 = kk_integer_gte_borrow(n,(kk_integer_from_small(58)),kk_context()); /*bool*/;
      if (_match_x356) {
        _match_x346 = kk_integer_lte_borrow(n,(kk_integer_from_small(64)),kk_context()); /*bool*/
      }
      else {
        _match_x346 = false; /*bool*/
      }
    }
  }
  else {
    bool _match_x354 = kk_integer_gte_borrow(n,(kk_integer_from_small(58)),kk_context()); /*bool*/;
    if (_match_x354) {
      _match_x346 = kk_integer_lte_borrow(n,(kk_integer_from_small(64)),kk_context()); /*bool*/
    }
    else {
      _match_x346 = false; /*bool*/
    }
  }
  if (_match_x346) {
    kk_integer_drop(n, _ctx);
    return true;
  }
  {
    bool _match_x347 = kk_integer_gte_borrow(n,(kk_integer_from_small(91)),kk_context()); /*bool*/;
    if (_match_x347) {
      bool _match_x350 = kk_integer_lte_borrow(n,(kk_integer_from_small(96)),kk_context()); /*bool*/;
      if (_match_x350) {
        kk_integer_drop(n, _ctx);
        return true;
      }
      {
        bool _match_x351 = kk_integer_gte_borrow(n,(kk_integer_from_small(123)),kk_context()); /*bool*/;
        if (_match_x351) {
          bool _brw_x352 = kk_integer_lte_borrow(n,(kk_integer_from_small(126)),kk_context()); /*bool*/;
          kk_integer_drop(n, _ctx);
          return _brw_x352;
        }
        {
          kk_integer_drop(n, _ctx);
          return false;
        }
      }
    }
    {
      bool _match_x348 = kk_integer_gte_borrow(n,(kk_integer_from_small(123)),kk_context()); /*bool*/;
      if (_match_x348) {
        bool _brw_x349 = kk_integer_lte_borrow(n,(kk_integer_from_small(126)),kk_context()); /*bool*/;
        kk_integer_drop(n, _ctx);
        return _brw_x349;
      }
      {
        kk_integer_drop(n, _ctx);
        return false;
      }
    }
  }
}


// lift anonymous function
struct kk_main_hc__all__digits_fun490__t {
  struct kk_function_s _base;
};
static bool kk_main_hc__all__digits_fun490(kk_function_t _fself, kk_box_t _b_x32, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__all__digits_fun490(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hc__all__digits_fun490, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_main_hc__all__digits_fun490(kk_function_t _fself, kk_box_t _b_x32, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x491 = kk_char_unbox(_b_x32, KK_OWNED, _ctx); /*char*/
  return kk_main_hc__is__digit(_x_x491, _ctx);
}

bool kk_main_hc__all__digits(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x343;
  kk_integer_t _brw_x344;
  kk_string_t _x_x489 = kk_string_dup(s, _ctx); /*string*/
  _brw_x344 = kk_std_core_string_chars_fs_count(_x_x489, _ctx); /*int*/
  bool _brw_x345 = kk_integer_eq_borrow(_brw_x344,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x344, _ctx);
  _match_x343 = _brw_x345; /*bool*/
  if (_match_x343) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x30_33 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x30_33, kk_main_new_hc__all__digits_fun490(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_main_hc__all__alpha_fun493__t {
  struct kk_function_s _base;
};
static bool kk_main_hc__all__alpha_fun493(kk_function_t _fself, kk_box_t _b_x37, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__all__alpha_fun493(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hc__all__alpha_fun493, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_main_hc__all__alpha_fun493(kk_function_t _fself, kk_box_t _b_x37, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x494 = kk_char_unbox(_b_x37, KK_OWNED, _ctx); /*char*/
  return kk_main_hc__is__alpha(_x_x494, _ctx);
}

bool kk_main_hc__all__alpha(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x340;
  kk_integer_t _brw_x341;
  kk_string_t _x_x492 = kk_string_dup(s, _ctx); /*string*/
  _brw_x341 = kk_std_core_string_chars_fs_count(_x_x492, _ctx); /*int*/
  bool _brw_x342 = kk_integer_eq_borrow(_brw_x341,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x341, _ctx);
  _match_x340 = _brw_x342; /*bool*/
  if (_match_x340) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x35_38 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x35_38, kk_main_new_hc__all__alpha_fun493(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_main_hc__all__upper_fun496__t {
  struct kk_function_s _base;
};
static bool kk_main_hc__all__upper_fun496(kk_function_t _fself, kk_box_t _b_x42, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__all__upper_fun496(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hc__all__upper_fun496, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_main_hc__all__upper_fun496(kk_function_t _fself, kk_box_t _b_x42, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x497 = kk_char_unbox(_b_x42, KK_OWNED, _ctx); /*char*/
  return kk_main_hc__is__upper(_x_x497, _ctx);
}

bool kk_main_hc__all__upper(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x337;
  kk_integer_t _brw_x338;
  kk_string_t _x_x495 = kk_string_dup(s, _ctx); /*string*/
  _brw_x338 = kk_std_core_string_chars_fs_count(_x_x495, _ctx); /*int*/
  bool _brw_x339 = kk_integer_eq_borrow(_brw_x338,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x338, _ctx);
  _match_x337 = _brw_x339; /*bool*/
  if (_match_x337) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x40_43 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x40_43, kk_main_new_hc__all__upper_fun496(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_main_hc__all__lower_fun499__t {
  struct kk_function_s _base;
};
static bool kk_main_hc__all__lower_fun499(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__all__lower_fun499(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hc__all__lower_fun499, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_main_hc__all__lower_fun499(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x500 = kk_char_unbox(_b_x47, KK_OWNED, _ctx); /*char*/
  return kk_main_hc__is__lower(_x_x500, _ctx);
}

bool kk_main_hc__all__lower(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x334;
  kk_integer_t _brw_x335;
  kk_string_t _x_x498 = kk_string_dup(s, _ctx); /*string*/
  _brw_x335 = kk_std_core_string_chars_fs_count(_x_x498, _ctx); /*int*/
  bool _brw_x336 = kk_integer_eq_borrow(_brw_x335,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x335, _ctx);
  _match_x334 = _brw_x336; /*bool*/
  if (_match_x334) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x45_48 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x45_48, kk_main_new_hc__all__lower_fun499(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_main_hc__all__alnum_fun502__t {
  struct kk_function_s _base;
};
static bool kk_main_hc__all__alnum_fun502(kk_function_t _fself, kk_box_t _b_x52, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__all__alnum_fun502(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hc__all__alnum_fun502, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_main_hc__all__alnum_fun502(kk_function_t _fself, kk_box_t _b_x52, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x503 = kk_char_unbox(_b_x52, KK_OWNED, _ctx); /*char*/
  return kk_main_hc__is__alnum(_x_x503, _ctx);
}

bool kk_main_hc__all__alnum(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x331;
  kk_integer_t _brw_x332;
  kk_string_t _x_x501 = kk_string_dup(s, _ctx); /*string*/
  _brw_x332 = kk_std_core_string_chars_fs_count(_x_x501, _ctx); /*int*/
  bool _brw_x333 = kk_integer_eq_borrow(_brw_x332,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x332, _ctx);
  _match_x331 = _brw_x333; /*bool*/
  if (_match_x331) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x50_53 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x50_53, kk_main_new_hc__all__alnum_fun502(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_main_hc__glob__match__chars_fun509__t {
  struct kk_function_s _base;
};
static bool kk_main_hc__glob__match__chars_fun509(kk_function_t _fself, kk_box_t _b_x59, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__glob__match__chars_fun509(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hc__glob__match__chars_fun509, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_main_hc__glob__match__chars_fun509(kk_function_t _fself, kk_box_t _b_x59, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x510;
  kk_char_t _x_x511 = kk_char_unbox(_b_x59, KK_OWNED, _ctx); /*char*/
  _x_x510 = kk_std_core_string_char_fs_string(_x_x511, _ctx); /*string*/
  kk_string_t _x_x512;
  kk_define_string_literal(static, _s_x513, 1, "/", _ctx)
  _x_x512 = kk_string_dup(_s_x513, _ctx); /*string*/
  return kk_string_is_neq(_x_x510,_x_x512,kk_context());
}

bool kk_main_hc__glob__match__chars(kk_std_core_types__list pat, kk_std_core_types__list input, kk_context_t* _ctx) { /* (pat : list<char>, input : list<char>) -> div bool */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(pat, _ctx)) {
    if (kk_std_core_types__is_Nil(input, _ctx)) {
      return true;
    }
    {
      kk_std_core_types__list_drop(input, _ctx);
      return false;
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x504 = kk_std_core_types__as_Cons(pat, _ctx);
    kk_box_t _box_x55 = _con_x504->head;
    kk_std_core_types__list prest = _con_x504->tail;
    kk_char_t p = kk_char_unbox(_box_x55, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(pat, _ctx)) {
      kk_datatype_ptr_free(pat, _ctx);
    }
    else {
      kk_std_core_types__list_dup(prest, _ctx);
      kk_datatype_ptr_decref(pat, _ctx);
    }
    kk_string_t _match_x328 = kk_std_core_string_char_fs_string(p, _ctx); /*string*/;
    if (kk_string_cmp_cstr_borrow(_match_x328, "\?", _ctx) == 0) {
      kk_string_drop(_match_x328, _ctx);
      if (kk_std_core_types__is_Nil(input, _ctx)) {
        kk_std_core_types__list_drop(prest, _ctx);
        return false;
      }
      {
        struct kk_std_core_types_Cons* _con_x505 = kk_std_core_types__as_Cons(input, _ctx);
        kk_box_t _box_x56 = _con_x505->head;
        kk_std_core_types__list irest = _con_x505->tail;
        kk_char_t c = kk_char_unbox(_box_x56, KK_BORROWED, _ctx);
        if kk_likely(kk_datatype_ptr_is_unique(input, _ctx)) {
          kk_datatype_ptr_free(input, _ctx);
        }
        else {
          kk_std_core_types__list_dup(irest, _ctx);
          kk_datatype_ptr_decref(input, _ctx);
        }
        bool _match_x330;
        kk_string_t _x_x506 = kk_std_core_string_char_fs_string(c, _ctx); /*string*/
        kk_string_t _x_x507;
        kk_define_string_literal(static, _s_x508, 1, "/", _ctx)
        _x_x507 = kk_string_dup(_s_x508, _ctx); /*string*/
        _match_x330 = kk_string_is_eq(_x_x506,_x_x507,kk_context()); /*bool*/
        if (_match_x330) {
          kk_std_core_types__list_drop(prest, _ctx);
          kk_std_core_types__list_drop(irest, _ctx);
          return false;
        }
        { // tailcall
          pat = prest;
          input = irest;
          goto kk__tailcall;
        }
      }
    }
    if (kk_string_cmp_cstr_borrow(_match_x328, "*", _ctx) == 0) {
      kk_string_drop(_match_x328, _ctx);
      if (kk_std_core_types__is_Nil(prest, _ctx)) {
        return kk_std_core_list_all(input, kk_main_new_hc__glob__match__chars_fun509(_ctx), _ctx);
      }
      {
        return kk_main_hc__glob__star(prest, input, _ctx);
      }
    }
    {
      kk_string_drop(_match_x328, _ctx);
      if (kk_std_core_types__is_Nil(input, _ctx)) {
        kk_std_core_types__list_drop(prest, _ctx);
        return false;
      }
      {
        struct kk_std_core_types_Cons* _con_x514 = kk_std_core_types__as_Cons(input, _ctx);
        kk_box_t _box_x60 = _con_x514->head;
        kk_std_core_types__list irest_0 = _con_x514->tail;
        kk_char_t c_1 = kk_char_unbox(_box_x60, KK_BORROWED, _ctx);
        if kk_likely(kk_datatype_ptr_is_unique(input, _ctx)) {
          kk_datatype_ptr_free(input, _ctx);
        }
        else {
          kk_std_core_types__list_dup(irest_0, _ctx);
          kk_datatype_ptr_decref(input, _ctx);
        }
        bool _match_x329 = (p == c_1); /*bool*/;
        if (_match_x329) { // tailcall
                           pat = prest;
                           input = irest_0;
                           goto kk__tailcall;
        }
        {
          kk_std_core_types__list_drop(prest, _ctx);
          kk_std_core_types__list_drop(irest_0, _ctx);
          return false;
        }
      }
    }
  }
}

bool kk_main_hc__glob__star(kk_std_core_types__list prest_0, kk_std_core_types__list input_0, kk_context_t* _ctx) { /* (prest : list<char>, input : list<char>) -> div bool */ 
  kk__tailcall: ;
  bool _match_x326;
  kk_std_core_types__list _x_x515 = kk_std_core_types__list_dup(prest_0, _ctx); /*list<char>*/
  kk_std_core_types__list _x_x516 = kk_std_core_types__list_dup(input_0, _ctx); /*list<char>*/
  _match_x326 = kk_main_hc__glob__match__chars(_x_x515, _x_x516, _ctx); /*bool*/
  if (_match_x326) {
    kk_std_core_types__list_drop(prest_0, _ctx);
    kk_std_core_types__list_drop(input_0, _ctx);
    return true;
  }
  if (kk_std_core_types__is_Nil(input_0, _ctx)) {
    kk_std_core_types__list_drop(prest_0, _ctx);
    return false;
  }
  {
    struct kk_std_core_types_Cons* _con_x517 = kk_std_core_types__as_Cons(input_0, _ctx);
    kk_box_t _box_x64 = _con_x517->head;
    kk_std_core_types__list irest_1 = _con_x517->tail;
    kk_char_t c_2 = kk_char_unbox(_box_x64, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(input_0, _ctx)) {
      kk_datatype_ptr_free(input_0, _ctx);
    }
    else {
      kk_std_core_types__list_dup(irest_1, _ctx);
      kk_datatype_ptr_decref(input_0, _ctx);
    }
    bool _match_x327;
    kk_string_t _x_x518 = kk_std_core_string_char_fs_string(c_2, _ctx); /*string*/
    kk_string_t _x_x519;
    kk_define_string_literal(static, _s_x520, 1, "/", _ctx)
    _x_x519 = kk_string_dup(_s_x520, _ctx); /*string*/
    _match_x327 = kk_string_is_eq(_x_x518,_x_x519,kk_context()); /*bool*/
    if (_match_x327) {
      kk_std_core_types__list_drop(prest_0, _ctx);
      kk_std_core_types__list_drop(irest_1, _ctx);
      return false;
    }
    { // tailcall
      input_0 = irest_1;
      goto kk__tailcall;
    }
  }
}

bool kk_main_hc__glob__doublestar(kk_std_core_types__list prest, kk_std_core_types__list paths, kk_context_t* _ctx) { /* (prest : list<string>, paths : list<string>) -> div bool */ 
  kk__tailcall: ;
  bool _match_x325;
  kk_std_core_types__list _x_x523 = kk_std_core_types__list_dup(prest, _ctx); /*list<string>*/
  kk_std_core_types__list _x_x524 = kk_std_core_types__list_dup(paths, _ctx); /*list<string>*/
  _match_x325 = kk_main_hc__glob__match__segments(_x_x523, _x_x524, _ctx); /*bool*/
  if (_match_x325) {
    kk_std_core_types__list_drop(prest, _ctx);
    kk_std_core_types__list_drop(paths, _ctx);
    return true;
  }
  if (kk_std_core_types__is_Nil(paths, _ctx)) {
    kk_std_core_types__list_drop(prest, _ctx);
    return false;
  }
  {
    struct kk_std_core_types_Cons* _con_x525 = kk_std_core_types__as_Cons(paths, _ctx);
    kk_box_t _box_x65 = _con_x525->head;
    kk_std_core_types__list srest = _con_x525->tail;
    kk_string_t _pat_3 = kk_string_unbox(_box_x65);
    if kk_likely(kk_datatype_ptr_is_unique(paths, _ctx)) {
      kk_string_drop(_pat_3, _ctx);
      kk_datatype_ptr_free(paths, _ctx);
    }
    else {
      kk_std_core_types__list_dup(srest, _ctx);
      kk_datatype_ptr_decref(paths, _ctx);
    }
    { // tailcall
      paths = srest;
      goto kk__tailcall;
    }
  }
}

bool kk_main_hc__glob__match__segments(kk_std_core_types__list pats, kk_std_core_types__list paths_0, kk_context_t* _ctx) { /* (pats : list<string>, paths : list<string>) -> div bool */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(pats, _ctx)) {
    if (kk_std_core_types__is_Nil(paths_0, _ctx)) {
      return true;
    }
    {
      kk_std_core_types__list_drop(paths_0, _ctx);
      return false;
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x526 = kk_std_core_types__as_Cons(pats, _ctx);
    kk_box_t _box_x66 = _con_x526->head;
    kk_std_core_types__list prest_0 = _con_x526->tail;
    kk_string_t p = kk_string_unbox(_box_x66);
    if kk_likely(kk_datatype_ptr_is_unique(pats, _ctx)) {
      kk_datatype_ptr_free(pats, _ctx);
    }
    else {
      kk_string_dup(p, _ctx);
      kk_std_core_types__list_dup(prest_0, _ctx);
      kk_datatype_ptr_decref(pats, _ctx);
    }
    bool _match_x323;
    kk_string_t _x_x527 = kk_string_dup(p, _ctx); /*string*/
    kk_string_t _x_x528;
    kk_define_string_literal(static, _s_x529, 2, "**", _ctx)
    _x_x528 = kk_string_dup(_s_x529, _ctx); /*string*/
    _match_x323 = kk_string_is_eq(_x_x527,_x_x528,kk_context()); /*bool*/
    if (_match_x323) {
      kk_string_drop(p, _ctx);
      return kk_main_hc__glob__doublestar(prest_0, paths_0, _ctx);
    }
    if (kk_std_core_types__is_Nil(paths_0, _ctx)) {
      kk_std_core_types__list_drop(prest_0, _ctx);
      kk_string_drop(p, _ctx);
      return false;
    }
    {
      struct kk_std_core_types_Cons* _con_x530 = kk_std_core_types__as_Cons(paths_0, _ctx);
      kk_box_t _box_x67 = _con_x530->head;
      kk_std_core_types__list srest_0 = _con_x530->tail;
      kk_string_t s = kk_string_unbox(_box_x67);
      if kk_likely(kk_datatype_ptr_is_unique(paths_0, _ctx)) {
        kk_datatype_ptr_free(paths_0, _ctx);
      }
      else {
        kk_string_dup(s, _ctx);
        kk_std_core_types__list_dup(srest_0, _ctx);
        kk_datatype_ptr_decref(paths_0, _ctx);
      }
      bool _match_x324;
      kk_std_core_types__list _x_x531 = kk_std_core_string_list(p, _ctx); /*list<char>*/
      kk_std_core_types__list _x_x532 = kk_std_core_string_list(s, _ctx); /*list<char>*/
      _match_x324 = kk_main_hc__glob__match__chars(_x_x531, _x_x532, _ctx); /*bool*/
      if (_match_x324) { // tailcall
                         pats = prest_0;
                         paths_0 = srest_0;
                         goto kk__tailcall;
      }
      {
        kk_std_core_types__list_drop(srest_0, _ctx);
        kk_std_core_types__list_drop(prest_0, _ctx);
        return false;
      }
    }
  }
}


// lift anonymous function
struct kk_main_hc__glob__match__path_fun537__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_hc__glob__match__path_fun537(kk_function_t _fself, kk_box_t _b_x70, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__glob__match__path_fun537(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hc__glob__match__path_fun537, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main_hc__glob__match__path_fun537(kk_function_t _fself, kk_box_t _b_x70, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x538;
  kk_char_t _x_x539 = kk_char_unbox(_b_x70, KK_OWNED, _ctx); /*char*/
  _x_x538 = kk_std_core_string_char_fs_string(_x_x539, _ctx); /*string*/
  return kk_string_box(_x_x538);
}


// lift anonymous function
struct kk_main_hc__glob__match__path_fun546__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_hc__glob__match__path_fun546(kk_function_t _fself, kk_box_t _b_x75, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__glob__match__path_fun546(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hc__glob__match__path_fun546, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main_hc__glob__match__path_fun546(kk_function_t _fself, kk_box_t _b_x75, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x547;
  kk_char_t _x_x548 = kk_char_unbox(_b_x75, KK_OWNED, _ctx); /*char*/
  _x_x547 = kk_std_core_string_char_fs_string(_x_x548, _ctx); /*string*/
  return kk_string_box(_x_x547);
}

bool kk_main_hc__glob__match__path(kk_string_t pattern, kk_string_t hc__path, kk_context_t* _ctx) { /* (pattern : string, hc_path : string) -> div bool */ 
  kk_std_core_types__list pat__parts;
  bool _match_x320;
  kk_string_t _x_x533;
  kk_define_string_literal(static, _s_x534, 1, "/", _ctx)
  _x_x533 = kk_string_dup(_s_x534, _ctx); /*string*/
  kk_string_t _x_x535 = kk_string_empty(); /*string*/
  _match_x320 = kk_string_is_eq(_x_x533,_x_x535,kk_context()); /*bool*/
  if (_match_x320) {
    kk_std_core_types__list _b_x68_71 = kk_std_core_string_list(pattern, _ctx); /*list<char>*/;
    kk_function_t _brw_x321 = kk_main_new_hc__glob__match__path_fun537(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x322 = kk_std_core_list_map(_b_x68_71, _brw_x321, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x321, _ctx);
    pat__parts = _brw_x322; /*list<string>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x540;
    kk_define_string_literal(static, _s_x541, 1, "/", _ctx)
    _x_x540 = kk_string_dup(_s_x541, _ctx); /*string*/
    v_10011 = kk_string_splitv(pattern,_x_x540,kk_context()); /*vector<string>*/
    pat__parts = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  kk_std_core_types__list path__parts;
  bool _match_x317;
  kk_string_t _x_x542;
  kk_define_string_literal(static, _s_x543, 1, "/", _ctx)
  _x_x542 = kk_string_dup(_s_x543, _ctx); /*string*/
  kk_string_t _x_x544 = kk_string_empty(); /*string*/
  _match_x317 = kk_string_is_eq(_x_x542,_x_x544,kk_context()); /*bool*/
  if (_match_x317) {
    kk_std_core_types__list _b_x73_76 = kk_std_core_string_list(hc__path, _ctx); /*list<char>*/;
    kk_function_t _brw_x318 = kk_main_new_hc__glob__match__path_fun546(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x319 = kk_std_core_list_map(_b_x73_76, _brw_x318, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x318, _ctx);
    path__parts = _brw_x319; /*list<string>*/
  }
  else {
    kk_vector_t v_10011_0;
    kk_string_t _x_x549;
    kk_define_string_literal(static, _s_x550, 1, "/", _ctx)
    _x_x549 = kk_string_dup(_s_x550, _ctx); /*string*/
    v_10011_0 = kk_string_splitv(hc__path,_x_x549,kk_context()); /*vector<string>*/
    path__parts = kk_std_core_vector_vlist(v_10011_0, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  return kk_main_hc__glob__match__segments(pat__parts, path__parts, _ctx);
}


// lift anonymous function
struct kk_main_hc__words_fun556__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_hc__words_fun556(kk_function_t _fself, kk_box_t _b_x80, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__words_fun556(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hc__words_fun556, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main_hc__words_fun556(kk_function_t _fself, kk_box_t _b_x80, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x557;
  kk_char_t _x_x558 = kk_char_unbox(_b_x80, KK_OWNED, _ctx); /*char*/
  _x_x557 = kk_std_core_string_char_fs_string(_x_x558, _ctx); /*string*/
  return kk_string_box(_x_x557);
}


// lift anonymous function
struct kk_main_hc__words_fun561__t {
  struct kk_function_s _base;
};
static bool kk_main_hc__words_fun561(kk_function_t _fself, kk_box_t _b_x83, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__words_fun561(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hc__words_fun561, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_main_hc__words_fun561(kk_function_t _fself, kk_box_t _b_x83, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool b_10041;
  kk_integer_t _brw_x308;
  kk_string_t _x_x562 = kk_string_unbox(_b_x83); /*string*/
  _brw_x308 = kk_std_core_string_chars_fs_count(_x_x562, _ctx); /*int*/
  bool _brw_x309 = kk_integer_eq_borrow(_brw_x308,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x308, _ctx);
  b_10041 = _brw_x309; /*bool*/
  if (b_10041) {
    return false;
  }
  {
    return true;
  }
}

kk_std_core_types__list kk_main_hc__words(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> list<string> */ 
  kk_std_core_types__list _b_x81_84;
  bool _match_x310;
  kk_string_t _x_x552;
  kk_define_string_literal(static, _s_x553, 1, " ", _ctx)
  _x_x552 = kk_string_dup(_s_x553, _ctx); /*string*/
  kk_string_t _x_x554 = kk_string_empty(); /*string*/
  _match_x310 = kk_string_is_eq(_x_x552,_x_x554,kk_context()); /*bool*/
  if (_match_x310) {
    kk_std_core_types__list _b_x78_86 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x311 = kk_main_new_hc__words_fun556(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x312 = kk_std_core_list_map(_b_x78_86, _brw_x311, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x311, _ctx);
    _b_x81_84 = _brw_x312; /*list<string>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x559;
    kk_define_string_literal(static, _s_x560, 1, " ", _ctx)
    _x_x559 = kk_string_dup(_s_x560, _ctx); /*string*/
    v_10011 = kk_string_splitv(s,_x_x559,kk_context()); /*vector<string>*/
    _b_x81_84 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  return kk_std_core_list_filter(_b_x81_84, kk_main_new_hc__words_fun561(_ctx), _ctx);
}


// lift anonymous function
struct kk_main_hc__lines_fun567__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_hc__lines_fun567(kk_function_t _fself, kk_box_t _b_x91, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__lines_fun567(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hc__lines_fun567, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main_hc__lines_fun567(kk_function_t _fself, kk_box_t _b_x91, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x568;
  kk_char_t _x_x569 = kk_char_unbox(_b_x91, KK_OWNED, _ctx); /*char*/
  _x_x568 = kk_std_core_string_char_fs_string(_x_x569, _ctx); /*string*/
  return kk_string_box(_x_x568);
}

kk_std_core_types__list kk_main_hc__lines(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> list<string> */ 
  bool _match_x305;
  kk_string_t _x_x563;
  kk_define_string_literal(static, _s_x564, 1, "\n", _ctx)
  _x_x563 = kk_string_dup(_s_x564, _ctx); /*string*/
  kk_string_t _x_x565 = kk_string_empty(); /*string*/
  _match_x305 = kk_string_is_eq(_x_x563,_x_x565,kk_context()); /*bool*/
  if (_match_x305) {
    kk_std_core_types__list _b_x89_92 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x306 = kk_main_new_hc__lines_fun567(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x307 = kk_std_core_list_map(_b_x89_92, _brw_x306, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x306, _ctx);
    return _brw_x307;
  }
  {
    kk_vector_t v_10011;
    kk_string_t _x_x570;
    kk_define_string_literal(static, _s_x571, 1, "\n", _ctx)
    _x_x570 = kk_string_dup(_s_x571, _ctx); /*string*/
    v_10011 = kk_string_splitv(s,_x_x570,kk_context()); /*vector<string>*/
    return kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx);
  }
}

kk_string_t kk_main_hc__repeat__str(kk_string_t s, kk_integer_t n, kk_context_t* _ctx) { /* (s : string, n : int) -> div string */ 
  bool _match_x304 = kk_integer_lte_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x304) {
    kk_string_drop(s, _ctx);
    kk_integer_drop(n, _ctx);
    return kk_string_empty();
  }
  {
    kk_string_t _x_x577 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x578;
    kk_integer_t _x_x579 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
    _x_x578 = kk_main_hc__repeat__str(s, _x_x579, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x577, _x_x578, _ctx);
  }
}

kk_string_t kk_main_hc__pad__left(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10055;
  kk_string_t _x_x580 = kk_string_dup(s, _ctx); /*string*/
  y_10055 = kk_std_core_string_chars_fs_count(_x_x580, _ctx); /*int*/
  kk_integer_t b_10053 = kk_integer_sub(width,y_10055,kk_context()); /*int*/;
  kk_string_t _x_x581;
  kk_integer_t _x_x582;
  bool _match_x303 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10053,kk_context()); /*bool*/;
  if (_match_x303) {
    kk_integer_drop(b_10053, _ctx);
    _x_x582 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x582 = b_10053; /*int*/
  }
  _x_x581 = kk_main_hc__repeat__str(ch, _x_x582, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x581, s, _ctx);
}

kk_string_t kk_main_hc__pad__right(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10059;
  kk_string_t _x_x583 = kk_string_dup(s, _ctx); /*string*/
  y_10059 = kk_std_core_string_chars_fs_count(_x_x583, _ctx); /*int*/
  kk_integer_t b_10057 = kk_integer_sub(width,y_10059,kk_context()); /*int*/;
  kk_string_t _x_x584;
  kk_integer_t _x_x585;
  bool _match_x302 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10057,kk_context()); /*bool*/;
  if (_match_x302) {
    kk_integer_drop(b_10057, _ctx);
    _x_x585 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x585 = b_10057; /*int*/
  }
  _x_x584 = kk_main_hc__repeat__str(ch, _x_x585, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(s, _x_x584, _ctx);
}

kk_string_t kk_main_hc__center(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10063;
  kk_string_t _x_x586 = kk_string_dup(s, _ctx); /*string*/
  y_10063 = kk_std_core_string_chars_fs_count(_x_x586, _ctx); /*int*/
  kk_integer_t b_10061 = kk_integer_sub(width,y_10063,kk_context()); /*int*/;
  kk_integer_t total;
  bool _match_x301 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10061,kk_context()); /*bool*/;
  if (_match_x301) {
    kk_integer_drop(b_10061, _ctx);
    total = kk_integer_from_small(0); /*int*/
  }
  else {
    total = b_10061; /*int*/
  }
  kk_integer_t left;
  kk_integer_t _x_x587 = kk_integer_dup(total, _ctx); /*int*/
  left = kk_integer_div(_x_x587,(kk_integer_from_small(2)),kk_context()); /*int*/
  kk_integer_t right;
  kk_integer_t _x_x588 = kk_integer_dup(left, _ctx); /*int*/
  right = kk_integer_sub(total,_x_x588,kk_context()); /*int*/
  kk_string_t _x_x589;
  kk_string_t _x_x590;
  kk_string_t _x_x591 = kk_string_dup(ch, _ctx); /*string*/
  _x_x590 = kk_main_hc__repeat__str(_x_x591, left, _ctx); /*string*/
  _x_x589 = kk_std_core_types__lp__plus__plus__rp_(_x_x590, s, _ctx); /*string*/
  kk_string_t _x_x592 = kk_main_hc__repeat__str(ch, right, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x589, _x_x592, _ctx);
}

kk_string_t kk_main_hc__removeprefix(kk_string_t s, kk_string_t pre, kk_context_t* _ctx) { /* (s : string, pre : string) -> string */ 
  kk_std_core_types__maybe maybe_10066;
  kk_string_t _x_x593 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x594 = kk_string_dup(pre, _ctx); /*string*/
  maybe_10066 = kk_std_core_sslice_starts_with(_x_x593, _x_x594, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(maybe_10066, _ctx)) {
    kk_box_t _box_x94 = maybe_10066._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_10066, _ctx);
    kk_std_core_types__list _x_x595;
    kk_std_core_types__list _x_x596 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    kk_integer_t _x_x597 = kk_std_core_string_chars_fs_count(pre, _ctx); /*int*/
    _x_x595 = kk_std_core_list_drop(_x_x596, _x_x597, _ctx); /*list<10001>*/
    return kk_std_core_string_listchar_fs_string(_x_x595, _ctx);
  }
  {
    kk_string_drop(pre, _ctx);
    return s;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift_hc__print__all__rows_10114_fun603__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift_hc__print__all__rows_10114_fun603(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_hc__print__all__rows_10114_fun603(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_hc__print__all__rows_10114_fun603, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main__mlift_hc__print__all__rows_10114_fun603(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x604 = kk_Unit;
  kk_sqlite__queryresult _x_x605 = kk_sqlite__queryresult_unbox(_b_x99, KK_OWNED, _ctx); /*sqlite/queryresult*/
  kk_sqlite_hc__print__rows(_x_x605, _ctx);
  return kk_unit_box(_x_x604);
}

kk_unit_t kk_main__mlift_hc__print__all__rows_10114(kk_std_core_types__either _y_x10080, kk_context_t* _ctx) { /* (either<string,sqlite/queryresult>) -> io () */ 
  if (kk_std_core_types__is_Left(_y_x10080, _ctx)) {
    kk_box_t _box_x95 = _y_x10080._cons.Left.left;
    kk_string_t e = kk_string_unbox(_box_x95);
    kk_string_dup(e, _ctx);
    kk_std_core_types__either_drop(_y_x10080, _ctx);
    kk_string_t _x_x598;
    kk_string_t _x_x599;
    kk_define_string_literal(static, _s_x600, 14, "query failed: ", _ctx)
    _x_x599 = kk_string_dup(_s_x600, _ctx); /*string*/
    _x_x598 = kk_std_core_types__lp__plus__plus__rp_(_x_x599, e, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x598, _ctx); return kk_Unit;
  }
  {
    kk_box_t _box_x96 = _y_x10080._cons.Right.right;
    kk_sqlite__queryresult r = kk_sqlite__queryresult_unbox(_box_x96, KK_BORROWED, _ctx);
    struct kk_sqlite_Queryresult* _con_x601 = kk_sqlite__as_Queryresult(r, _ctx);
    kk_sqlite__queryresult_dup(r, _ctx);
    kk_std_core_types__either_drop(_y_x10080, _ctx);
    kk_box_t _x_x602 = kk_std_core_hnd__open_none1(kk_main__new_mlift_hc__print__all__rows_10114_fun603(_ctx), kk_sqlite__queryresult_box(r, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x602); return kk_Unit;
  }
}
 
// .hc:3


// lift anonymous function
struct kk_main_hc__print__all__rows_fun607__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_hc__print__all__rows_fun607(kk_function_t _fself, kk_box_t _b_x103, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__print__all__rows_fun607(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hc__print__all__rows_fun607, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main_hc__print__all__rows_fun607(kk_function_t _fself, kk_box_t _b_x103, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x608 = kk_Unit;
  kk_std_core_types__either _x_x609 = kk_std_core_types__either_unbox(_b_x103, KK_OWNED, _ctx); /*either<string,sqlite/queryresult>*/
  kk_main__mlift_hc__print__all__rows_10114(_x_x609, _ctx);
  return kk_unit_box(_x_x608);
}


// lift anonymous function
struct kk_main_hc__print__all__rows_fun615__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_hc__print__all__rows_fun615(kk_function_t _fself, kk_box_t _b_x108, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__print__all__rows_fun615(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hc__print__all__rows_fun615, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main_hc__print__all__rows_fun615(kk_function_t _fself, kk_box_t _b_x108, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x616 = kk_Unit;
  kk_sqlite__queryresult _x_x617 = kk_sqlite__queryresult_unbox(_b_x108, KK_OWNED, _ctx); /*sqlite/queryresult*/
  kk_sqlite_hc__print__rows(_x_x617, _ctx);
  return kk_unit_box(_x_x616);
}

kk_unit_t kk_main_hc__print__all__rows(kk_sqlite__db db, kk_string_t sql, kk_context_t* _ctx) { /* (db : sqlite/db, sql : string) -> io () */ 
  kk_std_core_types__either x_10138 = kk_sqlite_hc__sqlite__query__p(db, sql, kk_std_core_types__new_Nil(_ctx), _ctx); /*either<string,sqlite/queryresult>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__either_drop(x_10138, _ctx);
    kk_box_t _x_x606 = kk_std_core_hnd_yield_extend(kk_main_new_hc__print__all__rows_fun607(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x606); return kk_Unit;
  }
  if (kk_std_core_types__is_Left(x_10138, _ctx)) {
    kk_box_t _box_x104 = x_10138._cons.Left.left;
    kk_string_t e = kk_string_unbox(_box_x104);
    kk_string_dup(e, _ctx);
    kk_std_core_types__either_drop(x_10138, _ctx);
    kk_string_t _x_x610;
    kk_string_t _x_x611;
    kk_define_string_literal(static, _s_x612, 14, "query failed: ", _ctx)
    _x_x611 = kk_string_dup(_s_x612, _ctx); /*string*/
    _x_x610 = kk_std_core_types__lp__plus__plus__rp_(_x_x611, e, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x610, _ctx); return kk_Unit;
  }
  {
    kk_box_t _box_x105 = x_10138._cons.Right.right;
    kk_sqlite__queryresult r = kk_sqlite__queryresult_unbox(_box_x105, KK_BORROWED, _ctx);
    struct kk_sqlite_Queryresult* _con_x613 = kk_sqlite__as_Queryresult(r, _ctx);
    kk_sqlite__queryresult_dup(r, _ctx);
    kk_std_core_types__either_drop(x_10138, _ctx);
    kk_box_t _x_x614 = kk_std_core_hnd__open_none1(kk_main_new_hc__print__all__rows_fun615(_ctx), kk_sqlite__queryresult_box(r, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x614); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift_hc__print__filtered_10115_fun623__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift_hc__print__filtered_10115_fun623(kk_function_t _fself, kk_box_t _b_x116, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_hc__print__filtered_10115_fun623(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_hc__print__filtered_10115_fun623, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main__mlift_hc__print__filtered_10115_fun623(kk_function_t _fself, kk_box_t _b_x116, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x624 = kk_Unit;
  kk_sqlite__queryresult _x_x625 = kk_sqlite__queryresult_unbox(_b_x116, KK_OWNED, _ctx); /*sqlite/queryresult*/
  kk_sqlite_hc__print__rows(_x_x625, _ctx);
  return kk_unit_box(_x_x624);
}

kk_unit_t kk_main__mlift_hc__print__filtered_10115(kk_std_core_types__either _y_x10082, kk_context_t* _ctx) { /* (either<string,sqlite/queryresult>) -> io () */ 
  if (kk_std_core_types__is_Left(_y_x10082, _ctx)) {
    kk_box_t _box_x112 = _y_x10082._cons.Left.left;
    kk_string_t e = kk_string_unbox(_box_x112);
    kk_string_dup(e, _ctx);
    kk_std_core_types__either_drop(_y_x10082, _ctx);
    kk_string_t _x_x618;
    kk_string_t _x_x619;
    kk_define_string_literal(static, _s_x620, 23, "filtered query failed: ", _ctx)
    _x_x619 = kk_string_dup(_s_x620, _ctx); /*string*/
    _x_x618 = kk_std_core_types__lp__plus__plus__rp_(_x_x619, e, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x618, _ctx); return kk_Unit;
  }
  {
    kk_box_t _box_x113 = _y_x10082._cons.Right.right;
    kk_sqlite__queryresult r = kk_sqlite__queryresult_unbox(_box_x113, KK_BORROWED, _ctx);
    struct kk_sqlite_Queryresult* _con_x621 = kk_sqlite__as_Queryresult(r, _ctx);
    kk_sqlite__queryresult_dup(r, _ctx);
    kk_std_core_types__either_drop(_y_x10082, _ctx);
    kk_box_t _x_x622 = kk_std_core_hnd__open_none1(kk_main__new_mlift_hc__print__filtered_10115_fun623(_ctx), kk_sqlite__queryresult_box(r, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x622); return kk_Unit;
  }
}
 
// .hc:10


// lift anonymous function
struct kk_main_hc__print__filtered_fun633__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_hc__print__filtered_fun633(kk_function_t _fself, kk_box_t _b_x124, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__print__filtered_fun633(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hc__print__filtered_fun633, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main_hc__print__filtered_fun633(kk_function_t _fself, kk_box_t _b_x124, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x634 = kk_Unit;
  kk_std_core_types__either _x_x635 = kk_std_core_types__either_unbox(_b_x124, KK_OWNED, _ctx); /*either<string,sqlite/queryresult>*/
  kk_main__mlift_hc__print__filtered_10115(_x_x635, _ctx);
  return kk_unit_box(_x_x634);
}


// lift anonymous function
struct kk_main_hc__print__filtered_fun641__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_hc__print__filtered_fun641(kk_function_t _fself, kk_box_t _b_x129, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__print__filtered_fun641(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hc__print__filtered_fun641, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main_hc__print__filtered_fun641(kk_function_t _fself, kk_box_t _b_x129, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x642 = kk_Unit;
  kk_sqlite__queryresult _x_x643 = kk_sqlite__queryresult_unbox(_b_x129, KK_OWNED, _ctx); /*sqlite/queryresult*/
  kk_sqlite_hc__print__rows(_x_x643, _ctx);
  return kk_unit_box(_x_x642);
}

kk_unit_t kk_main_hc__print__filtered(kk_sqlite__db db, kk_context_t* _ctx) { /* (db : sqlite/db) -> io () */ 
  kk_std_core_types__either x_10141;
  kk_string_t _x_x626;
  kk_define_string_literal(static, _s_x627, 37, "SELECT * FROM notes WHERE body LIKE \?", _ctx)
  _x_x626 = kk_string_dup(_s_x627, _ctx); /*string*/
  kk_std_core_types__list _x_x628;
  kk_box_t _x_x629;
  kk_string_t _x_x630;
  kk_define_string_literal(static, _s_x631, 6, "%hica%", _ctx)
  _x_x630 = kk_string_dup(_s_x631, _ctx); /*string*/
  _x_x629 = kk_string_box(_x_x630); /*10021*/
  _x_x628 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x629, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  x_10141 = kk_sqlite_hc__sqlite__query__p(db, _x_x626, _x_x628, _ctx); /*either<string,sqlite/queryresult>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__either_drop(x_10141, _ctx);
    kk_box_t _x_x632 = kk_std_core_hnd_yield_extend(kk_main_new_hc__print__filtered_fun633(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x632); return kk_Unit;
  }
  if (kk_std_core_types__is_Left(x_10141, _ctx)) {
    kk_box_t _box_x125 = x_10141._cons.Left.left;
    kk_string_t e = kk_string_unbox(_box_x125);
    kk_string_dup(e, _ctx);
    kk_std_core_types__either_drop(x_10141, _ctx);
    kk_string_t _x_x636;
    kk_string_t _x_x637;
    kk_define_string_literal(static, _s_x638, 23, "filtered query failed: ", _ctx)
    _x_x637 = kk_string_dup(_s_x638, _ctx); /*string*/
    _x_x636 = kk_std_core_types__lp__plus__plus__rp_(_x_x637, e, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x636, _ctx); return kk_Unit;
  }
  {
    kk_box_t _box_x126 = x_10141._cons.Right.right;
    kk_sqlite__queryresult r = kk_sqlite__queryresult_unbox(_box_x126, KK_BORROWED, _ctx);
    struct kk_sqlite_Queryresult* _con_x639 = kk_sqlite__as_Queryresult(r, _ctx);
    kk_sqlite__queryresult_dup(r, _ctx);
    kk_std_core_types__either_drop(x_10141, _ctx);
    kk_box_t _x_x640 = kk_std_core_hnd__open_none1(kk_main_new_hc__print__filtered_fun641(_ctx), kk_sqlite__queryresult_box(r, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x640); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift_hc__print__table__check_10116_fun652__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift_hc__print__table__check_10116_fun652(kk_function_t _fself, kk_box_t _b_x137, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_hc__print__table__check_10116_fun652(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_hc__print__table__check_10116_fun652, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main__mlift_hc__print__table__check_10116_fun652(kk_function_t _fself, kk_box_t _b_x137, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x653;
  bool b_140 = kk_bool_unbox(_b_x137); /*bool*/;
  if (b_140) {
    kk_define_string_literal(static, _s_x654, 4, "True", _ctx)
    _x_x653 = kk_string_dup(_s_x654, _ctx); /*string*/
  }
  else {
    kk_define_string_literal(static, _s_x655, 5, "False", _ctx)
    _x_x653 = kk_string_dup(_s_x655, _ctx); /*string*/
  }
  return kk_string_box(_x_x653);
}

kk_unit_t kk_main__mlift_hc__print__table__check_10116(kk_string_t name, kk_std_core_types__either _y_x10084, kk_context_t* _ctx) { /* (name : string, either<string,bool>) -> io () */ 
  kk_string_t _x_x644;
  if (kk_std_core_types__is_Left(_y_x10084, _ctx)) {
    kk_box_t _box_x133 = _y_x10084._cons.Left.left;
    kk_string_t e = kk_string_unbox(_box_x133);
    kk_string_drop(name, _ctx);
    kk_string_dup(e, _ctx);
    kk_std_core_types__either_drop(_y_x10084, _ctx);
    kk_string_t _x_x645;
    kk_define_string_literal(static, _s_x646, 21, "table_exists failed: ", _ctx)
    _x_x645 = kk_string_dup(_s_x646, _ctx); /*string*/
    _x_x644 = kk_std_core_types__lp__plus__plus__rp_(_x_x645, e, _ctx); /*string*/
  }
  else {
    kk_box_t _box_x134 = _y_x10084._cons.Right.right;
    bool found = kk_bool_unbox(_box_x134);
    kk_std_core_types__either_drop(_y_x10084, _ctx);
    kk_string_t _x_x647;
    kk_string_t _x_x648;
    kk_define_string_literal(static, _s_x649, 15, " table exists: ", _ctx)
    _x_x648 = kk_string_dup(_s_x649, _ctx); /*string*/
    _x_x647 = kk_std_core_types__lp__plus__plus__rp_(name, _x_x648, _ctx); /*string*/
    kk_string_t _x_x650;
    kk_box_t _x_x651 = kk_std_core_hnd__open_none1(kk_main__new_mlift_hc__print__table__check_10116_fun652(_ctx), kk_bool_box(found), _ctx); /*10001*/
    _x_x650 = kk_string_unbox(_x_x651); /*string*/
    _x_x644 = kk_std_core_types__lp__plus__plus__rp_(_x_x647, _x_x650, _ctx); /*string*/
  }
  kk_std_core_console_printsln(_x_x644, _ctx); return kk_Unit;
}
 
// .hc:17


// lift anonymous function
struct kk_main_hc__print__table__check_fun658__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static kk_box_t kk_main_hc__print__table__check_fun658(kk_function_t _fself, kk_box_t _b_x142, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__print__table__check_fun658(kk_string_t name, kk_context_t* _ctx) {
  struct kk_main_hc__print__table__check_fun658__t* _self = kk_function_alloc_as(struct kk_main_hc__print__table__check_fun658__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_hc__print__table__check_fun658, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_main_hc__print__table__check_fun658(kk_function_t _fself, kk_box_t _b_x142, kk_context_t* _ctx) {
  struct kk_main_hc__print__table__check_fun658__t* _self = kk_function_as(struct kk_main_hc__print__table__check_fun658__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_std_core_types__either _y_x10084_151 = kk_std_core_types__either_unbox(_b_x142, KK_OWNED, _ctx); /*either<string,bool>*/;
  kk_unit_t _x_x659 = kk_Unit;
  kk_main__mlift_hc__print__table__check_10116(name, _y_x10084_151, _ctx);
  return kk_unit_box(_x_x659);
}


// lift anonymous function
struct kk_main_hc__print__table__check_fun668__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_hc__print__table__check_fun668(kk_function_t _fself, kk_box_t _b_x147, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__print__table__check_fun668(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hc__print__table__check_fun668, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main_hc__print__table__check_fun668(kk_function_t _fself, kk_box_t _b_x147, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x669;
  bool b_152 = kk_bool_unbox(_b_x147); /*bool*/;
  if (b_152) {
    kk_define_string_literal(static, _s_x670, 4, "True", _ctx)
    _x_x669 = kk_string_dup(_s_x670, _ctx); /*string*/
  }
  else {
    kk_define_string_literal(static, _s_x671, 5, "False", _ctx)
    _x_x669 = kk_string_dup(_s_x671, _ctx); /*string*/
  }
  return kk_string_box(_x_x669);
}

kk_unit_t kk_main_hc__print__table__check(kk_sqlite__db db, kk_string_t name, kk_context_t* _ctx) { /* (db : sqlite/db, name : string) -> io () */ 
  kk_std_core_types__either x_10144;
  kk_string_t _x_x656 = kk_string_dup(name, _ctx); /*string*/
  x_10144 = kk_sqlite_hc__sqlite__table__exists(db, _x_x656, _ctx); /*either<string,bool>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__either_drop(x_10144, _ctx);
    kk_box_t _x_x657 = kk_std_core_hnd_yield_extend(kk_main_new_hc__print__table__check_fun658(name, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x657); return kk_Unit;
  }
  {
    kk_string_t _x_x660;
    if (kk_std_core_types__is_Left(x_10144, _ctx)) {
      kk_box_t _box_x143 = x_10144._cons.Left.left;
      kk_string_t e = kk_string_unbox(_box_x143);
      kk_string_dup(e, _ctx);
      kk_std_core_types__either_drop(x_10144, _ctx);
      kk_string_drop(name, _ctx);
      kk_string_t _x_x661;
      kk_define_string_literal(static, _s_x662, 21, "table_exists failed: ", _ctx)
      _x_x661 = kk_string_dup(_s_x662, _ctx); /*string*/
      _x_x660 = kk_std_core_types__lp__plus__plus__rp_(_x_x661, e, _ctx); /*string*/
    }
    else {
      kk_box_t _box_x144 = x_10144._cons.Right.right;
      bool found = kk_bool_unbox(_box_x144);
      kk_std_core_types__either_drop(x_10144, _ctx);
      kk_string_t _x_x663;
      kk_string_t _x_x664;
      kk_define_string_literal(static, _s_x665, 15, " table exists: ", _ctx)
      _x_x664 = kk_string_dup(_s_x665, _ctx); /*string*/
      _x_x663 = kk_std_core_types__lp__plus__plus__rp_(name, _x_x664, _ctx); /*string*/
      kk_string_t _x_x666;
      kk_box_t _x_x667 = kk_std_core_hnd__open_none1(kk_main_new_hc__print__table__check_fun668(_ctx), kk_bool_box(found), _ctx); /*10001*/
      _x_x666 = kk_string_unbox(_x_x667); /*string*/
      _x_x660 = kk_std_core_types__lp__plus__plus__rp_(_x_x663, _x_x666, _ctx); /*string*/
    }
    kk_std_core_console_printsln(_x_x660, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift_hc__run__demo_10118_fun682__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift_hc__run__demo_10118_fun682(kk_function_t _fself, kk_box_t _b_x155, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_hc__run__demo_10118_fun682(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_hc__run__demo_10118_fun682, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main__mlift_hc__run__demo_10118_fun682(kk_function_t _fself, kk_box_t _b_x155, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x683;
  kk_sqlite__db _match_x297 = kk_sqlite__db_unbox(_b_x155, KK_OWNED, _ctx); /*sqlite/db*/;
  {
    kk_integer_t _x_0 = _match_x297.h;
    _x_x683 = _x_0; /*int*/
  }
  return kk_integer_box(_x_x683, _ctx);
}


// lift anonymous function
struct kk_main__mlift_hc__run__demo_10118_fun686__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_unit_t kk_main__mlift_hc__run__demo_10118_fun686(kk_function_t _fself, kk_integer_t _y_x10093, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_hc__run__demo_10118_fun686(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_main__mlift_hc__run__demo_10118_fun686__t* _self = kk_function_alloc_as(struct kk_main__mlift_hc__run__demo_10118_fun686__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main__mlift_hc__run__demo_10118_fun686, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_main__mlift_hc__run__demo_10118_fun686(kk_function_t _fself, kk_integer_t _y_x10093, kk_context_t* _ctx) {
  struct kk_main__mlift_hc__run__demo_10118_fun686__t* _self = kk_function_as(struct kk_main__mlift_hc__run__demo_10118_fun686__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_unit_t ___7 = kk_Unit;
  kk_string_t _x_x687;
  kk_string_t _x_x688;
  kk_define_string_literal(static, _s_x689, 16, "Last insert id: ", _ctx)
  _x_x688 = kk_string_dup(_s_x689, _ctx); /*string*/
  kk_string_t _x_x690 = kk_std_core_int_show(_y_x10093, _ctx); /*string*/
  _x_x687 = kk_std_core_types__lp__plus__plus__rp_(_x_x688, _x_x690, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x687, _ctx);
  kk_string_t _x_x691;
  kk_define_string_literal(static, _s_x692, 5, "notes", _ctx)
  _x_x691 = kk_string_dup(_s_x692, _ctx); /*string*/
  kk_main_hc__print__table__check(db, _x_x691, _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_main__mlift_hc__run__demo_10118_fun694__t {
  struct kk_function_s _base;
  kk_function_t next_10148;
};
static kk_box_t kk_main__mlift_hc__run__demo_10118_fun694(kk_function_t _fself, kk_box_t _b_x160, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_hc__run__demo_10118_fun694(kk_function_t next_10148, kk_context_t* _ctx) {
  struct kk_main__mlift_hc__run__demo_10118_fun694__t* _self = kk_function_alloc_as(struct kk_main__mlift_hc__run__demo_10118_fun694__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main__mlift_hc__run__demo_10118_fun694, kk_context());
  _self->next_10148 = next_10148;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_main__mlift_hc__run__demo_10118_fun694(kk_function_t _fself, kk_box_t _b_x160, kk_context_t* _ctx) {
  struct kk_main__mlift_hc__run__demo_10118_fun694__t* _self = kk_function_as(struct kk_main__mlift_hc__run__demo_10118_fun694__t*, _fself, _ctx);
  kk_function_t next_10148 = _self->next_10148; /* (int) -> io () */
  kk_drop_match(_self, {kk_function_dup(next_10148, _ctx);}, {}, _ctx)
  kk_unit_t _x_x695 = kk_Unit;
  kk_integer_t _x_x696 = kk_integer_unbox(_b_x160, _ctx); /*int*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_integer_t, kk_context_t*), next_10148, (next_10148, _x_x696, _ctx), _ctx);
  return kk_unit_box(_x_x695);
}

kk_unit_t kk_main__mlift_hc__run__demo_10118(kk_sqlite__db db, kk_unit_t wild___5, kk_context_t* _ctx) { /* (db : sqlite/db, wild_@5 : ()) -> io () */ 
  kk_unit_t ___6 = kk_Unit;
  kk_string_t _x_x678 = kk_string_empty(); /*string*/
  kk_std_core_console_printsln(_x_x678, _ctx);
  kk_integer_t x_10147;
  kk_integer_t _x_x680;
  kk_box_t _x_x681;
  kk_box_t _x_x684;
  kk_sqlite__db _x_x685 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
  _x_x684 = kk_sqlite__db_box(_x_x685, _ctx); /*10000*/
  _x_x681 = kk_std_core_hnd__open_none1(kk_main__new_mlift_hc__run__demo_10118_fun682(_ctx), _x_x684, _ctx); /*10001*/
  _x_x680 = kk_integer_unbox(_x_x681, _ctx); /*int*/
  x_10147 = kk_sqlite__ffi_sqlite__last__insert__id__raw(_x_x680, _ctx); /*int*/
  kk_function_t next_10148 = kk_main__new_mlift_hc__run__demo_10118_fun686(db, _ctx); /*(int) -> io ()*/;
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_10147, _ctx);
    kk_box_t _x_x693 = kk_std_core_hnd_yield_extend(kk_main__new_mlift_hc__run__demo_10118_fun694(next_10148, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x693); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_integer_t, kk_context_t*), next_10148, (next_10148, x_10147, _ctx), _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift_hc__run__demo_10119_fun703__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_main__mlift_hc__run__demo_10119_fun703(kk_function_t _fself, kk_box_t _b_x163, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_hc__run__demo_10119_fun703(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_main__mlift_hc__run__demo_10119_fun703__t* _self = kk_function_alloc_as(struct kk_main__mlift_hc__run__demo_10119_fun703__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main__mlift_hc__run__demo_10119_fun703, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_main__mlift_hc__run__demo_10119_fun703(kk_function_t _fself, kk_box_t _b_x163, kk_context_t* _ctx) {
  struct kk_main__mlift_hc__run__demo_10119_fun703__t* _self = kk_function_as(struct kk_main__mlift_hc__run__demo_10119_fun703__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_unit_t wild___5_165 = kk_Unit;
  kk_unit_unbox(_b_x163);
  kk_unit_t _x_x704 = kk_Unit;
  kk_main__mlift_hc__run__demo_10118(db, wild___5_165, _ctx);
  return kk_unit_box(_x_x704);
}

kk_unit_t kk_main__mlift_hc__run__demo_10119(kk_sqlite__db db, kk_unit_t _c_x10091, kk_context_t* _ctx) { /* (db : sqlite/db, ()) -> () */ 
  kk_unit_t ___3 = kk_Unit;
  kk_string_t _x_x697 = kk_string_empty(); /*string*/
  kk_std_core_console_printsln(_x_x697, _ctx);
  kk_unit_t ___4 = kk_Unit;
  kk_string_t _x_x699;
  kk_define_string_literal(static, _s_x700, 25, "Filtered (LIKE \'%hica%\'):", _ctx)
  _x_x699 = kk_string_dup(_s_x700, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x699, _ctx);
  kk_unit_t x_10151 = kk_Unit;
  kk_sqlite__db _x_x701 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
  kk_main_hc__print__filtered(_x_x701, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x702 = kk_std_core_hnd_yield_extend(kk_main__new_mlift_hc__run__demo_10119_fun703(db, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x702); return kk_Unit;
  }
  {
    kk_main__mlift_hc__run__demo_10118(db, x_10151, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift_hc__run__demo_10120_fun710__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift_hc__run__demo_10120_fun710(kk_function_t _fself, kk_box_t _b_x170, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_hc__run__demo_10120_fun710(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_hc__run__demo_10120_fun710, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main__mlift_hc__run__demo_10120_fun710(kk_function_t _fself, kk_box_t _b_x170, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x711 = kk_Unit;
  kk_sqlite__queryresult _x_x712 = kk_sqlite__queryresult_unbox(_b_x170, KK_OWNED, _ctx); /*sqlite/queryresult*/
  kk_sqlite_hc__print__rows(_x_x712, _ctx);
  return kk_unit_box(_x_x711);
}


// lift anonymous function
struct kk_main__mlift_hc__run__demo_10120_fun714__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_main__mlift_hc__run__demo_10120_fun714(kk_function_t _fself, kk_box_t _b_x174, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_hc__run__demo_10120_fun714(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_main__mlift_hc__run__demo_10120_fun714__t* _self = kk_function_alloc_as(struct kk_main__mlift_hc__run__demo_10120_fun714__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main__mlift_hc__run__demo_10120_fun714, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_main__mlift_hc__run__demo_10120_fun714(kk_function_t _fself, kk_box_t _b_x174, kk_context_t* _ctx) {
  struct kk_main__mlift_hc__run__demo_10120_fun714__t* _self = kk_function_as(struct kk_main__mlift_hc__run__demo_10120_fun714__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_unit_t _c_x10091_176 = kk_Unit;
  kk_unit_unbox(_b_x174);
  kk_unit_t _x_x715 = kk_Unit;
  kk_main__mlift_hc__run__demo_10119(db, _c_x10091_176, _ctx);
  return kk_unit_box(_x_x715);
}

kk_unit_t kk_main__mlift_hc__run__demo_10120(kk_sqlite__db db, kk_std_core_types__either _y_x10090, kk_context_t* _ctx) { /* (db : sqlite/db, either<string,sqlite/queryresult>) -> io () */ 
  kk_unit_t x_10153 = kk_Unit;
  if (kk_std_core_types__is_Left(_y_x10090, _ctx)) {
    kk_box_t _box_x166 = _y_x10090._cons.Left.left;
    kk_string_t e = kk_string_unbox(_box_x166);
    kk_string_dup(e, _ctx);
    kk_std_core_types__either_drop(_y_x10090, _ctx);
    kk_string_t _x_x705;
    kk_string_t _x_x706;
    kk_define_string_literal(static, _s_x707, 14, "query failed: ", _ctx)
    _x_x706 = kk_string_dup(_s_x707, _ctx); /*string*/
    _x_x705 = kk_std_core_types__lp__plus__plus__rp_(_x_x706, e, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x705, _ctx);
  }
  else {
    kk_box_t _box_x167 = _y_x10090._cons.Right.right;
    kk_sqlite__queryresult r = kk_sqlite__queryresult_unbox(_box_x167, KK_BORROWED, _ctx);
    struct kk_sqlite_Queryresult* _con_x708 = kk_sqlite__as_Queryresult(r, _ctx);
    kk_sqlite__queryresult_dup(r, _ctx);
    kk_std_core_types__either_drop(_y_x10090, _ctx);
    kk_box_t _x_x709 = kk_std_core_hnd__open_none1(kk_main__new_mlift_hc__run__demo_10120_fun710(_ctx), kk_sqlite__queryresult_box(r, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x709);
  }
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x713 = kk_std_core_hnd_yield_extend(kk_main__new_mlift_hc__run__demo_10120_fun714(db, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x713); return kk_Unit;
  }
  {
    kk_main__mlift_hc__run__demo_10119(db, x_10153, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift_hc__run__demo_10121_fun731__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_main__mlift_hc__run__demo_10121_fun731(kk_function_t _fself, kk_box_t _b_x178, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_hc__run__demo_10121_fun731(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_main__mlift_hc__run__demo_10121_fun731__t* _self = kk_function_alloc_as(struct kk_main__mlift_hc__run__demo_10121_fun731__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main__mlift_hc__run__demo_10121_fun731, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_main__mlift_hc__run__demo_10121_fun731(kk_function_t _fself, kk_box_t _b_x178, kk_context_t* _ctx) {
  struct kk_main__mlift_hc__run__demo_10121_fun731__t* _self = kk_function_as(struct kk_main__mlift_hc__run__demo_10121_fun731__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_std_core_types__either _y_x10090_180 = kk_std_core_types__either_unbox(_b_x178, KK_OWNED, _ctx); /*either<string,sqlite/queryresult>*/;
  kk_unit_t _x_x732 = kk_Unit;
  kk_main__mlift_hc__run__demo_10120(db, _y_x10090_180, _ctx);
  return kk_unit_box(_x_x732);
}

kk_unit_t kk_main__mlift_hc__run__demo_10121(kk_sqlite__db db, kk_integer_t _y_x10089, kk_context_t* _ctx) { /* (db : sqlite/db, int) -> io () */ 
  kk_unit_t __ = kk_Unit;
  kk_string_t _x_x716;
  kk_string_t _x_x717;
  kk_string_t _x_x718;
  kk_define_string_literal(static, _s_x719, 9, "Inserted ", _ctx)
  _x_x718 = kk_string_dup(_s_x719, _ctx); /*string*/
  kk_string_t _x_x720 = kk_std_core_int_show(_y_x10089, _ctx); /*string*/
  _x_x717 = kk_std_core_types__lp__plus__plus__rp_(_x_x718, _x_x720, _ctx); /*string*/
  kk_string_t _x_x721;
  kk_define_string_literal(static, _s_x722, 7, " row(s)", _ctx)
  _x_x721 = kk_string_dup(_s_x722, _ctx); /*string*/
  _x_x716 = kk_std_core_types__lp__plus__plus__rp_(_x_x717, _x_x721, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x716, _ctx);
  kk_unit_t ___0 = kk_Unit;
  kk_string_t _x_x723 = kk_string_empty(); /*string*/
  kk_std_core_console_printsln(_x_x723, _ctx);
  kk_unit_t ___1 = kk_Unit;
  kk_string_t _x_x725;
  kk_define_string_literal(static, _s_x726, 9, "All rows:", _ctx)
  _x_x725 = kk_string_dup(_s_x726, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x725, _ctx);
  kk_std_core_types__either x_10155;
  kk_sqlite__db _x_x727 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
  kk_string_t _x_x728;
  kk_define_string_literal(static, _s_x729, 19, "SELECT * FROM notes", _ctx)
  _x_x728 = kk_string_dup(_s_x729, _ctx); /*string*/
  x_10155 = kk_sqlite_hc__sqlite__query__p(_x_x727, _x_x728, kk_std_core_types__new_Nil(_ctx), _ctx); /*either<string,sqlite/queryresult>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__either_drop(x_10155, _ctx);
    kk_box_t _x_x730 = kk_std_core_hnd_yield_extend(kk_main__new_mlift_hc__run__demo_10121_fun731(db, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x730); return kk_Unit;
  }
  {
    kk_main__mlift_hc__run__demo_10120(db, x_10155, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift_hc__run__demo_10122_fun735__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift_hc__run__demo_10122_fun735(kk_function_t _fself, kk_box_t _b_x183, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_hc__run__demo_10122_fun735(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_hc__run__demo_10122_fun735, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main__mlift_hc__run__demo_10122_fun735(kk_function_t _fself, kk_box_t _b_x183, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x736;
  kk_sqlite__db _match_x292 = kk_sqlite__db_unbox(_b_x183, KK_OWNED, _ctx); /*sqlite/db*/;
  {
    kk_integer_t _x = _match_x292.h;
    _x_x736 = _x; /*int*/
  }
  return kk_integer_box(_x_x736, _ctx);
}


// lift anonymous function
struct kk_main__mlift_hc__run__demo_10122_fun740__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_main__mlift_hc__run__demo_10122_fun740(kk_function_t _fself, kk_box_t _b_x188, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_hc__run__demo_10122_fun740(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_main__mlift_hc__run__demo_10122_fun740__t* _self = kk_function_alloc_as(struct kk_main__mlift_hc__run__demo_10122_fun740__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main__mlift_hc__run__demo_10122_fun740, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_main__mlift_hc__run__demo_10122_fun740(kk_function_t _fself, kk_box_t _b_x188, kk_context_t* _ctx) {
  struct kk_main__mlift_hc__run__demo_10122_fun740__t* _self = kk_function_as(struct kk_main__mlift_hc__run__demo_10122_fun740__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_integer_t _y_x10089_190 = kk_integer_unbox(_b_x188, _ctx); /*int*/;
  kk_unit_t _x_x741 = kk_Unit;
  kk_main__mlift_hc__run__demo_10121(db, _y_x10089_190, _ctx);
  return kk_unit_box(_x_x741);
}

kk_unit_t kk_main__mlift_hc__run__demo_10122(kk_sqlite__db db, kk_std_core_types__either _pat_1, kk_context_t* _ctx) { /* (db : sqlite/db, either<string,bool>) -> io () */ 
  kk_std_core_types__either_drop(_pat_1, _ctx);
  kk_integer_t x_10157;
  kk_integer_t _x_x733;
  kk_box_t _x_x734;
  kk_box_t _x_x737;
  kk_sqlite__db _x_x738 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
  _x_x737 = kk_sqlite__db_box(_x_x738, _ctx); /*10000*/
  _x_x734 = kk_std_core_hnd__open_none1(kk_main__new_mlift_hc__run__demo_10122_fun735(_ctx), _x_x737, _ctx); /*10001*/
  _x_x733 = kk_integer_unbox(_x_x734, _ctx); /*int*/
  x_10157 = kk_sqlite__ffi_sqlite__changes__raw(_x_x733, _ctx); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_10157, _ctx);
    kk_box_t _x_x739 = kk_std_core_hnd_yield_extend(kk_main__new_mlift_hc__run__demo_10122_fun740(db, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x739); return kk_Unit;
  }
  {
    kk_main__mlift_hc__run__demo_10121(db, x_10157, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift_hc__run__demo_10123_fun750__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_main__mlift_hc__run__demo_10123_fun750(kk_function_t _fself, kk_box_t _b_x196, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_hc__run__demo_10123_fun750(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_main__mlift_hc__run__demo_10123_fun750__t* _self = kk_function_alloc_as(struct kk_main__mlift_hc__run__demo_10123_fun750__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main__mlift_hc__run__demo_10123_fun750, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_main__mlift_hc__run__demo_10123_fun750(kk_function_t _fself, kk_box_t _b_x196, kk_context_t* _ctx) {
  struct kk_main__mlift_hc__run__demo_10123_fun750__t* _self = kk_function_as(struct kk_main__mlift_hc__run__demo_10123_fun750__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_std_core_types__either _pat_1_198 = kk_std_core_types__either_unbox(_b_x196, KK_OWNED, _ctx); /*either<string,bool>*/;
  kk_unit_t _x_x751 = kk_Unit;
  kk_main__mlift_hc__run__demo_10122(db, _pat_1_198, _ctx);
  return kk_unit_box(_x_x751);
}

kk_unit_t kk_main__mlift_hc__run__demo_10123(kk_sqlite__db db, kk_std_core_types__either _pat_0, kk_context_t* _ctx) { /* (db : sqlite/db, either<string,bool>) -> io () */ 
  kk_std_core_types__either_drop(_pat_0, _ctx);
  kk_std_core_types__either x_10159;
  kk_sqlite__db _x_x742 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
  kk_string_t _x_x743;
  kk_define_string_literal(static, _s_x744, 35, "INSERT INTO notes (body) VALUES (\?)", _ctx)
  _x_x743 = kk_string_dup(_s_x744, _ctx); /*string*/
  kk_std_core_types__list _x_x745;
  kk_box_t _x_x746;
  kk_string_t _x_x747;
  kk_define_string_literal(static, _s_x748, 30, "Moonbun stores all the things!", _ctx)
  _x_x747 = kk_string_dup(_s_x748, _ctx); /*string*/
  _x_x746 = kk_string_box(_x_x747); /*10021*/
  _x_x745 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x746, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  x_10159 = kk_sqlite_hc__sqlite__exec__p(_x_x742, _x_x743, _x_x745, _ctx); /*either<string,bool>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__either_drop(x_10159, _ctx);
    kk_box_t _x_x749 = kk_std_core_hnd_yield_extend(kk_main__new_mlift_hc__run__demo_10123_fun750(db, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x749); return kk_Unit;
  }
  {
    kk_main__mlift_hc__run__demo_10122(db, x_10159, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift_hc__run__demo_10124_fun760__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_main__mlift_hc__run__demo_10124_fun760(kk_function_t _fself, kk_box_t _b_x204, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_hc__run__demo_10124_fun760(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_main__mlift_hc__run__demo_10124_fun760__t* _self = kk_function_alloc_as(struct kk_main__mlift_hc__run__demo_10124_fun760__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main__mlift_hc__run__demo_10124_fun760, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_main__mlift_hc__run__demo_10124_fun760(kk_function_t _fself, kk_box_t _b_x204, kk_context_t* _ctx) {
  struct kk_main__mlift_hc__run__demo_10124_fun760__t* _self = kk_function_as(struct kk_main__mlift_hc__run__demo_10124_fun760__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_std_core_types__either _pat_0_1_206 = kk_std_core_types__either_unbox(_b_x204, KK_OWNED, _ctx); /*either<string,bool>*/;
  kk_unit_t _x_x761 = kk_Unit;
  kk_main__mlift_hc__run__demo_10123(db, _pat_0_1_206, _ctx);
  return kk_unit_box(_x_x761);
}

kk_unit_t kk_main__mlift_hc__run__demo_10124(kk_sqlite__db db, kk_std_core_types__either _pat, kk_context_t* _ctx) { /* (db : sqlite/db, either<string,bool>) -> io () */ 
  kk_std_core_types__either_drop(_pat, _ctx);
  kk_std_core_types__either x_10161;
  kk_sqlite__db _x_x752 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
  kk_string_t _x_x753;
  kk_define_string_literal(static, _s_x754, 35, "INSERT INTO notes (body) VALUES (\?)", _ctx)
  _x_x753 = kk_string_dup(_s_x754, _ctx); /*string*/
  kk_std_core_types__list _x_x755;
  kk_box_t _x_x756;
  kk_string_t _x_x757;
  kk_define_string_literal(static, _s_x758, 15, "Hello from hica", _ctx)
  _x_x757 = kk_string_dup(_s_x758, _ctx); /*string*/
  _x_x756 = kk_string_box(_x_x757); /*10021*/
  _x_x755 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x756, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  x_10161 = kk_sqlite_hc__sqlite__exec__p(_x_x752, _x_x753, _x_x755, _ctx); /*either<string,bool>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__either_drop(x_10161, _ctx);
    kk_box_t _x_x759 = kk_std_core_hnd_yield_extend(kk_main__new_mlift_hc__run__demo_10124_fun760(db, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x759); return kk_Unit;
  }
  {
    kk_main__mlift_hc__run__demo_10123(db, x_10161, _ctx); return kk_Unit;
  }
}
 
// .hc:24


// lift anonymous function
struct kk_main_hc__run__demo_fun766__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_main_hc__run__demo_fun766(kk_function_t _fself, kk_box_t _b_x208, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__run__demo_fun766(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_main_hc__run__demo_fun766__t* _self = kk_function_alloc_as(struct kk_main_hc__run__demo_fun766__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_hc__run__demo_fun766, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_main_hc__run__demo_fun766(kk_function_t _fself, kk_box_t _b_x208, kk_context_t* _ctx) {
  struct kk_main_hc__run__demo_fun766__t* _self = kk_function_as(struct kk_main_hc__run__demo_fun766__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_std_core_types__either _pat_1_258 = kk_std_core_types__either_unbox(_b_x208, KK_OWNED, _ctx); /*either<string,bool>*/;
  kk_unit_t _x_x767 = kk_Unit;
  kk_main__mlift_hc__run__demo_10124(db, _pat_1_258, _ctx);
  return kk_unit_box(_x_x767);
}


// lift anonymous function
struct kk_main_hc__run__demo_fun776__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_main_hc__run__demo_fun776(kk_function_t _fself, kk_box_t _b_x214, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__run__demo_fun776(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_main_hc__run__demo_fun776__t* _self = kk_function_alloc_as(struct kk_main_hc__run__demo_fun776__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_hc__run__demo_fun776, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_main_hc__run__demo_fun776(kk_function_t _fself, kk_box_t _b_x214, kk_context_t* _ctx) {
  struct kk_main_hc__run__demo_fun776__t* _self = kk_function_as(struct kk_main_hc__run__demo_fun776__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_std_core_types__either _pat_0_1_259 = kk_std_core_types__either_unbox(_b_x214, KK_OWNED, _ctx); /*either<string,bool>*/;
  kk_unit_t _x_x777 = kk_Unit;
  kk_main__mlift_hc__run__demo_10123(db, _pat_0_1_259, _ctx);
  return kk_unit_box(_x_x777);
}


// lift anonymous function
struct kk_main_hc__run__demo_fun786__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_main_hc__run__demo_fun786(kk_function_t _fself, kk_box_t _b_x220, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__run__demo_fun786(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_main_hc__run__demo_fun786__t* _self = kk_function_alloc_as(struct kk_main_hc__run__demo_fun786__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_hc__run__demo_fun786, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_main_hc__run__demo_fun786(kk_function_t _fself, kk_box_t _b_x220, kk_context_t* _ctx) {
  struct kk_main_hc__run__demo_fun786__t* _self = kk_function_as(struct kk_main_hc__run__demo_fun786__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_std_core_types__either _pat_1_0_260 = kk_std_core_types__either_unbox(_b_x220, KK_OWNED, _ctx); /*either<string,bool>*/;
  kk_unit_t _x_x787 = kk_Unit;
  kk_main__mlift_hc__run__demo_10122(db, _pat_1_0_260, _ctx);
  return kk_unit_box(_x_x787);
}


// lift anonymous function
struct kk_main_hc__run__demo_fun790__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_hc__run__demo_fun790(kk_function_t _fself, kk_box_t _b_x223, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__run__demo_fun790(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hc__run__demo_fun790, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main_hc__run__demo_fun790(kk_function_t _fself, kk_box_t _b_x223, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x791;
  kk_sqlite__db _match_x288 = kk_sqlite__db_unbox(_b_x223, KK_OWNED, _ctx); /*sqlite/db*/;
  {
    kk_integer_t _x = _match_x288.h;
    _x_x791 = _x; /*int*/
  }
  return kk_integer_box(_x_x791, _ctx);
}


// lift anonymous function
struct kk_main_hc__run__demo_fun795__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_main_hc__run__demo_fun795(kk_function_t _fself, kk_box_t _b_x228, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__run__demo_fun795(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_main_hc__run__demo_fun795__t* _self = kk_function_alloc_as(struct kk_main_hc__run__demo_fun795__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_hc__run__demo_fun795, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_main_hc__run__demo_fun795(kk_function_t _fself, kk_box_t _b_x228, kk_context_t* _ctx) {
  struct kk_main_hc__run__demo_fun795__t* _self = kk_function_as(struct kk_main_hc__run__demo_fun795__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_integer_t _y_x10089_261 = kk_integer_unbox(_b_x228, _ctx); /*int*/;
  kk_unit_t _x_x796 = kk_Unit;
  kk_main__mlift_hc__run__demo_10121(db, _y_x10089_261, _ctx);
  return kk_unit_box(_x_x796);
}


// lift anonymous function
struct kk_main_hc__run__demo_fun812__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_main_hc__run__demo_fun812(kk_function_t _fself, kk_box_t _b_x230, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__run__demo_fun812(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_main_hc__run__demo_fun812__t* _self = kk_function_alloc_as(struct kk_main_hc__run__demo_fun812__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_hc__run__demo_fun812, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_main_hc__run__demo_fun812(kk_function_t _fself, kk_box_t _b_x230, kk_context_t* _ctx) {
  struct kk_main_hc__run__demo_fun812__t* _self = kk_function_as(struct kk_main_hc__run__demo_fun812__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_std_core_types__either _y_x10090_262 = kk_std_core_types__either_unbox(_b_x230, KK_OWNED, _ctx); /*either<string,sqlite/queryresult>*/;
  kk_unit_t _x_x813 = kk_Unit;
  kk_main__mlift_hc__run__demo_10120(db, _y_x10090_262, _ctx);
  return kk_unit_box(_x_x813);
}


// lift anonymous function
struct kk_main_hc__run__demo_fun819__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_hc__run__demo_fun819(kk_function_t _fself, kk_box_t _b_x235, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__run__demo_fun819(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hc__run__demo_fun819, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main_hc__run__demo_fun819(kk_function_t _fself, kk_box_t _b_x235, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x820 = kk_Unit;
  kk_sqlite__queryresult _x_x821 = kk_sqlite__queryresult_unbox(_b_x235, KK_OWNED, _ctx); /*sqlite/queryresult*/
  kk_sqlite_hc__print__rows(_x_x821, _ctx);
  return kk_unit_box(_x_x820);
}


// lift anonymous function
struct kk_main_hc__run__demo_fun823__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_main_hc__run__demo_fun823(kk_function_t _fself, kk_box_t _b_x239, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__run__demo_fun823(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_main_hc__run__demo_fun823__t* _self = kk_function_alloc_as(struct kk_main_hc__run__demo_fun823__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_hc__run__demo_fun823, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_main_hc__run__demo_fun823(kk_function_t _fself, kk_box_t _b_x239, kk_context_t* _ctx) {
  struct kk_main_hc__run__demo_fun823__t* _self = kk_function_as(struct kk_main_hc__run__demo_fun823__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_unit_t _c_x10091_263 = kk_Unit;
  kk_unit_unbox(_b_x239);
  kk_unit_t _x_x824 = kk_Unit;
  kk_main__mlift_hc__run__demo_10119(db, _c_x10091_263, _ctx);
  return kk_unit_box(_x_x824);
}


// lift anonymous function
struct kk_main_hc__run__demo_fun831__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_main_hc__run__demo_fun831(kk_function_t _fself, kk_box_t _b_x241, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__run__demo_fun831(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_main_hc__run__demo_fun831__t* _self = kk_function_alloc_as(struct kk_main_hc__run__demo_fun831__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_hc__run__demo_fun831, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_main_hc__run__demo_fun831(kk_function_t _fself, kk_box_t _b_x241, kk_context_t* _ctx) {
  struct kk_main_hc__run__demo_fun831__t* _self = kk_function_as(struct kk_main_hc__run__demo_fun831__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_unit_t wild___5_264 = kk_Unit;
  kk_unit_unbox(_b_x241);
  kk_unit_t _x_x832 = kk_Unit;
  kk_main__mlift_hc__run__demo_10118(db, wild___5_264, _ctx);
  return kk_unit_box(_x_x832);
}


// lift anonymous function
struct kk_main_hc__run__demo_fun837__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_hc__run__demo_fun837(kk_function_t _fself, kk_box_t _b_x244, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__run__demo_fun837(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_hc__run__demo_fun837, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main_hc__run__demo_fun837(kk_function_t _fself, kk_box_t _b_x244, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x838;
  kk_sqlite__db _match_x287 = kk_sqlite__db_unbox(_b_x244, KK_OWNED, _ctx); /*sqlite/db*/;
  {
    kk_integer_t _x_0 = _match_x287.h;
    _x_x838 = _x_0; /*int*/
  }
  return kk_integer_box(_x_x838, _ctx);
}


// lift anonymous function
struct kk_main_hc__run__demo_fun842__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_main_hc__run__demo_fun842(kk_function_t _fself, kk_box_t _b_x249, kk_context_t* _ctx);
static kk_function_t kk_main_new_hc__run__demo_fun842(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_main_hc__run__demo_fun842__t* _self = kk_function_alloc_as(struct kk_main_hc__run__demo_fun842__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_hc__run__demo_fun842, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_main_hc__run__demo_fun842(kk_function_t _fself, kk_box_t _b_x249, kk_context_t* _ctx) {
  struct kk_main_hc__run__demo_fun842__t* _self = kk_function_as(struct kk_main_hc__run__demo_fun842__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_integer_t _y_x10093_265 = kk_integer_unbox(_b_x249, _ctx); /*int*/;
  kk_unit_t ___7 = kk_Unit;
  kk_string_t _x_x843;
  kk_string_t _x_x844;
  kk_define_string_literal(static, _s_x845, 16, "Last insert id: ", _ctx)
  _x_x844 = kk_string_dup(_s_x845, _ctx); /*string*/
  kk_string_t _x_x846 = kk_std_core_int_show(_y_x10093_265, _ctx); /*string*/
  _x_x843 = kk_std_core_types__lp__plus__plus__rp_(_x_x844, _x_x846, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x843, _ctx);
  kk_unit_t _x_x847 = kk_Unit;
  kk_string_t _x_x848;
  kk_define_string_literal(static, _s_x849, 5, "notes", _ctx)
  _x_x848 = kk_string_dup(_s_x849, _ctx); /*string*/
  kk_main_hc__print__table__check(db, _x_x848, _ctx);
  return kk_unit_box(_x_x847);
}

kk_unit_t kk_main_hc__run__demo(kk_sqlite__db db, kk_context_t* _ctx) { /* (db : sqlite/db) -> io () */ 
  kk_std_core_types__either x_10163;
  kk_sqlite__db _x_x762 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
  kk_string_t _x_x763;
  kk_define_string_literal(static, _s_x764, 54, "CREATE TABLE notes (id INTEGER PRIMARY KEY, body TEXT)", _ctx)
  _x_x763 = kk_string_dup(_s_x764, _ctx); /*string*/
  x_10163 = kk_sqlite_hc__sqlite__exec(_x_x762, _x_x763, _ctx); /*either<string,bool>*/
  kk_std_core_types__either_drop(x_10163, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x765 = kk_std_core_hnd_yield_extend(kk_main_new_hc__run__demo_fun766(db, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x765); return kk_Unit;
  }
  {
    kk_std_core_types__either x_0_10166;
    kk_sqlite__db _x_x768 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
    kk_string_t _x_x769;
    kk_define_string_literal(static, _s_x770, 35, "INSERT INTO notes (body) VALUES (\?)", _ctx)
    _x_x769 = kk_string_dup(_s_x770, _ctx); /*string*/
    kk_std_core_types__list _x_x771;
    kk_box_t _x_x772;
    kk_string_t _x_x773;
    kk_define_string_literal(static, _s_x774, 15, "Hello from hica", _ctx)
    _x_x773 = kk_string_dup(_s_x774, _ctx); /*string*/
    _x_x772 = kk_string_box(_x_x773); /*10021*/
    _x_x771 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x772, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    x_0_10166 = kk_sqlite_hc__sqlite__exec__p(_x_x768, _x_x769, _x_x771, _ctx); /*either<string,bool>*/
    kk_std_core_types__either_drop(x_0_10166, _ctx);
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x775 = kk_std_core_hnd_yield_extend(kk_main_new_hc__run__demo_fun776(db, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x775); return kk_Unit;
    }
    {
      kk_std_core_types__either x_1_10169;
      kk_sqlite__db _x_x778 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
      kk_string_t _x_x779;
      kk_define_string_literal(static, _s_x780, 35, "INSERT INTO notes (body) VALUES (\?)", _ctx)
      _x_x779 = kk_string_dup(_s_x780, _ctx); /*string*/
      kk_std_core_types__list _x_x781;
      kk_box_t _x_x782;
      kk_string_t _x_x783;
      kk_define_string_literal(static, _s_x784, 30, "Moonbun stores all the things!", _ctx)
      _x_x783 = kk_string_dup(_s_x784, _ctx); /*string*/
      _x_x782 = kk_string_box(_x_x783); /*10021*/
      _x_x781 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x782, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
      x_1_10169 = kk_sqlite_hc__sqlite__exec__p(_x_x778, _x_x779, _x_x781, _ctx); /*either<string,bool>*/
      kk_std_core_types__either_drop(x_1_10169, _ctx);
      if (kk_yielding(kk_context())) {
        kk_box_t _x_x785 = kk_std_core_hnd_yield_extend(kk_main_new_hc__run__demo_fun786(db, _ctx), _ctx); /*10001*/
        kk_unit_unbox(_x_x785); return kk_Unit;
      }
      {
        kk_integer_t x_2_10172;
        kk_integer_t _x_x788;
        kk_box_t _x_x789;
        kk_box_t _x_x792;
        kk_sqlite__db _x_x793 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
        _x_x792 = kk_sqlite__db_box(_x_x793, _ctx); /*10000*/
        _x_x789 = kk_std_core_hnd__open_none1(kk_main_new_hc__run__demo_fun790(_ctx), _x_x792, _ctx); /*10001*/
        _x_x788 = kk_integer_unbox(_x_x789, _ctx); /*int*/
        x_2_10172 = kk_sqlite__ffi_sqlite__changes__raw(_x_x788, _ctx); /*int*/
        if (kk_yielding(kk_context())) {
          kk_integer_drop(x_2_10172, _ctx);
          kk_box_t _x_x794 = kk_std_core_hnd_yield_extend(kk_main_new_hc__run__demo_fun795(db, _ctx), _ctx); /*10001*/
          kk_unit_unbox(_x_x794); return kk_Unit;
        }
        {
          kk_unit_t __ = kk_Unit;
          kk_string_t _x_x797;
          kk_string_t _x_x798;
          kk_string_t _x_x799;
          kk_define_string_literal(static, _s_x800, 9, "Inserted ", _ctx)
          _x_x799 = kk_string_dup(_s_x800, _ctx); /*string*/
          kk_string_t _x_x801 = kk_std_core_int_show(x_2_10172, _ctx); /*string*/
          _x_x798 = kk_std_core_types__lp__plus__plus__rp_(_x_x799, _x_x801, _ctx); /*string*/
          kk_string_t _x_x802;
          kk_define_string_literal(static, _s_x803, 7, " row(s)", _ctx)
          _x_x802 = kk_string_dup(_s_x803, _ctx); /*string*/
          _x_x797 = kk_std_core_types__lp__plus__plus__rp_(_x_x798, _x_x802, _ctx); /*string*/
          kk_std_core_console_printsln(_x_x797, _ctx);
          kk_unit_t ___0 = kk_Unit;
          kk_string_t _x_x804 = kk_string_empty(); /*string*/
          kk_std_core_console_printsln(_x_x804, _ctx);
          kk_unit_t ___1 = kk_Unit;
          kk_string_t _x_x806;
          kk_define_string_literal(static, _s_x807, 9, "All rows:", _ctx)
          _x_x806 = kk_string_dup(_s_x807, _ctx); /*string*/
          kk_std_core_console_printsln(_x_x806, _ctx);
          kk_std_core_types__either x_3_10175;
          kk_sqlite__db _x_x808 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
          kk_string_t _x_x809;
          kk_define_string_literal(static, _s_x810, 19, "SELECT * FROM notes", _ctx)
          _x_x809 = kk_string_dup(_s_x810, _ctx); /*string*/
          x_3_10175 = kk_sqlite_hc__sqlite__query__p(_x_x808, _x_x809, kk_std_core_types__new_Nil(_ctx), _ctx); /*either<string,sqlite/queryresult>*/
          if (kk_yielding(kk_context())) {
            kk_std_core_types__either_drop(x_3_10175, _ctx);
            kk_box_t _x_x811 = kk_std_core_hnd_yield_extend(kk_main_new_hc__run__demo_fun812(db, _ctx), _ctx); /*10001*/
            kk_unit_unbox(_x_x811); return kk_Unit;
          }
          {
            kk_unit_t x_4_10178 = kk_Unit;
            if (kk_std_core_types__is_Left(x_3_10175, _ctx)) {
              kk_box_t _box_x231 = x_3_10175._cons.Left.left;
              kk_string_t e = kk_string_unbox(_box_x231);
              kk_string_dup(e, _ctx);
              kk_std_core_types__either_drop(x_3_10175, _ctx);
              kk_string_t _x_x814;
              kk_string_t _x_x815;
              kk_define_string_literal(static, _s_x816, 14, "query failed: ", _ctx)
              _x_x815 = kk_string_dup(_s_x816, _ctx); /*string*/
              _x_x814 = kk_std_core_types__lp__plus__plus__rp_(_x_x815, e, _ctx); /*string*/
              kk_std_core_console_printsln(_x_x814, _ctx);
            }
            else {
              kk_box_t _box_x232 = x_3_10175._cons.Right.right;
              kk_sqlite__queryresult r = kk_sqlite__queryresult_unbox(_box_x232, KK_BORROWED, _ctx);
              struct kk_sqlite_Queryresult* _con_x817 = kk_sqlite__as_Queryresult(r, _ctx);
              kk_sqlite__queryresult_dup(r, _ctx);
              kk_std_core_types__either_drop(x_3_10175, _ctx);
              kk_box_t _x_x818 = kk_std_core_hnd__open_none1(kk_main_new_hc__run__demo_fun819(_ctx), kk_sqlite__queryresult_box(r, _ctx), _ctx); /*10001*/
              kk_unit_unbox(_x_x818);
            }
            if (kk_yielding(kk_context())) {
              kk_box_t _x_x822 = kk_std_core_hnd_yield_extend(kk_main_new_hc__run__demo_fun823(db, _ctx), _ctx); /*10001*/
              kk_unit_unbox(_x_x822); return kk_Unit;
            }
            {
              kk_unit_t ___3 = kk_Unit;
              kk_string_t _x_x825 = kk_string_empty(); /*string*/
              kk_std_core_console_printsln(_x_x825, _ctx);
              kk_unit_t ___4 = kk_Unit;
              kk_string_t _x_x827;
              kk_define_string_literal(static, _s_x828, 25, "Filtered (LIKE \'%hica%\'):", _ctx)
              _x_x827 = kk_string_dup(_s_x828, _ctx); /*string*/
              kk_std_core_console_printsln(_x_x827, _ctx);
              kk_unit_t x_5_10181 = kk_Unit;
              kk_sqlite__db _x_x829 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
              kk_main_hc__print__filtered(_x_x829, _ctx);
              if (kk_yielding(kk_context())) {
                kk_box_t _x_x830 = kk_std_core_hnd_yield_extend(kk_main_new_hc__run__demo_fun831(db, _ctx), _ctx); /*10001*/
                kk_unit_unbox(_x_x830); return kk_Unit;
              }
              {
                kk_unit_t ___6 = kk_Unit;
                kk_string_t _x_x833 = kk_string_empty(); /*string*/
                kk_std_core_console_printsln(_x_x833, _ctx);
                kk_integer_t x_6_10184;
                kk_integer_t _x_x835;
                kk_box_t _x_x836;
                kk_box_t _x_x839;
                kk_sqlite__db _x_x840 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
                _x_x839 = kk_sqlite__db_box(_x_x840, _ctx); /*10000*/
                _x_x836 = kk_std_core_hnd__open_none1(kk_main_new_hc__run__demo_fun837(_ctx), _x_x839, _ctx); /*10001*/
                _x_x835 = kk_integer_unbox(_x_x836, _ctx); /*int*/
                x_6_10184 = kk_sqlite__ffi_sqlite__last__insert__id__raw(_x_x835, _ctx); /*int*/
                if (kk_yielding(kk_context())) {
                  kk_integer_drop(x_6_10184, _ctx);
                  kk_box_t _x_x841 = kk_std_core_hnd_yield_extend(kk_main_new_hc__run__demo_fun842(db, _ctx), _ctx); /*10001*/
                  kk_unit_unbox(_x_x841); return kk_Unit;
                }
                {
                  kk_unit_t ___7_0 = kk_Unit;
                  kk_string_t _x_x850;
                  kk_string_t _x_x851;
                  kk_define_string_literal(static, _s_x852, 16, "Last insert id: ", _ctx)
                  _x_x851 = kk_string_dup(_s_x852, _ctx); /*string*/
                  kk_string_t _x_x853 = kk_std_core_int_show(x_6_10184, _ctx); /*string*/
                  _x_x850 = kk_std_core_types__lp__plus__plus__rp_(_x_x851, _x_x853, _ctx); /*string*/
                  kk_std_core_console_printsln(_x_x850, _ctx);
                  kk_string_t _x_x854;
                  kk_define_string_literal(static, _s_x855, 5, "notes", _ctx)
                  _x_x854 = kk_string_dup(_s_x855, _ctx); /*string*/
                  kk_main_hc__print__table__check(db, _x_x854, _ctx); return kk_Unit;
                }
              }
            }
          }
        }
      }
    }
  }
}
 
// monadic lift

kk_unit_t kk_main__mlift_main_10125(kk_std_core_types__either _y_x10095, kk_context_t* _ctx) { /* (either<string,bool>) -> io () */ 
  kk_string_t _x_x856;
  if (kk_std_core_types__is_Left(_y_x10095, _ctx)) {
    kk_box_t _box_x266 = _y_x10095._cons.Left.left;
    kk_string_t e = kk_string_unbox(_box_x266);
    kk_string_dup(e, _ctx);
    kk_std_core_types__either_drop(_y_x10095, _ctx);
    kk_string_t _x_x857;
    kk_define_string_literal(static, _s_x858, 7, "Error: ", _ctx)
    _x_x857 = kk_string_dup(_s_x858, _ctx); /*string*/
    _x_x856 = kk_std_core_types__lp__plus__plus__rp_(_x_x857, e, _ctx); /*string*/
  }
  else {
    kk_box_t _box_x267 = _y_x10095._cons.Right.right;
    kk_std_core_types__either_drop(_y_x10095, _ctx);
    kk_define_string_literal(static, _s_x859, 5, "Done!", _ctx)
    _x_x856 = kk_string_dup(_s_x859, _ctx); /*string*/
  }
  kk_std_core_console_printsln(_x_x856, _ctx); return kk_Unit;
}
 
// .hc:40


// lift anonymous function
struct kk_main_main_fun866__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun866(kk_function_t _fself, kk_sqlite__db _b_x270, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun866(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun866, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main_main_fun866(kk_function_t _fself, kk_sqlite__db _b_x270, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x867 = kk_Unit;
  kk_main_hc__run__demo(_b_x270, _ctx);
  return kk_unit_box(_x_x867);
}


// lift anonymous function
struct kk_main_main_fun869__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun869(kk_function_t _fself, kk_box_t _b_x274, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun869(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun869, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_main_main_fun869(kk_function_t _fself, kk_box_t _b_x274, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x870 = kk_Unit;
  kk_std_core_types__either _x_x871 = kk_std_core_types__either_unbox(_b_x274, KK_OWNED, _ctx); /*either<string,bool>*/
  kk_main__mlift_main_10125(_x_x871, _ctx);
  return kk_unit_box(_x_x870);
}

kk_unit_t kk_main_main(kk_context_t* _ctx) { /* () -> io () */ 
  kk_unit_t __ = kk_Unit;
  kk_string_t _x_x860;
  kk_define_string_literal(static, _s_x861, 27, "=== sqlite library demo ===", _ctx)
  _x_x860 = kk_string_dup(_s_x861, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x860, _ctx);
  kk_unit_t ___0 = kk_Unit;
  kk_string_t _x_x862 = kk_string_empty(); /*string*/
  kk_std_core_console_printsln(_x_x862, _ctx);
  kk_std_core_types__either x_10189;
  kk_string_t _x_x864;
  kk_define_string_literal(static, _s_x865, 8, ":memory:", _ctx)
  _x_x864 = kk_string_dup(_s_x865, _ctx); /*string*/
  x_10189 = kk_sqlite_hc__with__sqlite(_x_x864, kk_main_new_main_fun866(_ctx), _ctx); /*either<string,bool>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__either_drop(x_10189, _ctx);
    kk_box_t _x_x868 = kk_std_core_hnd_yield_extend(kk_main_new_main_fun869(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x868); return kk_Unit;
  }
  {
    kk_string_t _x_x872;
    if (kk_std_core_types__is_Left(x_10189, _ctx)) {
      kk_box_t _box_x275 = x_10189._cons.Left.left;
      kk_string_t e = kk_string_unbox(_box_x275);
      kk_string_dup(e, _ctx);
      kk_std_core_types__either_drop(x_10189, _ctx);
      kk_string_t _x_x873;
      kk_define_string_literal(static, _s_x874, 7, "Error: ", _ctx)
      _x_x873 = kk_string_dup(_s_x874, _ctx); /*string*/
      _x_x872 = kk_std_core_types__lp__plus__plus__rp_(_x_x873, e, _ctx); /*string*/
    }
    else {
      kk_box_t _box_x276 = x_10189._cons.Right.right;
      kk_std_core_types__either_drop(x_10189, _ctx);
      kk_define_string_literal(static, _s_x875, 5, "Done!", _ctx)
      _x_x872 = kk_string_dup(_s_x875, _ctx); /*string*/
    }
    kk_std_core_console_printsln(_x_x872, _ctx); return kk_Unit;
  }
}

// initialization
void kk_main__init(kk_context_t* _ctx){
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
  kk_sqlite__init(_ctx);
  kk_sqlite__ffi__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_main__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_sqlite__ffi__done(_ctx);
  kk_sqlite__done(_ctx);
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
