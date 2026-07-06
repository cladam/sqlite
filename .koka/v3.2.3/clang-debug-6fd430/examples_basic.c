// Koka generated module: examples/basic, koka version: 3.2.3, platform: 64-bit
#include "examples_basic.h"


// lift anonymous function
struct kk_examples_basic_hc_assert_fun486__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc_assert_fun486(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc_assert_fun486(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc_assert_fun486, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc_assert_fun486(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x487;
  bool b_0_9 = kk_bool_unbox(_b_x2); /*bool*/;
  if (b_0_9) {
    _x_x487 = false; /*bool*/
  }
  else {
    _x_x487 = true; /*bool*/
  }
  return kk_bool_box(_x_x487);
}

kk_unit_t kk_examples_basic_hc_assert(bool b, kk_context_t* _ctx) { /* (b : bool) -> exn () */ 
  bool _match_x477;
  kk_box_t _x_x485 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc_assert_fun486(_ctx), kk_bool_box(b), _ctx); /*10001*/
  _match_x477 = kk_bool_unbox(_x_x485); /*bool*/
  if (_match_x477) {
    kk_box_t _x_x488;
    kk_string_t _x_x489;
    kk_define_string_literal(static, _s_x490, 16, "assertion failed", _ctx)
    _x_x489 = kk_string_dup(_s_x490, _ctx); /*string*/
    _x_x488 = kk_std_core_exn_throw(_x_x489, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    kk_unit_unbox(_x_x488); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}


// lift anonymous function
struct kk_examples_basic_hc_show_maybe_fun498__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc_show_maybe_fun498(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc_show_maybe_fun498(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc_show_maybe_fun498, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc_show_maybe_fun498(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _y_x10074_13 = kk_string_unbox(_b_x11); /*string*/;
  kk_string_t _x_x499;
  kk_string_t _x_x500;
  kk_define_string_literal(static, _s_x501, 5, "Some(", _ctx)
  _x_x500 = kk_string_dup(_s_x501, _ctx); /*string*/
  kk_string_t _x_x502;
  kk_string_t _x_x503;
  kk_define_string_literal(static, _s_x504, 1, ")", _ctx)
  _x_x503 = kk_string_dup(_s_x504, _ctx); /*string*/
  _x_x502 = kk_std_core_types__lp__plus__plus__rp_(_y_x10074_13, _x_x503, _ctx); /*string*/
  _x_x499 = kk_std_core_types__lp__plus__plus__rp_(_x_x500, _x_x502, _ctx); /*string*/
  return kk_string_box(_x_x499);
}

kk_string_t kk_examples_basic_hc_show_maybe(kk_std_core_types__maybe m, kk_function_t show_a, kk_context_t* _ctx) { /* forall<a,e> (m : maybe<a>, show-a : (a) -> e string) -> e string */ 
  if (kk_std_core_types__is_Nothing(m, _ctx)) {
    kk_function_drop(show_a, _ctx);
    kk_define_string_literal(static, _s_x496, 4, "None", _ctx)
    return kk_string_dup(_s_x496, _ctx);
  }
  {
    kk_box_t x = m._cons.Just.value;
    kk_string_t x_0_10135 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), show_a, (show_a, x, _ctx), _ctx); /*string*/;
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_0_10135, _ctx);
      kk_box_t _x_x497 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc_show_maybe_fun498(_ctx), _ctx); /*10001*/
      return kk_string_unbox(_x_x497);
    }
    {
      kk_string_t _x_x505;
      kk_define_string_literal(static, _s_x506, 5, "Some(", _ctx)
      _x_x505 = kk_string_dup(_s_x506, _ctx); /*string*/
      kk_string_t _x_x507;
      kk_string_t _x_x508;
      kk_define_string_literal(static, _s_x509, 1, ")", _ctx)
      _x_x508 = kk_string_dup(_s_x509, _ctx); /*string*/
      _x_x507 = kk_std_core_types__lp__plus__plus__rp_(x_0_10135, _x_x508, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x505, _x_x507, _ctx);
    }
  }
}


// lift anonymous function
struct kk_examples_basic_hc_show_result_fun521__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc_show_result_fun521(kk_function_t _fself, kk_box_t _b_x15, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc_show_result_fun521(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc_show_result_fun521, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc_show_result_fun521(kk_function_t _fself, kk_box_t _b_x15, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _y_x10076_20 = kk_string_unbox(_b_x15); /*string*/;
  kk_string_t _x_x522;
  kk_string_t _x_x523;
  kk_define_string_literal(static, _s_x524, 3, "Ok(", _ctx)
  _x_x523 = kk_string_dup(_s_x524, _ctx); /*string*/
  kk_string_t _x_x525;
  kk_string_t _x_x526;
  kk_define_string_literal(static, _s_x527, 1, ")", _ctx)
  _x_x526 = kk_string_dup(_s_x527, _ctx); /*string*/
  _x_x525 = kk_std_core_types__lp__plus__plus__rp_(_y_x10076_20, _x_x526, _ctx); /*string*/
  _x_x522 = kk_std_core_types__lp__plus__plus__rp_(_x_x523, _x_x525, _ctx); /*string*/
  return kk_string_box(_x_x522);
}


// lift anonymous function
struct kk_examples_basic_hc_show_result_fun534__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc_show_result_fun534(kk_function_t _fself, kk_box_t _b_x17, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc_show_result_fun534(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc_show_result_fun534, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc_show_result_fun534(kk_function_t _fself, kk_box_t _b_x17, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _y_x10077_21 = kk_string_unbox(_b_x17); /*string*/;
  kk_string_t _x_x535;
  kk_string_t _x_x536;
  kk_define_string_literal(static, _s_x537, 4, "Err(", _ctx)
  _x_x536 = kk_string_dup(_s_x537, _ctx); /*string*/
  kk_string_t _x_x538;
  kk_string_t _x_x539;
  kk_define_string_literal(static, _s_x540, 1, ")", _ctx)
  _x_x539 = kk_string_dup(_s_x540, _ctx); /*string*/
  _x_x538 = kk_std_core_types__lp__plus__plus__rp_(_y_x10077_21, _x_x539, _ctx); /*string*/
  _x_x535 = kk_std_core_types__lp__plus__plus__rp_(_x_x536, _x_x538, _ctx); /*string*/
  return kk_string_box(_x_x535);
}

kk_string_t kk_examples_basic_hc_show_result(kk_std_core_types__either r, kk_function_t show_a, kk_function_t show_e, kk_context_t* _ctx) { /* forall<a,b,e> (r : either<a,b>, show-a : (b) -> e string, show-e : (a) -> e string) -> e string */ 
  if (kk_std_core_types__is_Right(r, _ctx)) {
    kk_box_t x = r._cons.Right.right;
    kk_function_drop(show_e, _ctx);
    kk_string_t x_0_10139 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), show_a, (show_a, x, _ctx), _ctx); /*string*/;
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_0_10139, _ctx);
      kk_box_t _x_x520 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc_show_result_fun521(_ctx), _ctx); /*10001*/
      return kk_string_unbox(_x_x520);
    }
    {
      kk_string_t _x_x528;
      kk_define_string_literal(static, _s_x529, 3, "Ok(", _ctx)
      _x_x528 = kk_string_dup(_s_x529, _ctx); /*string*/
      kk_string_t _x_x530;
      kk_string_t _x_x531;
      kk_define_string_literal(static, _s_x532, 1, ")", _ctx)
      _x_x531 = kk_string_dup(_s_x532, _ctx); /*string*/
      _x_x530 = kk_std_core_types__lp__plus__plus__rp_(x_0_10139, _x_x531, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x528, _x_x530, _ctx);
    }
  }
  {
    kk_box_t e = r._cons.Left.left;
    kk_function_drop(show_a, _ctx);
    kk_string_t x_1_10143 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), show_e, (show_e, e, _ctx), _ctx); /*string*/;
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_1_10143, _ctx);
      kk_box_t _x_x533 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc_show_result_fun534(_ctx), _ctx); /*10001*/
      return kk_string_unbox(_x_x533);
    }
    {
      kk_string_t _x_x541;
      kk_define_string_literal(static, _s_x542, 4, "Err(", _ctx)
      _x_x541 = kk_string_dup(_s_x542, _ctx); /*string*/
      kk_string_t _x_x543;
      kk_string_t _x_x544;
      kk_define_string_literal(static, _s_x545, 1, ")", _ctx)
      _x_x544 = kk_string_dup(_s_x545, _ctx); /*string*/
      _x_x543 = kk_std_core_types__lp__plus__plus__rp_(x_1_10143, _x_x544, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x541, _x_x543, _ctx);
    }
  }
}

kk_integer_t kk_examples_basic_hc__clamp(kk_integer_t v, kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (v : int, lo : int, hi : int) -> int */ 
  kk_integer_t a_10002;
  bool _match_x470 = kk_integer_gt_borrow(v,lo,kk_context()); /*bool*/;
  if (_match_x470) {
    kk_integer_drop(lo, _ctx);
    a_10002 = v; /*int*/
  }
  else {
    kk_integer_drop(v, _ctx);
    a_10002 = lo; /*int*/
  }
  bool _match_x469 = kk_integer_lt_borrow(a_10002,hi,kk_context()); /*bool*/;
  if (_match_x469) {
    kk_integer_drop(hi, _ctx);
    return a_10002;
  }
  {
    kk_integer_drop(a_10002, _ctx);
    return hi;
  }
}

kk_integer_t kk_examples_basic_hc__gcd(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> div int */ 
  kk__tailcall: ;
  bool _match_x468 = kk_integer_eq_borrow(b,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x468) {
    kk_integer_drop(b, _ctx);
    return a;
  }
  { // tailcall
    kk_integer_t _x_x546 = kk_integer_dup(b, _ctx); /*int*/
    kk_integer_t _x_x547 = kk_integer_mod(a,b,kk_context()); /*int*/
    a = _x_x546;
    b = _x_x547;
    goto kk__tailcall;
  }
}

kk_integer_t kk_examples_basic_hc__lcm(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> div int */ 
  bool _match_x465 = kk_integer_eq_borrow(a,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x465) {
    kk_integer_drop(b, _ctx);
    kk_integer_drop(a, _ctx);
    return kk_integer_from_small(0);
  }
  {
    bool _match_x466 = kk_integer_eq_borrow(b,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_x466) {
      kk_integer_drop(b, _ctx);
      kk_integer_drop(a, _ctx);
      return kk_integer_from_small(0);
    }
    {
      kk_integer_t n_10006;
      kk_integer_t _x_x548 = kk_integer_dup(a, _ctx); /*int*/
      kk_integer_t _x_x549 = kk_integer_dup(b, _ctx); /*int*/
      n_10006 = kk_integer_mul(_x_x548,_x_x549,kk_context()); /*int*/
      kk_integer_t _x_x550;
      bool _match_x467 = kk_integer_lt_borrow(n_10006,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      if (_match_x467) {
        _x_x550 = kk_integer_sub((kk_integer_from_small(0)),n_10006,kk_context()); /*int*/
      }
      else {
        _x_x550 = n_10006; /*int*/
      }
      kk_integer_t _x_x551 = kk_examples_basic_hc__gcd(a, b, _ctx); /*int*/
      return kk_integer_div(_x_x550,_x_x551,kk_context());
    }
  }
}

kk_integer_t kk_examples_basic_hc__pow(kk_integer_t base, kk_integer_t exp, kk_context_t* _ctx) { /* (base : int, exp : int) -> div int */ 
  bool _match_x464 = kk_integer_lte_borrow(exp,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x464) {
    kk_integer_drop(exp, _ctx);
    kk_integer_drop(base, _ctx);
    return kk_integer_from_small(1);
  }
  {
    kk_integer_t _x_x552 = kk_integer_dup(base, _ctx); /*int*/
    kk_integer_t _x_x553;
    kk_integer_t _x_x554 = kk_integer_add_small_const(exp, -1, _ctx); /*int*/
    _x_x553 = kk_examples_basic_hc__pow(base, _x_x554, _ctx); /*int*/
    return kk_integer_mul(_x_x552,_x_x553,kk_context());
  }
}

kk_integer_t kk_examples_basic_hc__sign(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> int */ 
  bool _match_x461 = kk_integer_gt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x461) {
    kk_integer_drop(n, _ctx);
    return kk_integer_from_small(1);
  }
  {
    bool _match_x462;
    bool _brw_x463 = kk_integer_lt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    _match_x462 = _brw_x463; /*bool*/
    if (_match_x462) {
      return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
    }
    {
      return kk_integer_from_small(0);
    }
  }
}

kk_std_core_types__list kk_examples_basic_hc__range(kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (lo : int, hi : int) -> div list<int> */ 
  bool _match_x460 = kk_integer_gte_borrow(lo,hi,kk_context()); /*bool*/;
  if (_match_x460) {
    kk_integer_drop(lo, _ctx);
    kk_integer_drop(hi, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    kk_std_core_types__list ys_10014;
    kk_integer_t _x_x555;
    kk_integer_t _x_x556 = kk_integer_dup(lo, _ctx); /*int*/
    _x_x555 = kk_integer_add_small_const(_x_x556, 1, _ctx); /*int*/
    ys_10014 = kk_examples_basic_hc__range(_x_x555, hi, _ctx); /*list<int>*/
    kk_std_core_types__list _x_x557 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(lo, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    return kk_std_core_list_append(_x_x557, ys_10014, _ctx);
  }
}

kk_std_core_types__list kk_examples_basic_hc__range__inc(kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (lo : int, hi : int) -> div list<int> */ 
  bool _match_x459 = kk_integer_gt_borrow(lo,hi,kk_context()); /*bool*/;
  if (_match_x459) {
    kk_integer_drop(lo, _ctx);
    kk_integer_drop(hi, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    kk_std_core_types__list ys_10018;
    kk_integer_t _x_x558;
    kk_integer_t _x_x559 = kk_integer_dup(lo, _ctx); /*int*/
    _x_x558 = kk_integer_add_small_const(_x_x559, 1, _ctx); /*int*/
    ys_10018 = kk_examples_basic_hc__range__inc(_x_x558, hi, _ctx); /*list<int>*/
    kk_std_core_types__list _x_x560 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(lo, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    return kk_std_core_list_append(_x_x560, ys_10018, _ctx);
  }
}

kk_integer_t kk_examples_basic_hc__isqrt__loop(kk_integer_t n, kk_integer_t x0, kk_integer_t x1, kk_context_t* _ctx) { /* (n : int, x0 : int, x1 : int) -> div int */ 
  kk__tailcall: ;
  bool _match_x458 = kk_integer_gte_borrow(x1,x0,kk_context()); /*bool*/;
  if (_match_x458) {
    kk_integer_drop(x1, _ctx);
    kk_integer_drop(n, _ctx);
    return x0;
  }
  {
    kk_integer_drop(x0, _ctx);
    kk_integer_t y_10022;
    kk_integer_t _x_x561 = kk_integer_dup(n, _ctx); /*int*/
    kk_integer_t _x_x562 = kk_integer_dup(x1, _ctx); /*int*/
    y_10022 = kk_integer_div(_x_x561,_x_x562,kk_context()); /*int*/
    kk_integer_t x2;
    kk_integer_t _x_x563;
    kk_integer_t _x_x564 = kk_integer_dup(x1, _ctx); /*int*/
    _x_x563 = kk_integer_add(_x_x564,y_10022,kk_context()); /*int*/
    x2 = kk_integer_div(_x_x563,(kk_integer_from_small(2)),kk_context()); /*int*/
    { // tailcall
      kk_integer_t _x_x565 = x1; /*int*/
      x0 = _x_x565;
      x1 = x2;
      goto kk__tailcall;
    }
  }
}

kk_integer_t kk_examples_basic_hc__isqrt(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> div int */ 
  bool _match_x457 = kk_integer_lte_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x457) {
    kk_integer_drop(n, _ctx);
    return kk_integer_from_small(0);
  }
  {
    kk_integer_t x1;
    kk_integer_t _x_x566;
    kk_integer_t _x_x567 = kk_integer_dup(n, _ctx); /*int*/
    _x_x566 = kk_integer_add_small_const(_x_x567, 1, _ctx); /*int*/
    x1 = kk_integer_div(_x_x566,(kk_integer_from_small(2)),kk_context()); /*int*/
    kk_integer_t _x_x568 = kk_integer_dup(n, _ctx); /*int*/
    return kk_examples_basic_hc__isqrt__loop(_x_x568, n, x1, _ctx);
  }
}

bool kk_examples_basic_hc__is__digit(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x455 = kk_integer_gte_borrow(n,(kk_integer_from_small(48)),kk_context()); /*bool*/;
  if (_match_x455) {
    bool _brw_x456 = kk_integer_lte_borrow(n,(kk_integer_from_small(57)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    return _brw_x456;
  }
  {
    kk_integer_drop(n, _ctx);
    return false;
  }
}

bool kk_examples_basic_hc__is__upper(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x453 = kk_integer_gte_borrow(n,(kk_integer_from_small(65)),kk_context()); /*bool*/;
  if (_match_x453) {
    bool _brw_x454 = kk_integer_lte_borrow(n,(kk_integer_from_small(90)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    return _brw_x454;
  }
  {
    kk_integer_drop(n, _ctx);
    return false;
  }
}

bool kk_examples_basic_hc__is__lower(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x451 = kk_integer_gte_borrow(n,(kk_integer_from_small(97)),kk_context()); /*bool*/;
  if (_match_x451) {
    bool _brw_x452 = kk_integer_lte_borrow(n,(kk_integer_from_small(122)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    return _brw_x452;
  }
  {
    kk_integer_drop(n, _ctx);
    return false;
  }
}

bool kk_examples_basic_hc__is__alpha(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x444 = kk_integer_gte_borrow(n,(kk_integer_from_small(65)),kk_context()); /*bool*/;
  if (_match_x444) {
    bool _match_x447;
    bool _brw_x450 = kk_integer_lte_borrow(n,(kk_integer_from_small(90)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    _match_x447 = _brw_x450; /*bool*/
    if (_match_x447) {
      return true;
    }
    {
      kk_integer_t n_0 = kk_integer_from_int(c,kk_context()); /*int*/;
      bool _match_x448 = kk_integer_gte_borrow(n_0,(kk_integer_from_small(97)),kk_context()); /*bool*/;
      if (_match_x448) {
        bool _brw_x449 = kk_integer_lte_borrow(n_0,(kk_integer_from_small(122)),kk_context()); /*bool*/;
        kk_integer_drop(n_0, _ctx);
        return _brw_x449;
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
    bool _match_x445 = kk_integer_gte_borrow(n_0_0,(kk_integer_from_small(97)),kk_context()); /*bool*/;
    if (_match_x445) {
      bool _brw_x446 = kk_integer_lte_borrow(n_0_0,(kk_integer_from_small(122)),kk_context()); /*bool*/;
      kk_integer_drop(n_0_0, _ctx);
      return _brw_x446;
    }
    {
      kk_integer_drop(n_0_0, _ctx);
      return false;
    }
  }
}

bool kk_examples_basic_hc__is__alnum(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  bool _match_x441 = kk_examples_basic_hc__is__alpha(c, _ctx); /*bool*/;
  if (_match_x441) {
    return true;
  }
  {
    kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
    bool _match_x442 = kk_integer_gte_borrow(n,(kk_integer_from_small(48)),kk_context()); /*bool*/;
    if (_match_x442) {
      bool _brw_x443 = kk_integer_lte_borrow(n,(kk_integer_from_small(57)),kk_context()); /*bool*/;
      kk_integer_drop(n, _ctx);
      return _brw_x443;
    }
    {
      kk_integer_drop(n, _ctx);
      return false;
    }
  }
}

bool kk_examples_basic_hc__is__space(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x437 = kk_integer_eq_borrow(n,(kk_integer_from_small(32)),kk_context()); /*bool*/;
  if (_match_x437) {
    kk_integer_drop(n, _ctx);
    return true;
  }
  {
    bool _match_x438 = kk_integer_eq_borrow(n,(kk_integer_from_small(9)),kk_context()); /*bool*/;
    if (_match_x438) {
      kk_integer_drop(n, _ctx);
      return true;
    }
    {
      bool _match_x439 = kk_integer_eq_borrow(n,(kk_integer_from_small(10)),kk_context()); /*bool*/;
      if (_match_x439) {
        kk_integer_drop(n, _ctx);
        return true;
      }
      {
        bool _brw_x440 = kk_integer_eq_borrow(n,(kk_integer_from_small(13)),kk_context()); /*bool*/;
        kk_integer_drop(n, _ctx);
        return _brw_x440;
      }
    }
  }
}

bool kk_examples_basic_hc__is__punct(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x426;
  bool _match_x433 = kk_integer_gte_borrow(n,(kk_integer_from_small(33)),kk_context()); /*bool*/;
  if (_match_x433) {
    bool _match_x435 = kk_integer_lte_borrow(n,(kk_integer_from_small(47)),kk_context()); /*bool*/;
    if (_match_x435) {
      _match_x426 = true; /*bool*/
    }
    else {
      bool _match_x436 = kk_integer_gte_borrow(n,(kk_integer_from_small(58)),kk_context()); /*bool*/;
      if (_match_x436) {
        _match_x426 = kk_integer_lte_borrow(n,(kk_integer_from_small(64)),kk_context()); /*bool*/
      }
      else {
        _match_x426 = false; /*bool*/
      }
    }
  }
  else {
    bool _match_x434 = kk_integer_gte_borrow(n,(kk_integer_from_small(58)),kk_context()); /*bool*/;
    if (_match_x434) {
      _match_x426 = kk_integer_lte_borrow(n,(kk_integer_from_small(64)),kk_context()); /*bool*/
    }
    else {
      _match_x426 = false; /*bool*/
    }
  }
  if (_match_x426) {
    kk_integer_drop(n, _ctx);
    return true;
  }
  {
    bool _match_x427 = kk_integer_gte_borrow(n,(kk_integer_from_small(91)),kk_context()); /*bool*/;
    if (_match_x427) {
      bool _match_x430 = kk_integer_lte_borrow(n,(kk_integer_from_small(96)),kk_context()); /*bool*/;
      if (_match_x430) {
        kk_integer_drop(n, _ctx);
        return true;
      }
      {
        bool _match_x431 = kk_integer_gte_borrow(n,(kk_integer_from_small(123)),kk_context()); /*bool*/;
        if (_match_x431) {
          bool _brw_x432 = kk_integer_lte_borrow(n,(kk_integer_from_small(126)),kk_context()); /*bool*/;
          kk_integer_drop(n, _ctx);
          return _brw_x432;
        }
        {
          kk_integer_drop(n, _ctx);
          return false;
        }
      }
    }
    {
      bool _match_x428 = kk_integer_gte_borrow(n,(kk_integer_from_small(123)),kk_context()); /*bool*/;
      if (_match_x428) {
        bool _brw_x429 = kk_integer_lte_borrow(n,(kk_integer_from_small(126)),kk_context()); /*bool*/;
        kk_integer_drop(n, _ctx);
        return _brw_x429;
      }
      {
        kk_integer_drop(n, _ctx);
        return false;
      }
    }
  }
}


// lift anonymous function
struct kk_examples_basic_hc__all__digits_fun570__t {
  struct kk_function_s _base;
};
static bool kk_examples_basic_hc__all__digits_fun570(kk_function_t _fself, kk_box_t _b_x32, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__all__digits_fun570(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__all__digits_fun570, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_examples_basic_hc__all__digits_fun570(kk_function_t _fself, kk_box_t _b_x32, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x571 = kk_char_unbox(_b_x32, KK_OWNED, _ctx); /*char*/
  return kk_examples_basic_hc__is__digit(_x_x571, _ctx);
}

bool kk_examples_basic_hc__all__digits(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x423;
  kk_integer_t _brw_x424;
  kk_string_t _x_x569 = kk_string_dup(s, _ctx); /*string*/
  _brw_x424 = kk_std_core_string_chars_fs_count(_x_x569, _ctx); /*int*/
  bool _brw_x425 = kk_integer_eq_borrow(_brw_x424,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x424, _ctx);
  _match_x423 = _brw_x425; /*bool*/
  if (_match_x423) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x30_33 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x30_33, kk_examples_basic_new_hc__all__digits_fun570(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_examples_basic_hc__all__alpha_fun573__t {
  struct kk_function_s _base;
};
static bool kk_examples_basic_hc__all__alpha_fun573(kk_function_t _fself, kk_box_t _b_x37, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__all__alpha_fun573(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__all__alpha_fun573, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_examples_basic_hc__all__alpha_fun573(kk_function_t _fself, kk_box_t _b_x37, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x574 = kk_char_unbox(_b_x37, KK_OWNED, _ctx); /*char*/
  return kk_examples_basic_hc__is__alpha(_x_x574, _ctx);
}

bool kk_examples_basic_hc__all__alpha(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x420;
  kk_integer_t _brw_x421;
  kk_string_t _x_x572 = kk_string_dup(s, _ctx); /*string*/
  _brw_x421 = kk_std_core_string_chars_fs_count(_x_x572, _ctx); /*int*/
  bool _brw_x422 = kk_integer_eq_borrow(_brw_x421,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x421, _ctx);
  _match_x420 = _brw_x422; /*bool*/
  if (_match_x420) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x35_38 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x35_38, kk_examples_basic_new_hc__all__alpha_fun573(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_examples_basic_hc__all__upper_fun576__t {
  struct kk_function_s _base;
};
static bool kk_examples_basic_hc__all__upper_fun576(kk_function_t _fself, kk_box_t _b_x42, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__all__upper_fun576(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__all__upper_fun576, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_examples_basic_hc__all__upper_fun576(kk_function_t _fself, kk_box_t _b_x42, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x577 = kk_char_unbox(_b_x42, KK_OWNED, _ctx); /*char*/
  return kk_examples_basic_hc__is__upper(_x_x577, _ctx);
}

bool kk_examples_basic_hc__all__upper(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x417;
  kk_integer_t _brw_x418;
  kk_string_t _x_x575 = kk_string_dup(s, _ctx); /*string*/
  _brw_x418 = kk_std_core_string_chars_fs_count(_x_x575, _ctx); /*int*/
  bool _brw_x419 = kk_integer_eq_borrow(_brw_x418,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x418, _ctx);
  _match_x417 = _brw_x419; /*bool*/
  if (_match_x417) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x40_43 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x40_43, kk_examples_basic_new_hc__all__upper_fun576(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_examples_basic_hc__all__lower_fun579__t {
  struct kk_function_s _base;
};
static bool kk_examples_basic_hc__all__lower_fun579(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__all__lower_fun579(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__all__lower_fun579, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_examples_basic_hc__all__lower_fun579(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x580 = kk_char_unbox(_b_x47, KK_OWNED, _ctx); /*char*/
  return kk_examples_basic_hc__is__lower(_x_x580, _ctx);
}

bool kk_examples_basic_hc__all__lower(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x414;
  kk_integer_t _brw_x415;
  kk_string_t _x_x578 = kk_string_dup(s, _ctx); /*string*/
  _brw_x415 = kk_std_core_string_chars_fs_count(_x_x578, _ctx); /*int*/
  bool _brw_x416 = kk_integer_eq_borrow(_brw_x415,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x415, _ctx);
  _match_x414 = _brw_x416; /*bool*/
  if (_match_x414) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x45_48 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x45_48, kk_examples_basic_new_hc__all__lower_fun579(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_examples_basic_hc__all__alnum_fun582__t {
  struct kk_function_s _base;
};
static bool kk_examples_basic_hc__all__alnum_fun582(kk_function_t _fself, kk_box_t _b_x52, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__all__alnum_fun582(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__all__alnum_fun582, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_examples_basic_hc__all__alnum_fun582(kk_function_t _fself, kk_box_t _b_x52, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x583 = kk_char_unbox(_b_x52, KK_OWNED, _ctx); /*char*/
  return kk_examples_basic_hc__is__alnum(_x_x583, _ctx);
}

bool kk_examples_basic_hc__all__alnum(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x411;
  kk_integer_t _brw_x412;
  kk_string_t _x_x581 = kk_string_dup(s, _ctx); /*string*/
  _brw_x412 = kk_std_core_string_chars_fs_count(_x_x581, _ctx); /*int*/
  bool _brw_x413 = kk_integer_eq_borrow(_brw_x412,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x412, _ctx);
  _match_x411 = _brw_x413; /*bool*/
  if (_match_x411) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x50_53 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x50_53, kk_examples_basic_new_hc__all__alnum_fun582(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_examples_basic_hc__glob__match__chars_fun589__t {
  struct kk_function_s _base;
};
static bool kk_examples_basic_hc__glob__match__chars_fun589(kk_function_t _fself, kk_box_t _b_x59, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__glob__match__chars_fun589(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__glob__match__chars_fun589, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_examples_basic_hc__glob__match__chars_fun589(kk_function_t _fself, kk_box_t _b_x59, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x590;
  kk_char_t _x_x591 = kk_char_unbox(_b_x59, KK_OWNED, _ctx); /*char*/
  _x_x590 = kk_std_core_string_char_fs_string(_x_x591, _ctx); /*string*/
  kk_string_t _x_x592;
  kk_define_string_literal(static, _s_x593, 1, "/", _ctx)
  _x_x592 = kk_string_dup(_s_x593, _ctx); /*string*/
  return kk_string_is_neq(_x_x590,_x_x592,kk_context());
}

bool kk_examples_basic_hc__glob__match__chars(kk_std_core_types__list pat, kk_std_core_types__list input, kk_context_t* _ctx) { /* (pat : list<char>, input : list<char>) -> div bool */ 
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
    struct kk_std_core_types_Cons* _con_x584 = kk_std_core_types__as_Cons(pat, _ctx);
    kk_box_t _box_x55 = _con_x584->head;
    kk_std_core_types__list prest = _con_x584->tail;
    kk_char_t p = kk_char_unbox(_box_x55, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(pat, _ctx)) {
      kk_datatype_ptr_free(pat, _ctx);
    }
    else {
      kk_std_core_types__list_dup(prest, _ctx);
      kk_datatype_ptr_decref(pat, _ctx);
    }
    kk_string_t _match_x408 = kk_std_core_string_char_fs_string(p, _ctx); /*string*/;
    if (kk_string_cmp_cstr_borrow(_match_x408, "\?", _ctx) == 0) {
      kk_string_drop(_match_x408, _ctx);
      if (kk_std_core_types__is_Nil(input, _ctx)) {
        kk_std_core_types__list_drop(prest, _ctx);
        return false;
      }
      {
        struct kk_std_core_types_Cons* _con_x585 = kk_std_core_types__as_Cons(input, _ctx);
        kk_box_t _box_x56 = _con_x585->head;
        kk_std_core_types__list irest = _con_x585->tail;
        kk_char_t c = kk_char_unbox(_box_x56, KK_BORROWED, _ctx);
        if kk_likely(kk_datatype_ptr_is_unique(input, _ctx)) {
          kk_datatype_ptr_free(input, _ctx);
        }
        else {
          kk_std_core_types__list_dup(irest, _ctx);
          kk_datatype_ptr_decref(input, _ctx);
        }
        bool _match_x410;
        kk_string_t _x_x586 = kk_std_core_string_char_fs_string(c, _ctx); /*string*/
        kk_string_t _x_x587;
        kk_define_string_literal(static, _s_x588, 1, "/", _ctx)
        _x_x587 = kk_string_dup(_s_x588, _ctx); /*string*/
        _match_x410 = kk_string_is_eq(_x_x586,_x_x587,kk_context()); /*bool*/
        if (_match_x410) {
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
    if (kk_string_cmp_cstr_borrow(_match_x408, "*", _ctx) == 0) {
      kk_string_drop(_match_x408, _ctx);
      if (kk_std_core_types__is_Nil(prest, _ctx)) {
        return kk_std_core_list_all(input, kk_examples_basic_new_hc__glob__match__chars_fun589(_ctx), _ctx);
      }
      {
        return kk_examples_basic_hc__glob__star(prest, input, _ctx);
      }
    }
    {
      kk_string_drop(_match_x408, _ctx);
      if (kk_std_core_types__is_Nil(input, _ctx)) {
        kk_std_core_types__list_drop(prest, _ctx);
        return false;
      }
      {
        struct kk_std_core_types_Cons* _con_x594 = kk_std_core_types__as_Cons(input, _ctx);
        kk_box_t _box_x60 = _con_x594->head;
        kk_std_core_types__list irest_0 = _con_x594->tail;
        kk_char_t c_1 = kk_char_unbox(_box_x60, KK_BORROWED, _ctx);
        if kk_likely(kk_datatype_ptr_is_unique(input, _ctx)) {
          kk_datatype_ptr_free(input, _ctx);
        }
        else {
          kk_std_core_types__list_dup(irest_0, _ctx);
          kk_datatype_ptr_decref(input, _ctx);
        }
        bool _match_x409 = (p == c_1); /*bool*/;
        if (_match_x409) { // tailcall
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

bool kk_examples_basic_hc__glob__star(kk_std_core_types__list prest_0, kk_std_core_types__list input_0, kk_context_t* _ctx) { /* (prest : list<char>, input : list<char>) -> div bool */ 
  kk__tailcall: ;
  bool _match_x406;
  kk_std_core_types__list _x_x595 = kk_std_core_types__list_dup(prest_0, _ctx); /*list<char>*/
  kk_std_core_types__list _x_x596 = kk_std_core_types__list_dup(input_0, _ctx); /*list<char>*/
  _match_x406 = kk_examples_basic_hc__glob__match__chars(_x_x595, _x_x596, _ctx); /*bool*/
  if (_match_x406) {
    kk_std_core_types__list_drop(prest_0, _ctx);
    kk_std_core_types__list_drop(input_0, _ctx);
    return true;
  }
  if (kk_std_core_types__is_Nil(input_0, _ctx)) {
    kk_std_core_types__list_drop(prest_0, _ctx);
    return false;
  }
  {
    struct kk_std_core_types_Cons* _con_x597 = kk_std_core_types__as_Cons(input_0, _ctx);
    kk_box_t _box_x64 = _con_x597->head;
    kk_std_core_types__list irest_1 = _con_x597->tail;
    kk_char_t c_2 = kk_char_unbox(_box_x64, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(input_0, _ctx)) {
      kk_datatype_ptr_free(input_0, _ctx);
    }
    else {
      kk_std_core_types__list_dup(irest_1, _ctx);
      kk_datatype_ptr_decref(input_0, _ctx);
    }
    bool _match_x407;
    kk_string_t _x_x598 = kk_std_core_string_char_fs_string(c_2, _ctx); /*string*/
    kk_string_t _x_x599;
    kk_define_string_literal(static, _s_x600, 1, "/", _ctx)
    _x_x599 = kk_string_dup(_s_x600, _ctx); /*string*/
    _match_x407 = kk_string_is_eq(_x_x598,_x_x599,kk_context()); /*bool*/
    if (_match_x407) {
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

bool kk_examples_basic_hc__glob__doublestar(kk_std_core_types__list prest, kk_std_core_types__list paths, kk_context_t* _ctx) { /* (prest : list<string>, paths : list<string>) -> div bool */ 
  kk__tailcall: ;
  bool _match_x405;
  kk_std_core_types__list _x_x603 = kk_std_core_types__list_dup(prest, _ctx); /*list<string>*/
  kk_std_core_types__list _x_x604 = kk_std_core_types__list_dup(paths, _ctx); /*list<string>*/
  _match_x405 = kk_examples_basic_hc__glob__match__segments(_x_x603, _x_x604, _ctx); /*bool*/
  if (_match_x405) {
    kk_std_core_types__list_drop(prest, _ctx);
    kk_std_core_types__list_drop(paths, _ctx);
    return true;
  }
  if (kk_std_core_types__is_Nil(paths, _ctx)) {
    kk_std_core_types__list_drop(prest, _ctx);
    return false;
  }
  {
    struct kk_std_core_types_Cons* _con_x605 = kk_std_core_types__as_Cons(paths, _ctx);
    kk_box_t _box_x65 = _con_x605->head;
    kk_std_core_types__list srest = _con_x605->tail;
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

bool kk_examples_basic_hc__glob__match__segments(kk_std_core_types__list pats, kk_std_core_types__list paths_0, kk_context_t* _ctx) { /* (pats : list<string>, paths : list<string>) -> div bool */ 
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
    struct kk_std_core_types_Cons* _con_x606 = kk_std_core_types__as_Cons(pats, _ctx);
    kk_box_t _box_x66 = _con_x606->head;
    kk_std_core_types__list prest_0 = _con_x606->tail;
    kk_string_t p = kk_string_unbox(_box_x66);
    if kk_likely(kk_datatype_ptr_is_unique(pats, _ctx)) {
      kk_datatype_ptr_free(pats, _ctx);
    }
    else {
      kk_string_dup(p, _ctx);
      kk_std_core_types__list_dup(prest_0, _ctx);
      kk_datatype_ptr_decref(pats, _ctx);
    }
    bool _match_x403;
    kk_string_t _x_x607 = kk_string_dup(p, _ctx); /*string*/
    kk_string_t _x_x608;
    kk_define_string_literal(static, _s_x609, 2, "**", _ctx)
    _x_x608 = kk_string_dup(_s_x609, _ctx); /*string*/
    _match_x403 = kk_string_is_eq(_x_x607,_x_x608,kk_context()); /*bool*/
    if (_match_x403) {
      kk_string_drop(p, _ctx);
      return kk_examples_basic_hc__glob__doublestar(prest_0, paths_0, _ctx);
    }
    if (kk_std_core_types__is_Nil(paths_0, _ctx)) {
      kk_std_core_types__list_drop(prest_0, _ctx);
      kk_string_drop(p, _ctx);
      return false;
    }
    {
      struct kk_std_core_types_Cons* _con_x610 = kk_std_core_types__as_Cons(paths_0, _ctx);
      kk_box_t _box_x67 = _con_x610->head;
      kk_std_core_types__list srest_0 = _con_x610->tail;
      kk_string_t s = kk_string_unbox(_box_x67);
      if kk_likely(kk_datatype_ptr_is_unique(paths_0, _ctx)) {
        kk_datatype_ptr_free(paths_0, _ctx);
      }
      else {
        kk_string_dup(s, _ctx);
        kk_std_core_types__list_dup(srest_0, _ctx);
        kk_datatype_ptr_decref(paths_0, _ctx);
      }
      bool _match_x404;
      kk_std_core_types__list _x_x611 = kk_std_core_string_list(p, _ctx); /*list<char>*/
      kk_std_core_types__list _x_x612 = kk_std_core_string_list(s, _ctx); /*list<char>*/
      _match_x404 = kk_examples_basic_hc__glob__match__chars(_x_x611, _x_x612, _ctx); /*bool*/
      if (_match_x404) { // tailcall
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
struct kk_examples_basic_hc__glob__match__path_fun617__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__glob__match__path_fun617(kk_function_t _fself, kk_box_t _b_x70, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__glob__match__path_fun617(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__glob__match__path_fun617, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__glob__match__path_fun617(kk_function_t _fself, kk_box_t _b_x70, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x618;
  kk_char_t _x_x619 = kk_char_unbox(_b_x70, KK_OWNED, _ctx); /*char*/
  _x_x618 = kk_std_core_string_char_fs_string(_x_x619, _ctx); /*string*/
  return kk_string_box(_x_x618);
}


// lift anonymous function
struct kk_examples_basic_hc__glob__match__path_fun626__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__glob__match__path_fun626(kk_function_t _fself, kk_box_t _b_x75, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__glob__match__path_fun626(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__glob__match__path_fun626, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__glob__match__path_fun626(kk_function_t _fself, kk_box_t _b_x75, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x627;
  kk_char_t _x_x628 = kk_char_unbox(_b_x75, KK_OWNED, _ctx); /*char*/
  _x_x627 = kk_std_core_string_char_fs_string(_x_x628, _ctx); /*string*/
  return kk_string_box(_x_x627);
}

bool kk_examples_basic_hc__glob__match__path(kk_string_t pattern, kk_string_t hc__path, kk_context_t* _ctx) { /* (pattern : string, hc_path : string) -> div bool */ 
  kk_std_core_types__list pat__parts;
  bool _match_x400;
  kk_string_t _x_x613;
  kk_define_string_literal(static, _s_x614, 1, "/", _ctx)
  _x_x613 = kk_string_dup(_s_x614, _ctx); /*string*/
  kk_string_t _x_x615 = kk_string_empty(); /*string*/
  _match_x400 = kk_string_is_eq(_x_x613,_x_x615,kk_context()); /*bool*/
  if (_match_x400) {
    kk_std_core_types__list _b_x68_71 = kk_std_core_string_list(pattern, _ctx); /*list<char>*/;
    kk_function_t _brw_x401 = kk_examples_basic_new_hc__glob__match__path_fun617(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x402 = kk_std_core_list_map(_b_x68_71, _brw_x401, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x401, _ctx);
    pat__parts = _brw_x402; /*list<string>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x620;
    kk_define_string_literal(static, _s_x621, 1, "/", _ctx)
    _x_x620 = kk_string_dup(_s_x621, _ctx); /*string*/
    v_10011 = kk_string_splitv(pattern,_x_x620,kk_context()); /*vector<string>*/
    pat__parts = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  kk_std_core_types__list path__parts;
  bool _match_x397;
  kk_string_t _x_x622;
  kk_define_string_literal(static, _s_x623, 1, "/", _ctx)
  _x_x622 = kk_string_dup(_s_x623, _ctx); /*string*/
  kk_string_t _x_x624 = kk_string_empty(); /*string*/
  _match_x397 = kk_string_is_eq(_x_x622,_x_x624,kk_context()); /*bool*/
  if (_match_x397) {
    kk_std_core_types__list _b_x73_76 = kk_std_core_string_list(hc__path, _ctx); /*list<char>*/;
    kk_function_t _brw_x398 = kk_examples_basic_new_hc__glob__match__path_fun626(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x399 = kk_std_core_list_map(_b_x73_76, _brw_x398, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x398, _ctx);
    path__parts = _brw_x399; /*list<string>*/
  }
  else {
    kk_vector_t v_10011_0;
    kk_string_t _x_x629;
    kk_define_string_literal(static, _s_x630, 1, "/", _ctx)
    _x_x629 = kk_string_dup(_s_x630, _ctx); /*string*/
    v_10011_0 = kk_string_splitv(hc__path,_x_x629,kk_context()); /*vector<string>*/
    path__parts = kk_std_core_vector_vlist(v_10011_0, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  return kk_examples_basic_hc__glob__match__segments(pat__parts, path__parts, _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__words_fun636__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__words_fun636(kk_function_t _fself, kk_box_t _b_x80, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__words_fun636(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__words_fun636, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__words_fun636(kk_function_t _fself, kk_box_t _b_x80, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x637;
  kk_char_t _x_x638 = kk_char_unbox(_b_x80, KK_OWNED, _ctx); /*char*/
  _x_x637 = kk_std_core_string_char_fs_string(_x_x638, _ctx); /*string*/
  return kk_string_box(_x_x637);
}


// lift anonymous function
struct kk_examples_basic_hc__words_fun641__t {
  struct kk_function_s _base;
};
static bool kk_examples_basic_hc__words_fun641(kk_function_t _fself, kk_box_t _b_x83, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__words_fun641(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__words_fun641, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_examples_basic_hc__words_fun641(kk_function_t _fself, kk_box_t _b_x83, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool b_10041;
  kk_integer_t _brw_x388;
  kk_string_t _x_x642 = kk_string_unbox(_b_x83); /*string*/
  _brw_x388 = kk_std_core_string_chars_fs_count(_x_x642, _ctx); /*int*/
  bool _brw_x389 = kk_integer_eq_borrow(_brw_x388,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x388, _ctx);
  b_10041 = _brw_x389; /*bool*/
  if (b_10041) {
    return false;
  }
  {
    return true;
  }
}

kk_std_core_types__list kk_examples_basic_hc__words(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> list<string> */ 
  kk_std_core_types__list _b_x81_84;
  bool _match_x390;
  kk_string_t _x_x632;
  kk_define_string_literal(static, _s_x633, 1, " ", _ctx)
  _x_x632 = kk_string_dup(_s_x633, _ctx); /*string*/
  kk_string_t _x_x634 = kk_string_empty(); /*string*/
  _match_x390 = kk_string_is_eq(_x_x632,_x_x634,kk_context()); /*bool*/
  if (_match_x390) {
    kk_std_core_types__list _b_x78_86 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x391 = kk_examples_basic_new_hc__words_fun636(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x392 = kk_std_core_list_map(_b_x78_86, _brw_x391, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x391, _ctx);
    _b_x81_84 = _brw_x392; /*list<string>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x639;
    kk_define_string_literal(static, _s_x640, 1, " ", _ctx)
    _x_x639 = kk_string_dup(_s_x640, _ctx); /*string*/
    v_10011 = kk_string_splitv(s,_x_x639,kk_context()); /*vector<string>*/
    _b_x81_84 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  return kk_std_core_list_filter(_b_x81_84, kk_examples_basic_new_hc__words_fun641(_ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__lines_fun647__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__lines_fun647(kk_function_t _fself, kk_box_t _b_x91, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__lines_fun647(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__lines_fun647, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__lines_fun647(kk_function_t _fself, kk_box_t _b_x91, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x648;
  kk_char_t _x_x649 = kk_char_unbox(_b_x91, KK_OWNED, _ctx); /*char*/
  _x_x648 = kk_std_core_string_char_fs_string(_x_x649, _ctx); /*string*/
  return kk_string_box(_x_x648);
}

kk_std_core_types__list kk_examples_basic_hc__lines(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> list<string> */ 
  bool _match_x385;
  kk_string_t _x_x643;
  kk_define_string_literal(static, _s_x644, 1, "\n", _ctx)
  _x_x643 = kk_string_dup(_s_x644, _ctx); /*string*/
  kk_string_t _x_x645 = kk_string_empty(); /*string*/
  _match_x385 = kk_string_is_eq(_x_x643,_x_x645,kk_context()); /*bool*/
  if (_match_x385) {
    kk_std_core_types__list _b_x89_92 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x386 = kk_examples_basic_new_hc__lines_fun647(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x387 = kk_std_core_list_map(_b_x89_92, _brw_x386, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x386, _ctx);
    return _brw_x387;
  }
  {
    kk_vector_t v_10011;
    kk_string_t _x_x650;
    kk_define_string_literal(static, _s_x651, 1, "\n", _ctx)
    _x_x650 = kk_string_dup(_s_x651, _ctx); /*string*/
    v_10011 = kk_string_splitv(s,_x_x650,kk_context()); /*vector<string>*/
    return kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx);
  }
}

kk_string_t kk_examples_basic_hc__repeat__str(kk_string_t s, kk_integer_t n, kk_context_t* _ctx) { /* (s : string, n : int) -> div string */ 
  bool _match_x384 = kk_integer_lte_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x384) {
    kk_string_drop(s, _ctx);
    kk_integer_drop(n, _ctx);
    return kk_string_empty();
  }
  {
    kk_string_t _x_x657 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x658;
    kk_integer_t _x_x659 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
    _x_x658 = kk_examples_basic_hc__repeat__str(s, _x_x659, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x657, _x_x658, _ctx);
  }
}

kk_string_t kk_examples_basic_hc__pad__left(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10055;
  kk_string_t _x_x660 = kk_string_dup(s, _ctx); /*string*/
  y_10055 = kk_std_core_string_chars_fs_count(_x_x660, _ctx); /*int*/
  kk_integer_t b_10053 = kk_integer_sub(width,y_10055,kk_context()); /*int*/;
  kk_string_t _x_x661;
  kk_integer_t _x_x662;
  bool _match_x383 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10053,kk_context()); /*bool*/;
  if (_match_x383) {
    kk_integer_drop(b_10053, _ctx);
    _x_x662 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x662 = b_10053; /*int*/
  }
  _x_x661 = kk_examples_basic_hc__repeat__str(ch, _x_x662, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x661, s, _ctx);
}

kk_string_t kk_examples_basic_hc__pad__right(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10059;
  kk_string_t _x_x663 = kk_string_dup(s, _ctx); /*string*/
  y_10059 = kk_std_core_string_chars_fs_count(_x_x663, _ctx); /*int*/
  kk_integer_t b_10057 = kk_integer_sub(width,y_10059,kk_context()); /*int*/;
  kk_string_t _x_x664;
  kk_integer_t _x_x665;
  bool _match_x382 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10057,kk_context()); /*bool*/;
  if (_match_x382) {
    kk_integer_drop(b_10057, _ctx);
    _x_x665 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x665 = b_10057; /*int*/
  }
  _x_x664 = kk_examples_basic_hc__repeat__str(ch, _x_x665, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(s, _x_x664, _ctx);
}

kk_string_t kk_examples_basic_hc__center(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10063;
  kk_string_t _x_x666 = kk_string_dup(s, _ctx); /*string*/
  y_10063 = kk_std_core_string_chars_fs_count(_x_x666, _ctx); /*int*/
  kk_integer_t b_10061 = kk_integer_sub(width,y_10063,kk_context()); /*int*/;
  kk_integer_t total;
  bool _match_x381 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10061,kk_context()); /*bool*/;
  if (_match_x381) {
    kk_integer_drop(b_10061, _ctx);
    total = kk_integer_from_small(0); /*int*/
  }
  else {
    total = b_10061; /*int*/
  }
  kk_integer_t left;
  kk_integer_t _x_x667 = kk_integer_dup(total, _ctx); /*int*/
  left = kk_integer_div(_x_x667,(kk_integer_from_small(2)),kk_context()); /*int*/
  kk_integer_t right;
  kk_integer_t _x_x668 = kk_integer_dup(left, _ctx); /*int*/
  right = kk_integer_sub(total,_x_x668,kk_context()); /*int*/
  kk_string_t _x_x669;
  kk_string_t _x_x670;
  kk_string_t _x_x671 = kk_string_dup(ch, _ctx); /*string*/
  _x_x670 = kk_examples_basic_hc__repeat__str(_x_x671, left, _ctx); /*string*/
  _x_x669 = kk_std_core_types__lp__plus__plus__rp_(_x_x670, s, _ctx); /*string*/
  kk_string_t _x_x672 = kk_examples_basic_hc__repeat__str(ch, right, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x669, _x_x672, _ctx);
}

kk_string_t kk_examples_basic_hc__removeprefix(kk_string_t s, kk_string_t pre, kk_context_t* _ctx) { /* (s : string, pre : string) -> string */ 
  kk_std_core_types__maybe maybe_10066;
  kk_string_t _x_x673 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x674 = kk_string_dup(pre, _ctx); /*string*/
  maybe_10066 = kk_std_core_sslice_starts_with(_x_x673, _x_x674, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(maybe_10066, _ctx)) {
    kk_box_t _box_x94 = maybe_10066._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_10066, _ctx);
    kk_std_core_types__list _x_x675;
    kk_std_core_types__list _x_x676 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    kk_integer_t _x_x677 = kk_std_core_string_chars_fs_count(pre, _ctx); /*int*/
    _x_x675 = kk_std_core_list_drop(_x_x676, _x_x677, _ctx); /*list<10001>*/
    return kk_std_core_string_listchar_fs_string(_x_x675, _ctx);
  }
  {
    kk_string_drop(pre, _ctx);
    return s;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__show__kv_10118_fun683__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__show__kv_10118_fun683(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__show__kv_10118_fun683(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__show__kv_10118_fun683, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__show__kv_10118_fun683(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x684 = kk_Unit;
  kk_sqlite__queryresult _x_x685 = kk_sqlite__queryresult_unbox(_b_x99, KK_OWNED, _ctx); /*sqlite/queryresult*/
  kk_sqlite_hc__print__rows(_x_x685, _ctx);
  return kk_unit_box(_x_x684);
}

kk_unit_t kk_examples_basic__mlift_hc__show__kv_10118(kk_std_core_types__either _y_x10079, kk_context_t* _ctx) { /* (either<string,sqlite/queryresult>) -> io () */ 
  if (kk_std_core_types__is_Left(_y_x10079, _ctx)) {
    kk_box_t _box_x95 = _y_x10079._cons.Left.left;
    kk_string_t e = kk_string_unbox(_box_x95);
    kk_string_dup(e, _ctx);
    kk_std_core_types__either_drop(_y_x10079, _ctx);
    kk_string_t _x_x678;
    kk_string_t _x_x679;
    kk_define_string_literal(static, _s_x680, 14, "query failed: ", _ctx)
    _x_x679 = kk_string_dup(_s_x680, _ctx); /*string*/
    _x_x678 = kk_std_core_types__lp__plus__plus__rp_(_x_x679, e, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x678, _ctx); return kk_Unit;
  }
  {
    kk_box_t _box_x96 = _y_x10079._cons.Right.right;
    kk_sqlite__queryresult r = kk_sqlite__queryresult_unbox(_box_x96, KK_BORROWED, _ctx);
    struct kk_sqlite_Queryresult* _con_x681 = kk_sqlite__as_Queryresult(r, _ctx);
    kk_sqlite__queryresult_dup(r, _ctx);
    kk_std_core_types__either_drop(_y_x10079, _ctx);
    kk_box_t _x_x682 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__show__kv_10118_fun683(_ctx), kk_sqlite__queryresult_box(r, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x682); return kk_Unit;
  }
}
 
// .hc:19


// lift anonymous function
struct kk_examples_basic_hc__show__kv_fun689__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__show__kv_fun689(kk_function_t _fself, kk_box_t _b_x103, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__show__kv_fun689(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__show__kv_fun689, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__show__kv_fun689(kk_function_t _fself, kk_box_t _b_x103, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x690 = kk_Unit;
  kk_std_core_types__either _x_x691 = kk_std_core_types__either_unbox(_b_x103, KK_OWNED, _ctx); /*either<string,sqlite/queryresult>*/
  kk_examples_basic__mlift_hc__show__kv_10118(_x_x691, _ctx);
  return kk_unit_box(_x_x690);
}


// lift anonymous function
struct kk_examples_basic_hc__show__kv_fun697__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__show__kv_fun697(kk_function_t _fself, kk_box_t _b_x108, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__show__kv_fun697(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__show__kv_fun697, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__show__kv_fun697(kk_function_t _fself, kk_box_t _b_x108, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x698 = kk_Unit;
  kk_sqlite__queryresult _x_x699 = kk_sqlite__queryresult_unbox(_b_x108, KK_OWNED, _ctx); /*sqlite/queryresult*/
  kk_sqlite_hc__print__rows(_x_x699, _ctx);
  return kk_unit_box(_x_x698);
}

kk_unit_t kk_examples_basic_hc__show__kv(kk_sqlite__db db, kk_context_t* _ctx) { /* (db : sqlite/db) -> io () */ 
  kk_std_core_types__either x_10147;
  kk_string_t _x_x686;
  kk_define_string_literal(static, _s_x687, 38, "SELECT key, value FROM kv ORDER BY key", _ctx)
  _x_x686 = kk_string_dup(_s_x687, _ctx); /*string*/
  x_10147 = kk_sqlite_hc__sqlite__query__p(db, _x_x686, kk_std_core_types__new_Nil(_ctx), _ctx); /*either<string,sqlite/queryresult>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__either_drop(x_10147, _ctx);
    kk_box_t _x_x688 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__show__kv_fun689(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x688); return kk_Unit;
  }
  if (kk_std_core_types__is_Left(x_10147, _ctx)) {
    kk_box_t _box_x104 = x_10147._cons.Left.left;
    kk_string_t e = kk_string_unbox(_box_x104);
    kk_string_dup(e, _ctx);
    kk_std_core_types__either_drop(x_10147, _ctx);
    kk_string_t _x_x692;
    kk_string_t _x_x693;
    kk_define_string_literal(static, _s_x694, 14, "query failed: ", _ctx)
    _x_x693 = kk_string_dup(_s_x694, _ctx); /*string*/
    _x_x692 = kk_std_core_types__lp__plus__plus__rp_(_x_x693, e, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x692, _ctx); return kk_Unit;
  }
  {
    kk_box_t _box_x105 = x_10147._cons.Right.right;
    kk_sqlite__queryresult r = kk_sqlite__queryresult_unbox(_box_x105, KK_BORROWED, _ctx);
    struct kk_sqlite_Queryresult* _con_x695 = kk_sqlite__as_Queryresult(r, _ctx);
    kk_sqlite__queryresult_dup(r, _ctx);
    kk_std_core_types__either_drop(x_10147, _ctx);
    kk_box_t _x_x696 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc__show__kv_fun697(_ctx), kk_sqlite__queryresult_box(r, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x696); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__run__kv__demo_10120_fun704__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__run__kv__demo_10120_fun704(kk_function_t _fself, kk_box_t _b_x114, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__run__kv__demo_10120_fun704(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__run__kv__demo_10120_fun704, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__run__kv__demo_10120_fun704(kk_function_t _fself, kk_box_t _b_x114, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x705;
  kk_sqlite__db _match_x379 = kk_sqlite__db_unbox(_b_x114, KK_OWNED, _ctx); /*sqlite/db*/;
  {
    kk_integer_t _x = _match_x379.h;
    _x_x705 = _x; /*int*/
  }
  return kk_integer_box(_x_x705, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__run__kv__demo_10120_fun707__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__run__kv__demo_10120_fun707(kk_function_t _fself, kk_box_t _b_x119, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__run__kv__demo_10120_fun707(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__run__kv__demo_10120_fun707, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__run__kv__demo_10120_fun707(kk_function_t _fself, kk_box_t _b_x119, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x708 = kk_Unit;
  kk_unit_t _x_x709 = kk_Unit;
  kk_unit_unbox(_b_x119);
  kk_examples_basic__mlift_hc__run__kv__demo_10119(_x_x709, _ctx);
  return kk_unit_box(_x_x708);
}

kk_unit_t kk_examples_basic__mlift_hc__run__kv__demo_10120(kk_sqlite__db db, kk_unit_t wild__, kk_context_t* _ctx) { /* (db : sqlite/db, wild_ : ()) -> io () */ 
  kk_unit_t x_10150 = kk_Unit;
  kk_integer_t _x_x702;
  kk_box_t _x_x703 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__run__kv__demo_10120_fun704(_ctx), kk_sqlite__db_box(db, _ctx), _ctx); /*10001*/
  _x_x702 = kk_integer_unbox(_x_x703, _ctx); /*int*/
  kk_sqlite__ffi_sqlite__close__raw(_x_x702, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x706 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__run__kv__demo_10120_fun707(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x706); return kk_Unit;
  }
  {
    kk_string_t _x_x710;
    kk_define_string_literal(static, _s_x711, 6, "closed", _ctx)
    _x_x710 = kk_string_dup(_s_x711, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x710, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__run__kv__demo_10121_fun714__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_examples_basic__mlift_hc__run__kv__demo_10121_fun714(kk_function_t _fself, kk_box_t _b_x122, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__run__kv__demo_10121_fun714(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__run__kv__demo_10121_fun714__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__run__kv__demo_10121_fun714__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__run__kv__demo_10121_fun714, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__run__kv__demo_10121_fun714(kk_function_t _fself, kk_box_t _b_x122, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__run__kv__demo_10121_fun714__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__run__kv__demo_10121_fun714__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_unit_t wild___124 = kk_Unit;
  kk_unit_unbox(_b_x122);
  kk_unit_t _x_x715 = kk_Unit;
  kk_examples_basic__mlift_hc__run__kv__demo_10120(db, wild___124, _ctx);
  return kk_unit_box(_x_x715);
}

kk_unit_t kk_examples_basic__mlift_hc__run__kv__demo_10121(kk_sqlite__db db, kk_std_core_types__either _pat_1, kk_context_t* _ctx) { /* (db : sqlite/db, either<string,bool>) -> io () */ 
  kk_std_core_types__either_drop(_pat_1, _ctx);
  kk_unit_t x_10152 = kk_Unit;
  kk_sqlite__db _x_x712 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
  kk_examples_basic_hc__show__kv(_x_x712, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x713 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__run__kv__demo_10121_fun714(db, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x713); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__run__kv__demo_10120(db, x_10152, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__run__kv__demo_10122_fun728__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_examples_basic__mlift_hc__run__kv__demo_10122_fun728(kk_function_t _fself, kk_box_t _b_x134, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__run__kv__demo_10122_fun728(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__run__kv__demo_10122_fun728__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__run__kv__demo_10122_fun728__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__run__kv__demo_10122_fun728, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__run__kv__demo_10122_fun728(kk_function_t _fself, kk_box_t _b_x134, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__run__kv__demo_10122_fun728__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__run__kv__demo_10122_fun728__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_std_core_types__either _pat_1_136 = kk_std_core_types__either_unbox(_b_x134, KK_OWNED, _ctx); /*either<string,bool>*/;
  kk_unit_t _x_x729 = kk_Unit;
  kk_examples_basic__mlift_hc__run__kv__demo_10121(db, _pat_1_136, _ctx);
  return kk_unit_box(_x_x729);
}

kk_unit_t kk_examples_basic__mlift_hc__run__kv__demo_10122(kk_sqlite__db db, kk_std_core_types__either _pat_0, kk_context_t* _ctx) { /* (db : sqlite/db, either<string,bool>) -> io () */ 
  kk_std_core_types__either_drop(_pat_0, _ctx);
  kk_std_core_types__either x_10154;
  kk_sqlite__db _x_x716 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
  kk_string_t _x_x717;
  kk_define_string_literal(static, _s_x718, 28, "INSERT INTO kv VALUES (\?, \?)", _ctx)
  _x_x717 = kk_string_dup(_s_x718, _ctx); /*string*/
  kk_std_core_types__list _x_x719;
  kk_box_t _x_x720;
  kk_string_t _x_x721;
  kk_define_string_literal(static, _s_x722, 2, "db", _ctx)
  _x_x721 = kk_string_dup(_s_x722, _ctx); /*string*/
  _x_x720 = kk_string_box(_x_x721); /*10021*/
  kk_std_core_types__list _x_x723;
  kk_box_t _x_x724;
  kk_string_t _x_x725;
  kk_define_string_literal(static, _s_x726, 6, "sqlite", _ctx)
  _x_x725 = kk_string_dup(_s_x726, _ctx); /*string*/
  _x_x724 = kk_string_box(_x_x725); /*10021*/
  _x_x723 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x724, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _x_x719 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x720, _x_x723, _ctx); /*list<10021>*/
  x_10154 = kk_sqlite_hc__sqlite__exec__p(_x_x716, _x_x717, _x_x719, _ctx); /*either<string,bool>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__either_drop(x_10154, _ctx);
    kk_box_t _x_x727 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__run__kv__demo_10122_fun728(db, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x727); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__run__kv__demo_10121(db, x_10154, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__run__kv__demo_10123_fun742__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_examples_basic__mlift_hc__run__kv__demo_10123_fun742(kk_function_t _fself, kk_box_t _b_x146, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__run__kv__demo_10123_fun742(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__run__kv__demo_10123_fun742__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__run__kv__demo_10123_fun742__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__run__kv__demo_10123_fun742, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__run__kv__demo_10123_fun742(kk_function_t _fself, kk_box_t _b_x146, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__run__kv__demo_10123_fun742__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__run__kv__demo_10123_fun742__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_std_core_types__either _pat_0_1_148 = kk_std_core_types__either_unbox(_b_x146, KK_OWNED, _ctx); /*either<string,bool>*/;
  kk_unit_t _x_x743 = kk_Unit;
  kk_examples_basic__mlift_hc__run__kv__demo_10122(db, _pat_0_1_148, _ctx);
  return kk_unit_box(_x_x743);
}

kk_unit_t kk_examples_basic__mlift_hc__run__kv__demo_10123(kk_sqlite__db db, kk_std_core_types__either _pat, kk_context_t* _ctx) { /* (db : sqlite/db, either<string,bool>) -> io () */ 
  kk_std_core_types__either_drop(_pat, _ctx);
  kk_std_core_types__either x_10156;
  kk_sqlite__db _x_x730 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
  kk_string_t _x_x731;
  kk_define_string_literal(static, _s_x732, 28, "INSERT INTO kv VALUES (\?, \?)", _ctx)
  _x_x731 = kk_string_dup(_s_x732, _ctx); /*string*/
  kk_std_core_types__list _x_x733;
  kk_box_t _x_x734;
  kk_string_t _x_x735;
  kk_define_string_literal(static, _s_x736, 8, "language", _ctx)
  _x_x735 = kk_string_dup(_s_x736, _ctx); /*string*/
  _x_x734 = kk_string_box(_x_x735); /*10021*/
  kk_std_core_types__list _x_x737;
  kk_box_t _x_x738;
  kk_string_t _x_x739;
  kk_define_string_literal(static, _s_x740, 4, "hica", _ctx)
  _x_x739 = kk_string_dup(_s_x740, _ctx); /*string*/
  _x_x738 = kk_string_box(_x_x739); /*10021*/
  _x_x737 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x738, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _x_x733 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x734, _x_x737, _ctx); /*list<10021>*/
  x_10156 = kk_sqlite_hc__sqlite__exec__p(_x_x730, _x_x731, _x_x733, _ctx); /*either<string,bool>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__either_drop(x_10156, _ctx);
    kk_box_t _x_x741 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__run__kv__demo_10123_fun742(db, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x741); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__run__kv__demo_10122(db, x_10156, _ctx); return kk_Unit;
  }
}
 
// .hc:24


// lift anonymous function
struct kk_examples_basic_hc__run__kv__demo_fun748__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_examples_basic_hc__run__kv__demo_fun748(kk_function_t _fself, kk_box_t _b_x150, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__run__kv__demo_fun748(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__run__kv__demo_fun748__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__run__kv__demo_fun748__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__run__kv__demo_fun748, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic_hc__run__kv__demo_fun748(kk_function_t _fself, kk_box_t _b_x150, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__run__kv__demo_fun748__t* _self = kk_function_as(struct kk_examples_basic_hc__run__kv__demo_fun748__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_std_core_types__either _pat_1_186 = kk_std_core_types__either_unbox(_b_x150, KK_OWNED, _ctx); /*either<string,bool>*/;
  kk_unit_t _x_x749 = kk_Unit;
  kk_examples_basic__mlift_hc__run__kv__demo_10123(db, _pat_1_186, _ctx);
  return kk_unit_box(_x_x749);
}


// lift anonymous function
struct kk_examples_basic_hc__run__kv__demo_fun762__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_examples_basic_hc__run__kv__demo_fun762(kk_function_t _fself, kk_box_t _b_x160, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__run__kv__demo_fun762(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__run__kv__demo_fun762__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__run__kv__demo_fun762__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__run__kv__demo_fun762, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic_hc__run__kv__demo_fun762(kk_function_t _fself, kk_box_t _b_x160, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__run__kv__demo_fun762__t* _self = kk_function_as(struct kk_examples_basic_hc__run__kv__demo_fun762__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_std_core_types__either _pat_0_1_187 = kk_std_core_types__either_unbox(_b_x160, KK_OWNED, _ctx); /*either<string,bool>*/;
  kk_unit_t _x_x763 = kk_Unit;
  kk_examples_basic__mlift_hc__run__kv__demo_10122(db, _pat_0_1_187, _ctx);
  return kk_unit_box(_x_x763);
}


// lift anonymous function
struct kk_examples_basic_hc__run__kv__demo_fun776__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_examples_basic_hc__run__kv__demo_fun776(kk_function_t _fself, kk_box_t _b_x170, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__run__kv__demo_fun776(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__run__kv__demo_fun776__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__run__kv__demo_fun776__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__run__kv__demo_fun776, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic_hc__run__kv__demo_fun776(kk_function_t _fself, kk_box_t _b_x170, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__run__kv__demo_fun776__t* _self = kk_function_as(struct kk_examples_basic_hc__run__kv__demo_fun776__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_std_core_types__either _pat_1_0_188 = kk_std_core_types__either_unbox(_b_x170, KK_OWNED, _ctx); /*either<string,bool>*/;
  kk_unit_t _x_x777 = kk_Unit;
  kk_examples_basic__mlift_hc__run__kv__demo_10121(db, _pat_1_0_188, _ctx);
  return kk_unit_box(_x_x777);
}


// lift anonymous function
struct kk_examples_basic_hc__run__kv__demo_fun780__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_examples_basic_hc__run__kv__demo_fun780(kk_function_t _fself, kk_box_t _b_x172, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__run__kv__demo_fun780(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__run__kv__demo_fun780__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__run__kv__demo_fun780__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__run__kv__demo_fun780, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic_hc__run__kv__demo_fun780(kk_function_t _fself, kk_box_t _b_x172, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__run__kv__demo_fun780__t* _self = kk_function_as(struct kk_examples_basic_hc__run__kv__demo_fun780__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_unit_t wild___189 = kk_Unit;
  kk_unit_unbox(_b_x172);
  kk_unit_t _x_x781 = kk_Unit;
  kk_examples_basic__mlift_hc__run__kv__demo_10120(db, wild___189, _ctx);
  return kk_unit_box(_x_x781);
}


// lift anonymous function
struct kk_examples_basic_hc__run__kv__demo_fun784__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__run__kv__demo_fun784(kk_function_t _fself, kk_box_t _b_x175, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__run__kv__demo_fun784(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__run__kv__demo_fun784, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__run__kv__demo_fun784(kk_function_t _fself, kk_box_t _b_x175, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x785;
  kk_sqlite__db _match_x374 = kk_sqlite__db_unbox(_b_x175, KK_OWNED, _ctx); /*sqlite/db*/;
  {
    kk_integer_t _x = _match_x374.h;
    _x_x785 = _x; /*int*/
  }
  return kk_integer_box(_x_x785, _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__run__kv__demo_fun787__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__run__kv__demo_fun787(kk_function_t _fself, kk_box_t _b_x180, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__run__kv__demo_fun787(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__run__kv__demo_fun787, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__run__kv__demo_fun787(kk_function_t _fself, kk_box_t _b_x180, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x788 = kk_Unit;
  kk_unit_t _x_x789 = kk_Unit;
  kk_unit_unbox(_b_x180);
  kk_examples_basic__mlift_hc__run__kv__demo_10119(_x_x789, _ctx);
  return kk_unit_box(_x_x788);
}

kk_unit_t kk_examples_basic_hc__run__kv__demo(kk_sqlite__db db, kk_context_t* _ctx) { /* (db : sqlite/db) -> io () */ 
  kk_std_core_types__either x_10158;
  kk_sqlite__db _x_x744 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
  kk_string_t _x_x745;
  kk_define_string_literal(static, _s_x746, 38, "CREATE TABLE kv (key TEXT, value TEXT)", _ctx)
  _x_x745 = kk_string_dup(_s_x746, _ctx); /*string*/
  x_10158 = kk_sqlite_hc__sqlite__exec(_x_x744, _x_x745, _ctx); /*either<string,bool>*/
  kk_std_core_types__either_drop(x_10158, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x747 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__run__kv__demo_fun748(db, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x747); return kk_Unit;
  }
  {
    kk_std_core_types__either x_0_10161;
    kk_sqlite__db _x_x750 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
    kk_string_t _x_x751;
    kk_define_string_literal(static, _s_x752, 28, "INSERT INTO kv VALUES (\?, \?)", _ctx)
    _x_x751 = kk_string_dup(_s_x752, _ctx); /*string*/
    kk_std_core_types__list _x_x753;
    kk_box_t _x_x754;
    kk_string_t _x_x755;
    kk_define_string_literal(static, _s_x756, 8, "language", _ctx)
    _x_x755 = kk_string_dup(_s_x756, _ctx); /*string*/
    _x_x754 = kk_string_box(_x_x755); /*10021*/
    kk_std_core_types__list _x_x757;
    kk_box_t _x_x758;
    kk_string_t _x_x759;
    kk_define_string_literal(static, _s_x760, 4, "hica", _ctx)
    _x_x759 = kk_string_dup(_s_x760, _ctx); /*string*/
    _x_x758 = kk_string_box(_x_x759); /*10021*/
    _x_x757 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x758, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    _x_x753 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x754, _x_x757, _ctx); /*list<10021>*/
    x_0_10161 = kk_sqlite_hc__sqlite__exec__p(_x_x750, _x_x751, _x_x753, _ctx); /*either<string,bool>*/
    kk_std_core_types__either_drop(x_0_10161, _ctx);
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x761 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__run__kv__demo_fun762(db, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x761); return kk_Unit;
    }
    {
      kk_std_core_types__either x_1_10164;
      kk_sqlite__db _x_x764 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
      kk_string_t _x_x765;
      kk_define_string_literal(static, _s_x766, 28, "INSERT INTO kv VALUES (\?, \?)", _ctx)
      _x_x765 = kk_string_dup(_s_x766, _ctx); /*string*/
      kk_std_core_types__list _x_x767;
      kk_box_t _x_x768;
      kk_string_t _x_x769;
      kk_define_string_literal(static, _s_x770, 2, "db", _ctx)
      _x_x769 = kk_string_dup(_s_x770, _ctx); /*string*/
      _x_x768 = kk_string_box(_x_x769); /*10021*/
      kk_std_core_types__list _x_x771;
      kk_box_t _x_x772;
      kk_string_t _x_x773;
      kk_define_string_literal(static, _s_x774, 6, "sqlite", _ctx)
      _x_x773 = kk_string_dup(_s_x774, _ctx); /*string*/
      _x_x772 = kk_string_box(_x_x773); /*10021*/
      _x_x771 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x772, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
      _x_x767 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x768, _x_x771, _ctx); /*list<10021>*/
      x_1_10164 = kk_sqlite_hc__sqlite__exec__p(_x_x764, _x_x765, _x_x767, _ctx); /*either<string,bool>*/
      kk_std_core_types__either_drop(x_1_10164, _ctx);
      if (kk_yielding(kk_context())) {
        kk_box_t _x_x775 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__run__kv__demo_fun776(db, _ctx), _ctx); /*10001*/
        kk_unit_unbox(_x_x775); return kk_Unit;
      }
      {
        kk_unit_t x_2_10167 = kk_Unit;
        kk_sqlite__db _x_x778 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
        kk_examples_basic_hc__show__kv(_x_x778, _ctx);
        if (kk_yielding(kk_context())) {
          kk_box_t _x_x779 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__run__kv__demo_fun780(db, _ctx), _ctx); /*10001*/
          kk_unit_unbox(_x_x779); return kk_Unit;
        }
        {
          kk_unit_t x_3_10170 = kk_Unit;
          kk_integer_t _x_x782;
          kk_box_t _x_x783 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc__run__kv__demo_fun784(_ctx), kk_sqlite__db_box(db, _ctx), _ctx); /*10001*/
          _x_x782 = kk_integer_unbox(_x_x783, _ctx); /*int*/
          kk_sqlite__ffi_sqlite__close__raw(_x_x782, _ctx);
          if (kk_yielding(kk_context())) {
            kk_box_t _x_x786 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__run__kv__demo_fun787(_ctx), _ctx); /*10001*/
            kk_unit_unbox(_x_x786); return kk_Unit;
          }
          {
            kk_string_t _x_x790;
            kk_define_string_literal(static, _s_x791, 6, "closed", _ctx)
            _x_x790 = kk_string_dup(_s_x791, _ctx); /*string*/
            kk_std_core_console_printsln(_x_x790, _ctx); return kk_Unit;
          }
        }
      }
    }
  }
}
 
// .hc:33

kk_unit_t kk_examples_basic_hc__print__hit__value(kk_sqlite__row row, kk_context_t* _ctx) { /* (row : sqlite/row) -> console/console () */ 
  kk_string_t s_10070;
  kk_std_core_types__maybe _match_x368 = kk_sqlite_hc__row__str(row, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Nothing(_match_x368, _ctx)) {
    kk_define_string_literal(static, _s_x792, 13, "value missing", _ctx)
    s_10070 = kk_string_dup(_s_x792, _ctx); /*string*/
  }
  else {
    kk_box_t _box_x190 = _match_x368._cons.Just.value;
    kk_string_t v = kk_string_unbox(_box_x190);
    kk_string_dup(v, _ctx);
    kk_std_core_types__maybe_drop(_match_x368, _ctx);
    kk_string_t _x_x793;
    kk_define_string_literal(static, _s_x794, 7, "hits = ", _ctx)
    _x_x793 = kk_string_dup(_s_x794, _ctx); /*string*/
    s_10070 = kk_std_core_types__lp__plus__plus__rp_(_x_x793, v, _ctx); /*string*/
  }
  kk_std_core_console_printsln(s_10070, _ctx); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__check__hits_10124_fun801__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__check__hits_10124_fun801(kk_function_t _fself, kk_box_t _b_x198, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__check__hits_10124_fun801(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__check__hits_10124_fun801, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__check__hits_10124_fun801(kk_function_t _fself, kk_box_t _b_x198, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_sqlite__row row_0_201 = kk_sqlite__row_unbox(_b_x198, KK_OWNED, _ctx); /*sqlite/row*/;
  kk_string_t s_10070;
  kk_std_core_types__maybe _match_x367 = kk_sqlite_hc__row__str(row_0_201, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Nothing(_match_x367, _ctx)) {
    kk_define_string_literal(static, _s_x802, 13, "value missing", _ctx)
    s_10070 = kk_string_dup(_s_x802, _ctx); /*string*/
  }
  else {
    kk_box_t _box_x195 = _match_x367._cons.Just.value;
    kk_string_t v = kk_string_unbox(_box_x195);
    kk_string_dup(v, _ctx);
    kk_std_core_types__maybe_drop(_match_x367, _ctx);
    kk_string_t _x_x803;
    kk_define_string_literal(static, _s_x804, 7, "hits = ", _ctx)
    _x_x803 = kk_string_dup(_s_x804, _ctx); /*string*/
    s_10070 = kk_std_core_types__lp__plus__plus__rp_(_x_x803, v, _ctx); /*string*/
  }
  kk_unit_t _x_x805 = kk_Unit;
  kk_std_core_console_printsln(s_10070, _ctx);
  return kk_unit_box(_x_x805);
}

kk_unit_t kk_examples_basic__mlift_hc__check__hits_10124(kk_std_core_types__either _y_x10086, kk_context_t* _ctx) { /* (either<string,maybe<sqlite/row>>) -> io () */ 
  if (kk_std_core_types__is_Left(_y_x10086, _ctx)) {
    kk_box_t _box_x191 = _y_x10086._cons.Left.left;
    kk_string_t e = kk_string_unbox(_box_x191);
    kk_string_dup(e, _ctx);
    kk_std_core_types__either_drop(_y_x10086, _ctx);
    kk_string_t _x_x795;
    kk_string_t _x_x796;
    kk_define_string_literal(static, _s_x797, 18, "query_one failed: ", _ctx)
    _x_x796 = kk_string_dup(_s_x797, _ctx); /*string*/
    _x_x795 = kk_std_core_types__lp__plus__plus__rp_(_x_x796, e, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x795, _ctx); return kk_Unit;
  }
  {
    kk_box_t _box_x192 = _y_x10086._cons.Right.right;
    kk_std_core_types__maybe _pat_1 = kk_std_core_types__maybe_unbox(_box_x192, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nothing(_pat_1, _ctx)) {
      kk_std_core_types__either_drop(_y_x10086, _ctx);
      kk_string_t _x_x798;
      kk_define_string_literal(static, _s_x799, 12, "no row found", _ctx)
      _x_x798 = kk_string_dup(_s_x799, _ctx); /*string*/
      kk_std_core_console_printsln(_x_x798, _ctx); return kk_Unit;
    }
  }
  {
    kk_box_t _box_x193 = _y_x10086._cons.Right.right;
    kk_std_core_types__maybe _pat_3 = kk_std_core_types__maybe_unbox(_box_x193, KK_BORROWED, _ctx);
    kk_box_t _box_x194 = _pat_3._cons.Just.value;
    kk_sqlite__row row = kk_sqlite__row_unbox(_box_x194, KK_BORROWED, _ctx);
    kk_sqlite__row_dup(row, _ctx);
    kk_std_core_types__either_drop(_y_x10086, _ctx);
    kk_box_t _x_x800 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__check__hits_10124_fun801(_ctx), kk_sqlite__row_box(row, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x800); return kk_Unit;
  }
}
 
// .hc:40


// lift anonymous function
struct kk_examples_basic_hc__check__hits_fun813__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__check__hits_fun813(kk_function_t _fself, kk_box_t _b_x207, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__check__hits_fun813(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__check__hits_fun813, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__check__hits_fun813(kk_function_t _fself, kk_box_t _b_x207, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x814 = kk_Unit;
  kk_std_core_types__either _x_x815 = kk_std_core_types__either_unbox(_b_x207, KK_OWNED, _ctx); /*either<string,maybe<sqlite/row>>*/
  kk_examples_basic__mlift_hc__check__hits_10124(_x_x815, _ctx);
  return kk_unit_box(_x_x814);
}


// lift anonymous function
struct kk_examples_basic_hc__check__hits_fun822__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__check__hits_fun822(kk_function_t _fself, kk_box_t _b_x215, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__check__hits_fun822(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__check__hits_fun822, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__check__hits_fun822(kk_function_t _fself, kk_box_t _b_x215, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_sqlite__row row_0_219 = kk_sqlite__row_unbox(_b_x215, KK_OWNED, _ctx); /*sqlite/row*/;
  kk_string_t s_10070;
  kk_std_core_types__maybe _match_x366 = kk_sqlite_hc__row__str(row_0_219, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Nothing(_match_x366, _ctx)) {
    kk_define_string_literal(static, _s_x823, 13, "value missing", _ctx)
    s_10070 = kk_string_dup(_s_x823, _ctx); /*string*/
  }
  else {
    kk_box_t _box_x212 = _match_x366._cons.Just.value;
    kk_string_t v = kk_string_unbox(_box_x212);
    kk_string_dup(v, _ctx);
    kk_std_core_types__maybe_drop(_match_x366, _ctx);
    kk_string_t _x_x824;
    kk_define_string_literal(static, _s_x825, 7, "hits = ", _ctx)
    _x_x824 = kk_string_dup(_s_x825, _ctx); /*string*/
    s_10070 = kk_std_core_types__lp__plus__plus__rp_(_x_x824, v, _ctx); /*string*/
  }
  kk_unit_t _x_x826 = kk_Unit;
  kk_std_core_console_printsln(s_10070, _ctx);
  return kk_unit_box(_x_x826);
}

kk_unit_t kk_examples_basic_hc__check__hits(kk_sqlite__db db, kk_context_t* _ctx) { /* (db : sqlite/db) -> io () */ 
  kk_std_core_types__either x_10173;
  kk_string_t _x_x806;
  kk_define_string_literal(static, _s_x807, 37, "SELECT n FROM counters WHERE name = \?", _ctx)
  _x_x806 = kk_string_dup(_s_x807, _ctx); /*string*/
  kk_std_core_types__list _x_x808;
  kk_box_t _x_x809;
  kk_string_t _x_x810;
  kk_define_string_literal(static, _s_x811, 4, "hits", _ctx)
  _x_x810 = kk_string_dup(_s_x811, _ctx); /*string*/
  _x_x809 = kk_string_box(_x_x810); /*10021*/
  _x_x808 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x809, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  x_10173 = kk_sqlite_hc__sqlite__query__one(db, _x_x806, _x_x808, _ctx); /*either<string,maybe<sqlite/row>>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__either_drop(x_10173, _ctx);
    kk_box_t _x_x812 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__check__hits_fun813(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x812); return kk_Unit;
  }
  if (kk_std_core_types__is_Left(x_10173, _ctx)) {
    kk_box_t _box_x208 = x_10173._cons.Left.left;
    kk_string_t e = kk_string_unbox(_box_x208);
    kk_string_dup(e, _ctx);
    kk_std_core_types__either_drop(x_10173, _ctx);
    kk_string_t _x_x816;
    kk_string_t _x_x817;
    kk_define_string_literal(static, _s_x818, 18, "query_one failed: ", _ctx)
    _x_x817 = kk_string_dup(_s_x818, _ctx); /*string*/
    _x_x816 = kk_std_core_types__lp__plus__plus__rp_(_x_x817, e, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x816, _ctx); return kk_Unit;
  }
  {
    kk_box_t _box_x209 = x_10173._cons.Right.right;
    kk_std_core_types__maybe _pat_1_0 = kk_std_core_types__maybe_unbox(_box_x209, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nothing(_pat_1_0, _ctx)) {
      kk_std_core_types__either_drop(x_10173, _ctx);
      kk_string_t _x_x819;
      kk_define_string_literal(static, _s_x820, 12, "no row found", _ctx)
      _x_x819 = kk_string_dup(_s_x820, _ctx); /*string*/
      kk_std_core_console_printsln(_x_x819, _ctx); return kk_Unit;
    }
  }
  {
    kk_box_t _box_x210 = x_10173._cons.Right.right;
    kk_std_core_types__maybe _pat_3 = kk_std_core_types__maybe_unbox(_box_x210, KK_BORROWED, _ctx);
    kk_box_t _box_x211 = _pat_3._cons.Just.value;
    kk_sqlite__row row = kk_sqlite__row_unbox(_box_x211, KK_BORROWED, _ctx);
    kk_sqlite__row_dup(row, _ctx);
    kk_std_core_types__either_drop(x_10173, _ctx);
    kk_box_t _x_x821 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc__check__hits_fun822(_ctx), kk_sqlite__row_box(row, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x821); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__print__table__exists_10125_fun835__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__print__table__exists_10125_fun835(kk_function_t _fself, kk_box_t _b_x224, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__print__table__exists_10125_fun835(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__print__table__exists_10125_fun835, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__print__table__exists_10125_fun835(kk_function_t _fself, kk_box_t _b_x224, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x836;
  bool b_227 = kk_bool_unbox(_b_x224); /*bool*/;
  if (b_227) {
    kk_define_string_literal(static, _s_x837, 4, "True", _ctx)
    _x_x836 = kk_string_dup(_s_x837, _ctx); /*string*/
  }
  else {
    kk_define_string_literal(static, _s_x838, 5, "False", _ctx)
    _x_x836 = kk_string_dup(_s_x838, _ctx); /*string*/
  }
  return kk_string_box(_x_x836);
}

kk_unit_t kk_examples_basic__mlift_hc__print__table__exists_10125(kk_string_t name, kk_std_core_types__either _y_x10088, kk_context_t* _ctx) { /* (name : string, either<string,bool>) -> io () */ 
  kk_string_t _x_x827;
  if (kk_std_core_types__is_Left(_y_x10088, _ctx)) {
    kk_box_t _box_x220 = _y_x10088._cons.Left.left;
    kk_string_t e = kk_string_unbox(_box_x220);
    kk_string_drop(name, _ctx);
    kk_string_dup(e, _ctx);
    kk_std_core_types__either_drop(_y_x10088, _ctx);
    kk_string_t _x_x828;
    kk_define_string_literal(static, _s_x829, 21, "table_exists failed: ", _ctx)
    _x_x828 = kk_string_dup(_s_x829, _ctx); /*string*/
    _x_x827 = kk_std_core_types__lp__plus__plus__rp_(_x_x828, e, _ctx); /*string*/
  }
  else {
    kk_box_t _box_x221 = _y_x10088._cons.Right.right;
    bool found = kk_bool_unbox(_box_x221);
    kk_std_core_types__either_drop(_y_x10088, _ctx);
    kk_string_t _x_x830;
    kk_string_t _x_x831;
    kk_define_string_literal(static, _s_x832, 15, " table exists: ", _ctx)
    _x_x831 = kk_string_dup(_s_x832, _ctx); /*string*/
    _x_x830 = kk_std_core_types__lp__plus__plus__rp_(name, _x_x831, _ctx); /*string*/
    kk_string_t _x_x833;
    kk_box_t _x_x834 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__print__table__exists_10125_fun835(_ctx), kk_bool_box(found), _ctx); /*10001*/
    _x_x833 = kk_string_unbox(_x_x834); /*string*/
    _x_x827 = kk_std_core_types__lp__plus__plus__rp_(_x_x830, _x_x833, _ctx); /*string*/
  }
  kk_std_core_console_printsln(_x_x827, _ctx); return kk_Unit;
}
 
// .hc:48


// lift anonymous function
struct kk_examples_basic_hc__print__table__exists_fun841__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static kk_box_t kk_examples_basic_hc__print__table__exists_fun841(kk_function_t _fself, kk_box_t _b_x229, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__print__table__exists_fun841(kk_string_t name, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__print__table__exists_fun841__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__print__table__exists_fun841__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__print__table__exists_fun841, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic_hc__print__table__exists_fun841(kk_function_t _fself, kk_box_t _b_x229, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__print__table__exists_fun841__t* _self = kk_function_as(struct kk_examples_basic_hc__print__table__exists_fun841__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_std_core_types__either _y_x10088_238 = kk_std_core_types__either_unbox(_b_x229, KK_OWNED, _ctx); /*either<string,bool>*/;
  kk_unit_t _x_x842 = kk_Unit;
  kk_examples_basic__mlift_hc__print__table__exists_10125(name, _y_x10088_238, _ctx);
  return kk_unit_box(_x_x842);
}


// lift anonymous function
struct kk_examples_basic_hc__print__table__exists_fun851__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__print__table__exists_fun851(kk_function_t _fself, kk_box_t _b_x234, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__print__table__exists_fun851(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__print__table__exists_fun851, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__print__table__exists_fun851(kk_function_t _fself, kk_box_t _b_x234, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x852;
  bool b_239 = kk_bool_unbox(_b_x234); /*bool*/;
  if (b_239) {
    kk_define_string_literal(static, _s_x853, 4, "True", _ctx)
    _x_x852 = kk_string_dup(_s_x853, _ctx); /*string*/
  }
  else {
    kk_define_string_literal(static, _s_x854, 5, "False", _ctx)
    _x_x852 = kk_string_dup(_s_x854, _ctx); /*string*/
  }
  return kk_string_box(_x_x852);
}

kk_unit_t kk_examples_basic_hc__print__table__exists(kk_sqlite__db db, kk_string_t name, kk_context_t* _ctx) { /* (db : sqlite/db, name : string) -> io () */ 
  kk_std_core_types__either x_10176;
  kk_string_t _x_x839 = kk_string_dup(name, _ctx); /*string*/
  x_10176 = kk_sqlite_hc__sqlite__table__exists(db, _x_x839, _ctx); /*either<string,bool>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__either_drop(x_10176, _ctx);
    kk_box_t _x_x840 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__print__table__exists_fun841(name, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x840); return kk_Unit;
  }
  {
    kk_string_t _x_x843;
    if (kk_std_core_types__is_Left(x_10176, _ctx)) {
      kk_box_t _box_x230 = x_10176._cons.Left.left;
      kk_string_t e = kk_string_unbox(_box_x230);
      kk_string_dup(e, _ctx);
      kk_std_core_types__either_drop(x_10176, _ctx);
      kk_string_drop(name, _ctx);
      kk_string_t _x_x844;
      kk_define_string_literal(static, _s_x845, 21, "table_exists failed: ", _ctx)
      _x_x844 = kk_string_dup(_s_x845, _ctx); /*string*/
      _x_x843 = kk_std_core_types__lp__plus__plus__rp_(_x_x844, e, _ctx); /*string*/
    }
    else {
      kk_box_t _box_x231 = x_10176._cons.Right.right;
      bool found = kk_bool_unbox(_box_x231);
      kk_std_core_types__either_drop(x_10176, _ctx);
      kk_string_t _x_x846;
      kk_string_t _x_x847;
      kk_define_string_literal(static, _s_x848, 15, " table exists: ", _ctx)
      _x_x847 = kk_string_dup(_s_x848, _ctx); /*string*/
      _x_x846 = kk_std_core_types__lp__plus__plus__rp_(name, _x_x847, _ctx); /*string*/
      kk_string_t _x_x849;
      kk_box_t _x_x850 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc__print__table__exists_fun851(_ctx), kk_bool_box(found), _ctx); /*10001*/
      _x_x849 = kk_string_unbox(_x_x850); /*string*/
      _x_x843 = kk_std_core_types__lp__plus__plus__rp_(_x_x846, _x_x849, _ctx); /*string*/
    }
    kk_std_core_console_printsln(_x_x843, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__run__counters_10127_fun861__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__run__counters_10127_fun861(kk_function_t _fself, kk_box_t _b_x242, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__run__counters_10127_fun861(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__run__counters_10127_fun861, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__run__counters_10127_fun861(kk_function_t _fself, kk_box_t _b_x242, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x862;
  kk_sqlite__db _match_x363 = kk_sqlite__db_unbox(_b_x242, KK_OWNED, _ctx); /*sqlite/db*/;
  {
    kk_integer_t _x = _match_x363.h;
    _x_x862 = _x; /*int*/
  }
  return kk_integer_box(_x_x862, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__run__counters_10127_fun864__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__run__counters_10127_fun864(kk_function_t _fself, kk_box_t _b_x247, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__run__counters_10127_fun864(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__run__counters_10127_fun864, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__run__counters_10127_fun864(kk_function_t _fself, kk_box_t _b_x247, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x865 = kk_Unit;
  kk_integer_t _x_x866 = kk_integer_unbox(_b_x247, _ctx); /*int*/
  kk_examples_basic__mlift_hc__run__counters_10126(_x_x866, _ctx);
  return kk_unit_box(_x_x865);
}

kk_unit_t kk_examples_basic__mlift_hc__run__counters_10127(kk_sqlite__db db, kk_unit_t wild___0, kk_context_t* _ctx) { /* (db : sqlite/db, wild_@0 : ()) -> io () */ 
  kk_integer_t x_10179;
  kk_integer_t _x_x859;
  kk_box_t _x_x860 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__run__counters_10127_fun861(_ctx), kk_sqlite__db_box(db, _ctx), _ctx); /*10001*/
  _x_x859 = kk_integer_unbox(_x_x860, _ctx); /*int*/
  x_10179 = kk_sqlite__ffi_sqlite__changes__raw(_x_x859, _ctx); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_10179, _ctx);
    kk_box_t _x_x863 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__run__counters_10127_fun864(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x863); return kk_Unit;
  }
  {
    kk_string_t _x_x867;
    kk_string_t _x_x868;
    kk_define_string_literal(static, _s_x869, 16, "changes so far: ", _ctx)
    _x_x868 = kk_string_dup(_s_x869, _ctx); /*string*/
    kk_string_t _x_x870 = kk_std_core_int_show(x_10179, _ctx); /*string*/
    _x_x867 = kk_std_core_types__lp__plus__plus__rp_(_x_x868, _x_x870, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x867, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__run__counters_10128_fun875__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_examples_basic__mlift_hc__run__counters_10128_fun875(kk_function_t _fself, kk_box_t _b_x250, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__run__counters_10128_fun875(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__run__counters_10128_fun875__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__run__counters_10128_fun875__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__run__counters_10128_fun875, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__run__counters_10128_fun875(kk_function_t _fself, kk_box_t _b_x250, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__run__counters_10128_fun875__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__run__counters_10128_fun875__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_unit_t wild___0_252 = kk_Unit;
  kk_unit_unbox(_b_x250);
  kk_unit_t _x_x876 = kk_Unit;
  kk_examples_basic__mlift_hc__run__counters_10127(db, wild___0_252, _ctx);
  return kk_unit_box(_x_x876);
}

kk_unit_t kk_examples_basic__mlift_hc__run__counters_10128(kk_sqlite__db db, kk_unit_t wild__, kk_context_t* _ctx) { /* (db : sqlite/db, wild_ : ()) -> io () */ 
  kk_unit_t x_10181 = kk_Unit;
  kk_sqlite__db _x_x871 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
  kk_string_t _x_x872;
  kk_define_string_literal(static, _s_x873, 8, "counters", _ctx)
  _x_x872 = kk_string_dup(_s_x873, _ctx); /*string*/
  kk_examples_basic_hc__print__table__exists(_x_x871, _x_x872, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x874 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__run__counters_10128_fun875(db, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x874); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__run__counters_10127(db, x_10181, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__run__counters_10129_fun879__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_examples_basic__mlift_hc__run__counters_10129_fun879(kk_function_t _fself, kk_box_t _b_x254, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__run__counters_10129_fun879(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__run__counters_10129_fun879__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__run__counters_10129_fun879__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__run__counters_10129_fun879, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__run__counters_10129_fun879(kk_function_t _fself, kk_box_t _b_x254, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__run__counters_10129_fun879__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__run__counters_10129_fun879__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_unit_t wild___256 = kk_Unit;
  kk_unit_unbox(_b_x254);
  kk_unit_t _x_x880 = kk_Unit;
  kk_examples_basic__mlift_hc__run__counters_10128(db, wild___256, _ctx);
  return kk_unit_box(_x_x880);
}

kk_unit_t kk_examples_basic__mlift_hc__run__counters_10129(kk_sqlite__db db, kk_std_core_types__either _pat_1, kk_context_t* _ctx) { /* (db : sqlite/db, either<string,bool>) -> io () */ 
  kk_std_core_types__either_drop(_pat_1, _ctx);
  kk_unit_t x_10183 = kk_Unit;
  kk_sqlite__db _x_x877 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
  kk_examples_basic_hc__check__hits(_x_x877, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x878 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__run__counters_10129_fun879(db, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x878); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__run__counters_10128(db, x_10183, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__run__counters_10130_fun893__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_examples_basic__mlift_hc__run__counters_10130_fun893(kk_function_t _fself, kk_box_t _b_x266, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__run__counters_10130_fun893(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__run__counters_10130_fun893__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__run__counters_10130_fun893__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__run__counters_10130_fun893, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__run__counters_10130_fun893(kk_function_t _fself, kk_box_t _b_x266, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__run__counters_10130_fun893__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__run__counters_10130_fun893__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_std_core_types__either _pat_1_268 = kk_std_core_types__either_unbox(_b_x266, KK_OWNED, _ctx); /*either<string,bool>*/;
  kk_unit_t _x_x894 = kk_Unit;
  kk_examples_basic__mlift_hc__run__counters_10129(db, _pat_1_268, _ctx);
  return kk_unit_box(_x_x894);
}

kk_unit_t kk_examples_basic__mlift_hc__run__counters_10130(kk_sqlite__db db, kk_std_core_types__either _pat_0, kk_context_t* _ctx) { /* (db : sqlite/db, either<string,bool>) -> io () */ 
  kk_std_core_types__either_drop(_pat_0, _ctx);
  kk_std_core_types__either x_10185;
  kk_sqlite__db _x_x881 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
  kk_string_t _x_x882;
  kk_define_string_literal(static, _s_x883, 34, "INSERT INTO counters VALUES (\?, \?)", _ctx)
  _x_x882 = kk_string_dup(_s_x883, _ctx); /*string*/
  kk_std_core_types__list _x_x884;
  kk_box_t _x_x885;
  kk_string_t _x_x886;
  kk_define_string_literal(static, _s_x887, 6, "misses", _ctx)
  _x_x886 = kk_string_dup(_s_x887, _ctx); /*string*/
  _x_x885 = kk_string_box(_x_x886); /*10021*/
  kk_std_core_types__list _x_x888;
  kk_box_t _x_x889;
  kk_string_t _x_x890;
  kk_define_string_literal(static, _s_x891, 1, "7", _ctx)
  _x_x890 = kk_string_dup(_s_x891, _ctx); /*string*/
  _x_x889 = kk_string_box(_x_x890); /*10021*/
  _x_x888 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x889, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _x_x884 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x885, _x_x888, _ctx); /*list<10021>*/
  x_10185 = kk_sqlite_hc__sqlite__exec__p(_x_x881, _x_x882, _x_x884, _ctx); /*either<string,bool>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__either_drop(x_10185, _ctx);
    kk_box_t _x_x892 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__run__counters_10130_fun893(db, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x892); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__run__counters_10129(db, x_10185, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__run__counters_10131_fun907__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_examples_basic__mlift_hc__run__counters_10131_fun907(kk_function_t _fself, kk_box_t _b_x278, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__run__counters_10131_fun907(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__run__counters_10131_fun907__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__run__counters_10131_fun907__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__run__counters_10131_fun907, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__run__counters_10131_fun907(kk_function_t _fself, kk_box_t _b_x278, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__run__counters_10131_fun907__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__run__counters_10131_fun907__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_std_core_types__either _pat_0_1_280 = kk_std_core_types__either_unbox(_b_x278, KK_OWNED, _ctx); /*either<string,bool>*/;
  kk_unit_t _x_x908 = kk_Unit;
  kk_examples_basic__mlift_hc__run__counters_10130(db, _pat_0_1_280, _ctx);
  return kk_unit_box(_x_x908);
}

kk_unit_t kk_examples_basic__mlift_hc__run__counters_10131(kk_sqlite__db db, kk_std_core_types__either _pat, kk_context_t* _ctx) { /* (db : sqlite/db, either<string,bool>) -> io () */ 
  kk_std_core_types__either_drop(_pat, _ctx);
  kk_std_core_types__either x_10187;
  kk_sqlite__db _x_x895 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
  kk_string_t _x_x896;
  kk_define_string_literal(static, _s_x897, 34, "INSERT INTO counters VALUES (\?, \?)", _ctx)
  _x_x896 = kk_string_dup(_s_x897, _ctx); /*string*/
  kk_std_core_types__list _x_x898;
  kk_box_t _x_x899;
  kk_string_t _x_x900;
  kk_define_string_literal(static, _s_x901, 4, "hits", _ctx)
  _x_x900 = kk_string_dup(_s_x901, _ctx); /*string*/
  _x_x899 = kk_string_box(_x_x900); /*10021*/
  kk_std_core_types__list _x_x902;
  kk_box_t _x_x903;
  kk_string_t _x_x904;
  kk_define_string_literal(static, _s_x905, 2, "42", _ctx)
  _x_x904 = kk_string_dup(_s_x905, _ctx); /*string*/
  _x_x903 = kk_string_box(_x_x904); /*10021*/
  _x_x902 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x903, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _x_x898 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x899, _x_x902, _ctx); /*list<10021>*/
  x_10187 = kk_sqlite_hc__sqlite__exec__p(_x_x895, _x_x896, _x_x898, _ctx); /*either<string,bool>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__either_drop(x_10187, _ctx);
    kk_box_t _x_x906 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__run__counters_10131_fun907(db, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x906); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__run__counters_10130(db, x_10187, _ctx); return kk_Unit;
  }
}
 
// .hc:55


// lift anonymous function
struct kk_examples_basic_hc__run__counters_fun913__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_examples_basic_hc__run__counters_fun913(kk_function_t _fself, kk_box_t _b_x282, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__run__counters_fun913(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__run__counters_fun913__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__run__counters_fun913__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__run__counters_fun913, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic_hc__run__counters_fun913(kk_function_t _fself, kk_box_t _b_x282, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__run__counters_fun913__t* _self = kk_function_as(struct kk_examples_basic_hc__run__counters_fun913__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_std_core_types__either _pat_1_321 = kk_std_core_types__either_unbox(_b_x282, KK_OWNED, _ctx); /*either<string,bool>*/;
  kk_unit_t _x_x914 = kk_Unit;
  kk_examples_basic__mlift_hc__run__counters_10131(db, _pat_1_321, _ctx);
  return kk_unit_box(_x_x914);
}


// lift anonymous function
struct kk_examples_basic_hc__run__counters_fun927__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_examples_basic_hc__run__counters_fun927(kk_function_t _fself, kk_box_t _b_x292, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__run__counters_fun927(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__run__counters_fun927__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__run__counters_fun927__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__run__counters_fun927, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic_hc__run__counters_fun927(kk_function_t _fself, kk_box_t _b_x292, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__run__counters_fun927__t* _self = kk_function_as(struct kk_examples_basic_hc__run__counters_fun927__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_std_core_types__either _pat_0_1_322 = kk_std_core_types__either_unbox(_b_x292, KK_OWNED, _ctx); /*either<string,bool>*/;
  kk_unit_t _x_x928 = kk_Unit;
  kk_examples_basic__mlift_hc__run__counters_10130(db, _pat_0_1_322, _ctx);
  return kk_unit_box(_x_x928);
}


// lift anonymous function
struct kk_examples_basic_hc__run__counters_fun941__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_examples_basic_hc__run__counters_fun941(kk_function_t _fself, kk_box_t _b_x302, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__run__counters_fun941(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__run__counters_fun941__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__run__counters_fun941__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__run__counters_fun941, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic_hc__run__counters_fun941(kk_function_t _fself, kk_box_t _b_x302, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__run__counters_fun941__t* _self = kk_function_as(struct kk_examples_basic_hc__run__counters_fun941__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_std_core_types__either _pat_1_0_323 = kk_std_core_types__either_unbox(_b_x302, KK_OWNED, _ctx); /*either<string,bool>*/;
  kk_unit_t _x_x942 = kk_Unit;
  kk_examples_basic__mlift_hc__run__counters_10129(db, _pat_1_0_323, _ctx);
  return kk_unit_box(_x_x942);
}


// lift anonymous function
struct kk_examples_basic_hc__run__counters_fun945__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_examples_basic_hc__run__counters_fun945(kk_function_t _fself, kk_box_t _b_x304, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__run__counters_fun945(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__run__counters_fun945__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__run__counters_fun945__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__run__counters_fun945, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic_hc__run__counters_fun945(kk_function_t _fself, kk_box_t _b_x304, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__run__counters_fun945__t* _self = kk_function_as(struct kk_examples_basic_hc__run__counters_fun945__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_unit_t wild___324 = kk_Unit;
  kk_unit_unbox(_b_x304);
  kk_unit_t _x_x946 = kk_Unit;
  kk_examples_basic__mlift_hc__run__counters_10128(db, wild___324, _ctx);
  return kk_unit_box(_x_x946);
}


// lift anonymous function
struct kk_examples_basic_hc__run__counters_fun951__t {
  struct kk_function_s _base;
  kk_sqlite__db db;
};
static kk_box_t kk_examples_basic_hc__run__counters_fun951(kk_function_t _fself, kk_box_t _b_x306, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__run__counters_fun951(kk_sqlite__db db, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__run__counters_fun951__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__run__counters_fun951__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__run__counters_fun951, kk_context());
  _self->db = db;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic_hc__run__counters_fun951(kk_function_t _fself, kk_box_t _b_x306, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__run__counters_fun951__t* _self = kk_function_as(struct kk_examples_basic_hc__run__counters_fun951__t*, _fself, _ctx);
  kk_sqlite__db db = _self->db; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(db, _ctx);}, {}, _ctx)
  kk_unit_t wild___0_325 = kk_Unit;
  kk_unit_unbox(_b_x306);
  kk_unit_t _x_x952 = kk_Unit;
  kk_examples_basic__mlift_hc__run__counters_10127(db, wild___0_325, _ctx);
  return kk_unit_box(_x_x952);
}


// lift anonymous function
struct kk_examples_basic_hc__run__counters_fun955__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__run__counters_fun955(kk_function_t _fself, kk_box_t _b_x309, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__run__counters_fun955(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__run__counters_fun955, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__run__counters_fun955(kk_function_t _fself, kk_box_t _b_x309, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x956;
  kk_sqlite__db _match_x357 = kk_sqlite__db_unbox(_b_x309, KK_OWNED, _ctx); /*sqlite/db*/;
  {
    kk_integer_t _x = _match_x357.h;
    _x_x956 = _x; /*int*/
  }
  return kk_integer_box(_x_x956, _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__run__counters_fun958__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__run__counters_fun958(kk_function_t _fself, kk_box_t _b_x314, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__run__counters_fun958(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__run__counters_fun958, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__run__counters_fun958(kk_function_t _fself, kk_box_t _b_x314, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x959 = kk_Unit;
  kk_integer_t _x_x960 = kk_integer_unbox(_b_x314, _ctx); /*int*/
  kk_examples_basic__mlift_hc__run__counters_10126(_x_x960, _ctx);
  return kk_unit_box(_x_x959);
}

kk_unit_t kk_examples_basic_hc__run__counters(kk_sqlite__db db, kk_context_t* _ctx) { /* (db : sqlite/db) -> io () */ 
  kk_std_core_types__either x_10189;
  kk_sqlite__db _x_x909 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
  kk_string_t _x_x910;
  kk_define_string_literal(static, _s_x911, 40, "CREATE TABLE counters (name TEXT, n INT)", _ctx)
  _x_x910 = kk_string_dup(_s_x911, _ctx); /*string*/
  x_10189 = kk_sqlite_hc__sqlite__exec(_x_x909, _x_x910, _ctx); /*either<string,bool>*/
  kk_std_core_types__either_drop(x_10189, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x912 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__run__counters_fun913(db, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x912); return kk_Unit;
  }
  {
    kk_std_core_types__either x_0_10192;
    kk_sqlite__db _x_x915 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
    kk_string_t _x_x916;
    kk_define_string_literal(static, _s_x917, 34, "INSERT INTO counters VALUES (\?, \?)", _ctx)
    _x_x916 = kk_string_dup(_s_x917, _ctx); /*string*/
    kk_std_core_types__list _x_x918;
    kk_box_t _x_x919;
    kk_string_t _x_x920;
    kk_define_string_literal(static, _s_x921, 4, "hits", _ctx)
    _x_x920 = kk_string_dup(_s_x921, _ctx); /*string*/
    _x_x919 = kk_string_box(_x_x920); /*10021*/
    kk_std_core_types__list _x_x922;
    kk_box_t _x_x923;
    kk_string_t _x_x924;
    kk_define_string_literal(static, _s_x925, 2, "42", _ctx)
    _x_x924 = kk_string_dup(_s_x925, _ctx); /*string*/
    _x_x923 = kk_string_box(_x_x924); /*10021*/
    _x_x922 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x923, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    _x_x918 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x919, _x_x922, _ctx); /*list<10021>*/
    x_0_10192 = kk_sqlite_hc__sqlite__exec__p(_x_x915, _x_x916, _x_x918, _ctx); /*either<string,bool>*/
    kk_std_core_types__either_drop(x_0_10192, _ctx);
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x926 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__run__counters_fun927(db, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x926); return kk_Unit;
    }
    {
      kk_std_core_types__either x_1_10195;
      kk_sqlite__db _x_x929 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
      kk_string_t _x_x930;
      kk_define_string_literal(static, _s_x931, 34, "INSERT INTO counters VALUES (\?, \?)", _ctx)
      _x_x930 = kk_string_dup(_s_x931, _ctx); /*string*/
      kk_std_core_types__list _x_x932;
      kk_box_t _x_x933;
      kk_string_t _x_x934;
      kk_define_string_literal(static, _s_x935, 6, "misses", _ctx)
      _x_x934 = kk_string_dup(_s_x935, _ctx); /*string*/
      _x_x933 = kk_string_box(_x_x934); /*10021*/
      kk_std_core_types__list _x_x936;
      kk_box_t _x_x937;
      kk_string_t _x_x938;
      kk_define_string_literal(static, _s_x939, 1, "7", _ctx)
      _x_x938 = kk_string_dup(_s_x939, _ctx); /*string*/
      _x_x937 = kk_string_box(_x_x938); /*10021*/
      _x_x936 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x937, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
      _x_x932 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x933, _x_x936, _ctx); /*list<10021>*/
      x_1_10195 = kk_sqlite_hc__sqlite__exec__p(_x_x929, _x_x930, _x_x932, _ctx); /*either<string,bool>*/
      kk_std_core_types__either_drop(x_1_10195, _ctx);
      if (kk_yielding(kk_context())) {
        kk_box_t _x_x940 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__run__counters_fun941(db, _ctx), _ctx); /*10001*/
        kk_unit_unbox(_x_x940); return kk_Unit;
      }
      {
        kk_unit_t x_2_10198 = kk_Unit;
        kk_sqlite__db _x_x943 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
        kk_examples_basic_hc__check__hits(_x_x943, _ctx);
        if (kk_yielding(kk_context())) {
          kk_box_t _x_x944 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__run__counters_fun945(db, _ctx), _ctx); /*10001*/
          kk_unit_unbox(_x_x944); return kk_Unit;
        }
        {
          kk_unit_t x_3_10201 = kk_Unit;
          kk_sqlite__db _x_x947 = kk_sqlite__db_dup(db, _ctx); /*sqlite/db*/
          kk_string_t _x_x948;
          kk_define_string_literal(static, _s_x949, 8, "counters", _ctx)
          _x_x948 = kk_string_dup(_s_x949, _ctx); /*string*/
          kk_examples_basic_hc__print__table__exists(_x_x947, _x_x948, _ctx);
          if (kk_yielding(kk_context())) {
            kk_box_t _x_x950 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__run__counters_fun951(db, _ctx), _ctx); /*10001*/
            kk_unit_unbox(_x_x950); return kk_Unit;
          }
          {
            kk_integer_t x_4_10204;
            kk_integer_t _x_x953;
            kk_box_t _x_x954 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc__run__counters_fun955(_ctx), kk_sqlite__db_box(db, _ctx), _ctx); /*10001*/
            _x_x953 = kk_integer_unbox(_x_x954, _ctx); /*int*/
            x_4_10204 = kk_sqlite__ffi_sqlite__changes__raw(_x_x953, _ctx); /*int*/
            if (kk_yielding(kk_context())) {
              kk_integer_drop(x_4_10204, _ctx);
              kk_box_t _x_x957 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__run__counters_fun958(_ctx), _ctx); /*10001*/
              kk_unit_unbox(_x_x957); return kk_Unit;
            }
            {
              kk_string_t _x_x961;
              kk_string_t _x_x962;
              kk_define_string_literal(static, _s_x963, 16, "changes so far: ", _ctx)
              _x_x962 = kk_string_dup(_s_x963, _ctx); /*string*/
              kk_string_t _x_x964 = kk_std_core_int_show(x_4_10204, _ctx); /*string*/
              _x_x961 = kk_std_core_types__lp__plus__plus__rp_(_x_x962, _x_x964, _ctx); /*string*/
              kk_std_core_console_printsln(_x_x961, _ctx); return kk_Unit;
            }
          }
        }
      }
    }
  }
}
 
// monadic lift

kk_unit_t kk_examples_basic__mlift_hc__demo__open__close_10132(kk_std_core_types__either _y_x10096, kk_context_t* _ctx) { /* (either<string,sqlite/db>) -> io () */ 
  if (kk_std_core_types__is_Left(_y_x10096, _ctx)) {
    kk_box_t _box_x326 = _y_x10096._cons.Left.left;
    kk_string_t e = kk_string_unbox(_box_x326);
    kk_string_dup(e, _ctx);
    kk_std_core_types__either_drop(_y_x10096, _ctx);
    kk_string_t _x_x965;
    kk_string_t _x_x966;
    kk_define_string_literal(static, _s_x967, 13, "open failed: ", _ctx)
    _x_x966 = kk_string_dup(_s_x967, _ctx); /*string*/
    _x_x965 = kk_std_core_types__lp__plus__plus__rp_(_x_x966, e, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x965, _ctx); return kk_Unit;
  }
  {
    kk_box_t _box_x327 = _y_x10096._cons.Right.right;
    kk_sqlite__db db = kk_sqlite__db_unbox(_box_x327, KK_BORROWED, _ctx);
    kk_sqlite__db_dup(db, _ctx);
    kk_std_core_types__either_drop(_y_x10096, _ctx);
    kk_examples_basic_hc__run__kv__demo(db, _ctx); return kk_Unit;
  }
}
 
// .hc:70


// lift anonymous function
struct kk_examples_basic_hc__demo__open__close_fun973__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__demo__open__close_fun973(kk_function_t _fself, kk_box_t _b_x329, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__demo__open__close_fun973(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__demo__open__close_fun973, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__demo__open__close_fun973(kk_function_t _fself, kk_box_t _b_x329, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x974 = kk_Unit;
  kk_std_core_types__either _x_x975 = kk_std_core_types__either_unbox(_b_x329, KK_OWNED, _ctx); /*either<string,sqlite/db>*/
  kk_examples_basic__mlift_hc__demo__open__close_10132(_x_x975, _ctx);
  return kk_unit_box(_x_x974);
}

kk_unit_t kk_examples_basic_hc__demo__open__close(kk_context_t* _ctx) { /* () -> io () */ 
  kk_unit_t __ = kk_Unit;
  kk_string_t _x_x968;
  kk_define_string_literal(static, _s_x969, 18, "--- open/close ---", _ctx)
  _x_x968 = kk_string_dup(_s_x969, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x968, _ctx);
  kk_std_core_types__either x_10207;
  kk_string_t _x_x970;
  kk_define_string_literal(static, _s_x971, 8, ":memory:", _ctx)
  _x_x970 = kk_string_dup(_s_x971, _ctx); /*string*/
  x_10207 = kk_sqlite_hc__sqlite__open(_x_x970, _ctx); /*either<string,sqlite/db>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__either_drop(x_10207, _ctx);
    kk_box_t _x_x972 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__demo__open__close_fun973(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x972); return kk_Unit;
  }
  if (kk_std_core_types__is_Left(x_10207, _ctx)) {
    kk_box_t _box_x330 = x_10207._cons.Left.left;
    kk_string_t e = kk_string_unbox(_box_x330);
    kk_string_dup(e, _ctx);
    kk_std_core_types__either_drop(x_10207, _ctx);
    kk_string_t _x_x976;
    kk_string_t _x_x977;
    kk_define_string_literal(static, _s_x978, 13, "open failed: ", _ctx)
    _x_x977 = kk_string_dup(_s_x978, _ctx); /*string*/
    _x_x976 = kk_std_core_types__lp__plus__plus__rp_(_x_x977, e, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x976, _ctx); return kk_Unit;
  }
  {
    kk_box_t _box_x331 = x_10207._cons.Right.right;
    kk_sqlite__db db = kk_sqlite__db_unbox(_box_x331, KK_BORROWED, _ctx);
    kk_sqlite__db_dup(db, _ctx);
    kk_std_core_types__either_drop(x_10207, _ctx);
    kk_examples_basic_hc__run__kv__demo(db, _ctx); return kk_Unit;
  }
}
 
// monadic lift

kk_unit_t kk_examples_basic__mlift_hc__demo__with__sqlite_10133(kk_std_core_types__either _y_x10099, kk_context_t* _ctx) { /* (either<string,bool>) -> io () */ 
  kk_string_t _x_x979;
  if (kk_std_core_types__is_Left(_y_x10099, _ctx)) {
    kk_box_t _box_x333 = _y_x10099._cons.Left.left;
    kk_string_t e = kk_string_unbox(_box_x333);
    kk_string_dup(e, _ctx);
    kk_std_core_types__either_drop(_y_x10099, _ctx);
    kk_string_t _x_x980;
    kk_define_string_literal(static, _s_x981, 7, "Error: ", _ctx)
    _x_x980 = kk_string_dup(_s_x981, _ctx); /*string*/
    _x_x979 = kk_std_core_types__lp__plus__plus__rp_(_x_x980, e, _ctx); /*string*/
  }
  else {
    kk_box_t _box_x334 = _y_x10099._cons.Right.right;
    kk_std_core_types__either_drop(_y_x10099, _ctx);
    kk_define_string_literal(static, _s_x982, 4, "done", _ctx)
    _x_x979 = kk_string_dup(_s_x982, _ctx); /*string*/
  }
  kk_std_core_console_printsln(_x_x979, _ctx); return kk_Unit;
}
 
// .hc:75


// lift anonymous function
struct kk_examples_basic_hc__demo__with__sqlite_fun987__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__demo__with__sqlite_fun987(kk_function_t _fself, kk_sqlite__db _b_x337, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__demo__with__sqlite_fun987(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__demo__with__sqlite_fun987, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__demo__with__sqlite_fun987(kk_function_t _fself, kk_sqlite__db _b_x337, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x988 = kk_Unit;
  kk_examples_basic_hc__run__counters(_b_x337, _ctx);
  return kk_unit_box(_x_x988);
}


// lift anonymous function
struct kk_examples_basic_hc__demo__with__sqlite_fun990__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__demo__with__sqlite_fun990(kk_function_t _fself, kk_box_t _b_x341, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__demo__with__sqlite_fun990(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__demo__with__sqlite_fun990, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__demo__with__sqlite_fun990(kk_function_t _fself, kk_box_t _b_x341, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x991 = kk_Unit;
  kk_std_core_types__either _x_x992 = kk_std_core_types__either_unbox(_b_x341, KK_OWNED, _ctx); /*either<string,bool>*/
  kk_examples_basic__mlift_hc__demo__with__sqlite_10133(_x_x992, _ctx);
  return kk_unit_box(_x_x991);
}

kk_unit_t kk_examples_basic_hc__demo__with__sqlite(kk_context_t* _ctx) { /* () -> io () */ 
  kk_unit_t __ = kk_Unit;
  kk_string_t _x_x983;
  kk_define_string_literal(static, _s_x984, 19, "--- with_sqlite ---", _ctx)
  _x_x983 = kk_string_dup(_s_x984, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x983, _ctx);
  kk_std_core_types__either x_10210;
  kk_string_t _x_x985;
  kk_define_string_literal(static, _s_x986, 8, ":memory:", _ctx)
  _x_x985 = kk_string_dup(_s_x986, _ctx); /*string*/
  x_10210 = kk_sqlite_hc__with__sqlite(_x_x985, kk_examples_basic_new_hc__demo__with__sqlite_fun987(_ctx), _ctx); /*either<string,bool>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__either_drop(x_10210, _ctx);
    kk_box_t _x_x989 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__demo__with__sqlite_fun990(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x989); return kk_Unit;
  }
  {
    kk_string_t _x_x993;
    if (kk_std_core_types__is_Left(x_10210, _ctx)) {
      kk_box_t _box_x342 = x_10210._cons.Left.left;
      kk_string_t e = kk_string_unbox(_box_x342);
      kk_string_dup(e, _ctx);
      kk_std_core_types__either_drop(x_10210, _ctx);
      kk_string_t _x_x994;
      kk_define_string_literal(static, _s_x995, 7, "Error: ", _ctx)
      _x_x994 = kk_string_dup(_s_x995, _ctx); /*string*/
      _x_x993 = kk_std_core_types__lp__plus__plus__rp_(_x_x994, e, _ctx); /*string*/
    }
    else {
      kk_box_t _box_x343 = x_10210._cons.Right.right;
      kk_std_core_types__either_drop(x_10210, _ctx);
      kk_define_string_literal(static, _s_x996, 4, "done", _ctx)
      _x_x993 = kk_string_dup(_s_x996, _ctx); /*string*/
    }
    kk_std_core_console_printsln(_x_x993, _ctx); return kk_Unit;
  }
}
 
// .hc:83


// lift anonymous function
struct kk_examples_basic_main_fun1004__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_main_fun1004(kk_function_t _fself, kk_box_t _b_x346, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_main_fun1004(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_main_fun1004, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_main_fun1004(kk_function_t _fself, kk_box_t _b_x346, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x1005 = kk_Unit;
  kk_unit_t _x_x1006 = kk_Unit;
  kk_unit_unbox(_b_x346);
  kk_examples_basic__mlift_main_10134(_x_x1006, _ctx);
  return kk_unit_box(_x_x1005);
}

kk_unit_t kk_examples_basic_main(kk_context_t* _ctx) { /* () -> io () */ 
  kk_unit_t __ = kk_Unit;
  kk_string_t _x_x999;
  kk_define_string_literal(static, _s_x1000, 28, "=== basic SQLite example ===", _ctx)
  _x_x999 = kk_string_dup(_s_x1000, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x999, _ctx);
  kk_unit_t ___0 = kk_Unit;
  kk_string_t _x_x1001 = kk_string_empty(); /*string*/
  kk_std_core_console_printsln(_x_x1001, _ctx);
  kk_unit_t x_10213 = kk_Unit;
  kk_examples_basic_hc__demo__open__close(_ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1003 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_main_fun1004(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x1003); return kk_Unit;
  }
  {
    kk_unit_t ___2 = kk_Unit;
    kk_string_t _x_x1007 = kk_string_empty(); /*string*/
    kk_std_core_console_printsln(_x_x1007, _ctx);
    kk_examples_basic_hc__demo__with__sqlite(_ctx); return kk_Unit;
  }
}

// initialization
void kk_examples_basic__init(kk_context_t* _ctx){
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
void kk_examples_basic__done(kk_context_t* _ctx){
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
