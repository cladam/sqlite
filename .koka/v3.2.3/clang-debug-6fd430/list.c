// Koka generated module: list, koka version: 3.2.3, platform: 64-bit
#include "list.h"


// lift anonymous function
struct kk_list_hc_assert_fun387__t {
  struct kk_function_s _base;
};
static kk_box_t kk_list_hc_assert_fun387(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc_assert_fun387(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_list_hc_assert_fun387, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_list_hc_assert_fun387(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x388;
  bool b_0_9 = kk_bool_unbox(_b_x2); /*bool*/;
  if (b_0_9) {
    _x_x388 = false; /*bool*/
  }
  else {
    _x_x388 = true; /*bool*/
  }
  return kk_bool_box(_x_x388);
}

kk_unit_t kk_list_hc_assert(bool b, kk_context_t* _ctx) { /* (b : bool) -> exn () */ 
  bool _match_x369;
  kk_box_t _x_x386 = kk_std_core_hnd__open_none1(kk_list_new_hc_assert_fun387(_ctx), kk_bool_box(b), _ctx); /*10001*/
  _match_x369 = kk_bool_unbox(_x_x386); /*bool*/
  if (_match_x369) {
    kk_box_t _x_x389;
    kk_string_t _x_x390;
    kk_define_string_literal(static, _s_x391, 16, "assertion failed", _ctx)
    _x_x390 = kk_string_dup(_s_x391, _ctx); /*string*/
    _x_x389 = kk_std_core_exn_throw(_x_x390, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    kk_unit_unbox(_x_x389); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}

kk_integer_t kk_list_hc__clamp(kk_integer_t v, kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (v : int, lo : int, hi : int) -> int */ 
  kk_integer_t a_10002;
  bool _match_x365 = kk_integer_gt_borrow(v,lo,kk_context()); /*bool*/;
  if (_match_x365) {
    kk_integer_drop(lo, _ctx);
    a_10002 = v; /*int*/
  }
  else {
    kk_integer_drop(v, _ctx);
    a_10002 = lo; /*int*/
  }
  bool _match_x364 = kk_integer_lt_borrow(a_10002,hi,kk_context()); /*bool*/;
  if (_match_x364) {
    kk_integer_drop(hi, _ctx);
    return a_10002;
  }
  {
    kk_integer_drop(a_10002, _ctx);
    return hi;
  }
}

kk_integer_t kk_list_hc__gcd(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> div int */ 
  kk__tailcall: ;
  bool _match_x363 = kk_integer_eq_borrow(b,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x363) {
    kk_integer_drop(b, _ctx);
    return a;
  }
  { // tailcall
    kk_integer_t _x_x392 = kk_integer_dup(b, _ctx); /*int*/
    kk_integer_t _x_x393 = kk_integer_mod(a,b,kk_context()); /*int*/
    a = _x_x392;
    b = _x_x393;
    goto kk__tailcall;
  }
}

kk_integer_t kk_list_hc__lcm(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> div int */ 
  bool _match_x360 = kk_integer_eq_borrow(a,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x360) {
    kk_integer_drop(b, _ctx);
    kk_integer_drop(a, _ctx);
    return kk_integer_from_small(0);
  }
  {
    bool _match_x361 = kk_integer_eq_borrow(b,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_x361) {
      kk_integer_drop(b, _ctx);
      kk_integer_drop(a, _ctx);
      return kk_integer_from_small(0);
    }
    {
      kk_integer_t n_10006;
      kk_integer_t _x_x394 = kk_integer_dup(a, _ctx); /*int*/
      kk_integer_t _x_x395 = kk_integer_dup(b, _ctx); /*int*/
      n_10006 = kk_integer_mul(_x_x394,_x_x395,kk_context()); /*int*/
      kk_integer_t _x_x396;
      bool _match_x362 = kk_integer_lt_borrow(n_10006,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      if (_match_x362) {
        _x_x396 = kk_integer_sub((kk_integer_from_small(0)),n_10006,kk_context()); /*int*/
      }
      else {
        _x_x396 = n_10006; /*int*/
      }
      kk_integer_t _x_x397 = kk_list_hc__gcd(a, b, _ctx); /*int*/
      return kk_integer_div(_x_x396,_x_x397,kk_context());
    }
  }
}

kk_integer_t kk_list_hc__pow(kk_integer_t base, kk_integer_t exp, kk_context_t* _ctx) { /* (base : int, exp : int) -> div int */ 
  bool _match_x359 = kk_integer_lte_borrow(exp,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x359) {
    kk_integer_drop(exp, _ctx);
    kk_integer_drop(base, _ctx);
    return kk_integer_from_small(1);
  }
  {
    kk_integer_t _x_x398 = kk_integer_dup(base, _ctx); /*int*/
    kk_integer_t _x_x399;
    kk_integer_t _x_x400 = kk_integer_add_small_const(exp, -1, _ctx); /*int*/
    _x_x399 = kk_list_hc__pow(base, _x_x400, _ctx); /*int*/
    return kk_integer_mul(_x_x398,_x_x399,kk_context());
  }
}

kk_integer_t kk_list_hc__sign(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> int */ 
  bool _match_x356 = kk_integer_gt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x356) {
    kk_integer_drop(n, _ctx);
    return kk_integer_from_small(1);
  }
  {
    bool _match_x357;
    bool _brw_x358 = kk_integer_lt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    _match_x357 = _brw_x358; /*bool*/
    if (_match_x357) {
      return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
    }
    {
      return kk_integer_from_small(0);
    }
  }
}

kk_std_core_types__list kk_list_hc__range(kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (lo : int, hi : int) -> div list<int> */ 
  bool _match_x355 = kk_integer_gte_borrow(lo,hi,kk_context()); /*bool*/;
  if (_match_x355) {
    kk_integer_drop(lo, _ctx);
    kk_integer_drop(hi, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    kk_std_core_types__list ys_10014;
    kk_integer_t _x_x401;
    kk_integer_t _x_x402 = kk_integer_dup(lo, _ctx); /*int*/
    _x_x401 = kk_integer_add_small_const(_x_x402, 1, _ctx); /*int*/
    ys_10014 = kk_list_hc__range(_x_x401, hi, _ctx); /*list<int>*/
    kk_std_core_types__list _x_x403 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(lo, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    return kk_std_core_list_append(_x_x403, ys_10014, _ctx);
  }
}

kk_std_core_types__list kk_list_hc__range__inc(kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (lo : int, hi : int) -> div list<int> */ 
  bool _match_x354 = kk_integer_gt_borrow(lo,hi,kk_context()); /*bool*/;
  if (_match_x354) {
    kk_integer_drop(lo, _ctx);
    kk_integer_drop(hi, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    kk_std_core_types__list ys_10018;
    kk_integer_t _x_x404;
    kk_integer_t _x_x405 = kk_integer_dup(lo, _ctx); /*int*/
    _x_x404 = kk_integer_add_small_const(_x_x405, 1, _ctx); /*int*/
    ys_10018 = kk_list_hc__range__inc(_x_x404, hi, _ctx); /*list<int>*/
    kk_std_core_types__list _x_x406 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(lo, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    return kk_std_core_list_append(_x_x406, ys_10018, _ctx);
  }
}

kk_integer_t kk_list_hc__isqrt__loop(kk_integer_t n, kk_integer_t x0, kk_integer_t x1, kk_context_t* _ctx) { /* (n : int, x0 : int, x1 : int) -> div int */ 
  kk__tailcall: ;
  bool _match_x353 = kk_integer_gte_borrow(x1,x0,kk_context()); /*bool*/;
  if (_match_x353) {
    kk_integer_drop(x1, _ctx);
    kk_integer_drop(n, _ctx);
    return x0;
  }
  {
    kk_integer_drop(x0, _ctx);
    kk_integer_t y_10022;
    kk_integer_t _x_x407 = kk_integer_dup(n, _ctx); /*int*/
    kk_integer_t _x_x408 = kk_integer_dup(x1, _ctx); /*int*/
    y_10022 = kk_integer_div(_x_x407,_x_x408,kk_context()); /*int*/
    kk_integer_t x2;
    kk_integer_t _x_x409;
    kk_integer_t _x_x410 = kk_integer_dup(x1, _ctx); /*int*/
    _x_x409 = kk_integer_add(_x_x410,y_10022,kk_context()); /*int*/
    x2 = kk_integer_div(_x_x409,(kk_integer_from_small(2)),kk_context()); /*int*/
    { // tailcall
      kk_integer_t _x_x411 = x1; /*int*/
      x0 = _x_x411;
      x1 = x2;
      goto kk__tailcall;
    }
  }
}

kk_integer_t kk_list_hc__isqrt(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> div int */ 
  bool _match_x352 = kk_integer_lte_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x352) {
    kk_integer_drop(n, _ctx);
    return kk_integer_from_small(0);
  }
  {
    kk_integer_t x1;
    kk_integer_t _x_x412;
    kk_integer_t _x_x413 = kk_integer_dup(n, _ctx); /*int*/
    _x_x412 = kk_integer_add_small_const(_x_x413, 1, _ctx); /*int*/
    x1 = kk_integer_div(_x_x412,(kk_integer_from_small(2)),kk_context()); /*int*/
    kk_integer_t _x_x414 = kk_integer_dup(n, _ctx); /*int*/
    return kk_list_hc__isqrt__loop(_x_x414, n, x1, _ctx);
  }
}

bool kk_list_hc__is__digit(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x350 = kk_integer_gte_borrow(n,(kk_integer_from_small(48)),kk_context()); /*bool*/;
  if (_match_x350) {
    bool _brw_x351 = kk_integer_lte_borrow(n,(kk_integer_from_small(57)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    return _brw_x351;
  }
  {
    kk_integer_drop(n, _ctx);
    return false;
  }
}

bool kk_list_hc__is__upper(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x348 = kk_integer_gte_borrow(n,(kk_integer_from_small(65)),kk_context()); /*bool*/;
  if (_match_x348) {
    bool _brw_x349 = kk_integer_lte_borrow(n,(kk_integer_from_small(90)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    return _brw_x349;
  }
  {
    kk_integer_drop(n, _ctx);
    return false;
  }
}

bool kk_list_hc__is__lower(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x346 = kk_integer_gte_borrow(n,(kk_integer_from_small(97)),kk_context()); /*bool*/;
  if (_match_x346) {
    bool _brw_x347 = kk_integer_lte_borrow(n,(kk_integer_from_small(122)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    return _brw_x347;
  }
  {
    kk_integer_drop(n, _ctx);
    return false;
  }
}

bool kk_list_hc__is__alpha(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x339 = kk_integer_gte_borrow(n,(kk_integer_from_small(65)),kk_context()); /*bool*/;
  if (_match_x339) {
    bool _match_x342;
    bool _brw_x345 = kk_integer_lte_borrow(n,(kk_integer_from_small(90)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    _match_x342 = _brw_x345; /*bool*/
    if (_match_x342) {
      return true;
    }
    {
      kk_integer_t n_0 = kk_integer_from_int(c,kk_context()); /*int*/;
      bool _match_x343 = kk_integer_gte_borrow(n_0,(kk_integer_from_small(97)),kk_context()); /*bool*/;
      if (_match_x343) {
        bool _brw_x344 = kk_integer_lte_borrow(n_0,(kk_integer_from_small(122)),kk_context()); /*bool*/;
        kk_integer_drop(n_0, _ctx);
        return _brw_x344;
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
    bool _match_x340 = kk_integer_gte_borrow(n_0_0,(kk_integer_from_small(97)),kk_context()); /*bool*/;
    if (_match_x340) {
      bool _brw_x341 = kk_integer_lte_borrow(n_0_0,(kk_integer_from_small(122)),kk_context()); /*bool*/;
      kk_integer_drop(n_0_0, _ctx);
      return _brw_x341;
    }
    {
      kk_integer_drop(n_0_0, _ctx);
      return false;
    }
  }
}

bool kk_list_hc__is__alnum(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  bool _match_x336 = kk_list_hc__is__alpha(c, _ctx); /*bool*/;
  if (_match_x336) {
    return true;
  }
  {
    kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
    bool _match_x337 = kk_integer_gte_borrow(n,(kk_integer_from_small(48)),kk_context()); /*bool*/;
    if (_match_x337) {
      bool _brw_x338 = kk_integer_lte_borrow(n,(kk_integer_from_small(57)),kk_context()); /*bool*/;
      kk_integer_drop(n, _ctx);
      return _brw_x338;
    }
    {
      kk_integer_drop(n, _ctx);
      return false;
    }
  }
}

bool kk_list_hc__is__space(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x332 = kk_integer_eq_borrow(n,(kk_integer_from_small(32)),kk_context()); /*bool*/;
  if (_match_x332) {
    kk_integer_drop(n, _ctx);
    return true;
  }
  {
    bool _match_x333 = kk_integer_eq_borrow(n,(kk_integer_from_small(9)),kk_context()); /*bool*/;
    if (_match_x333) {
      kk_integer_drop(n, _ctx);
      return true;
    }
    {
      bool _match_x334 = kk_integer_eq_borrow(n,(kk_integer_from_small(10)),kk_context()); /*bool*/;
      if (_match_x334) {
        kk_integer_drop(n, _ctx);
        return true;
      }
      {
        bool _brw_x335 = kk_integer_eq_borrow(n,(kk_integer_from_small(13)),kk_context()); /*bool*/;
        kk_integer_drop(n, _ctx);
        return _brw_x335;
      }
    }
  }
}

bool kk_list_hc__is__punct(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x321;
  bool _match_x328 = kk_integer_gte_borrow(n,(kk_integer_from_small(33)),kk_context()); /*bool*/;
  if (_match_x328) {
    bool _match_x330 = kk_integer_lte_borrow(n,(kk_integer_from_small(47)),kk_context()); /*bool*/;
    if (_match_x330) {
      _match_x321 = true; /*bool*/
    }
    else {
      bool _match_x331 = kk_integer_gte_borrow(n,(kk_integer_from_small(58)),kk_context()); /*bool*/;
      if (_match_x331) {
        _match_x321 = kk_integer_lte_borrow(n,(kk_integer_from_small(64)),kk_context()); /*bool*/
      }
      else {
        _match_x321 = false; /*bool*/
      }
    }
  }
  else {
    bool _match_x329 = kk_integer_gte_borrow(n,(kk_integer_from_small(58)),kk_context()); /*bool*/;
    if (_match_x329) {
      _match_x321 = kk_integer_lte_borrow(n,(kk_integer_from_small(64)),kk_context()); /*bool*/
    }
    else {
      _match_x321 = false; /*bool*/
    }
  }
  if (_match_x321) {
    kk_integer_drop(n, _ctx);
    return true;
  }
  {
    bool _match_x322 = kk_integer_gte_borrow(n,(kk_integer_from_small(91)),kk_context()); /*bool*/;
    if (_match_x322) {
      bool _match_x325 = kk_integer_lte_borrow(n,(kk_integer_from_small(96)),kk_context()); /*bool*/;
      if (_match_x325) {
        kk_integer_drop(n, _ctx);
        return true;
      }
      {
        bool _match_x326 = kk_integer_gte_borrow(n,(kk_integer_from_small(123)),kk_context()); /*bool*/;
        if (_match_x326) {
          bool _brw_x327 = kk_integer_lte_borrow(n,(kk_integer_from_small(126)),kk_context()); /*bool*/;
          kk_integer_drop(n, _ctx);
          return _brw_x327;
        }
        {
          kk_integer_drop(n, _ctx);
          return false;
        }
      }
    }
    {
      bool _match_x323 = kk_integer_gte_borrow(n,(kk_integer_from_small(123)),kk_context()); /*bool*/;
      if (_match_x323) {
        bool _brw_x324 = kk_integer_lte_borrow(n,(kk_integer_from_small(126)),kk_context()); /*bool*/;
        kk_integer_drop(n, _ctx);
        return _brw_x324;
      }
      {
        kk_integer_drop(n, _ctx);
        return false;
      }
    }
  }
}


// lift anonymous function
struct kk_list_hc__all__digits_fun416__t {
  struct kk_function_s _base;
};
static bool kk_list_hc__all__digits_fun416(kk_function_t _fself, kk_box_t _b_x20, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__all__digits_fun416(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_list_hc__all__digits_fun416, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_list_hc__all__digits_fun416(kk_function_t _fself, kk_box_t _b_x20, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x417 = kk_char_unbox(_b_x20, KK_OWNED, _ctx); /*char*/
  return kk_list_hc__is__digit(_x_x417, _ctx);
}

bool kk_list_hc__all__digits(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x318;
  kk_integer_t _brw_x319;
  kk_string_t _x_x415 = kk_string_dup(s, _ctx); /*string*/
  _brw_x319 = kk_std_core_string_chars_fs_count(_x_x415, _ctx); /*int*/
  bool _brw_x320 = kk_integer_eq_borrow(_brw_x319,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x319, _ctx);
  _match_x318 = _brw_x320; /*bool*/
  if (_match_x318) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x18_21 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x18_21, kk_list_new_hc__all__digits_fun416(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_list_hc__all__alpha_fun419__t {
  struct kk_function_s _base;
};
static bool kk_list_hc__all__alpha_fun419(kk_function_t _fself, kk_box_t _b_x25, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__all__alpha_fun419(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_list_hc__all__alpha_fun419, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_list_hc__all__alpha_fun419(kk_function_t _fself, kk_box_t _b_x25, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x420 = kk_char_unbox(_b_x25, KK_OWNED, _ctx); /*char*/
  return kk_list_hc__is__alpha(_x_x420, _ctx);
}

bool kk_list_hc__all__alpha(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x315;
  kk_integer_t _brw_x316;
  kk_string_t _x_x418 = kk_string_dup(s, _ctx); /*string*/
  _brw_x316 = kk_std_core_string_chars_fs_count(_x_x418, _ctx); /*int*/
  bool _brw_x317 = kk_integer_eq_borrow(_brw_x316,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x316, _ctx);
  _match_x315 = _brw_x317; /*bool*/
  if (_match_x315) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x23_26 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x23_26, kk_list_new_hc__all__alpha_fun419(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_list_hc__all__upper_fun422__t {
  struct kk_function_s _base;
};
static bool kk_list_hc__all__upper_fun422(kk_function_t _fself, kk_box_t _b_x30, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__all__upper_fun422(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_list_hc__all__upper_fun422, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_list_hc__all__upper_fun422(kk_function_t _fself, kk_box_t _b_x30, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x423 = kk_char_unbox(_b_x30, KK_OWNED, _ctx); /*char*/
  return kk_list_hc__is__upper(_x_x423, _ctx);
}

bool kk_list_hc__all__upper(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x312;
  kk_integer_t _brw_x313;
  kk_string_t _x_x421 = kk_string_dup(s, _ctx); /*string*/
  _brw_x313 = kk_std_core_string_chars_fs_count(_x_x421, _ctx); /*int*/
  bool _brw_x314 = kk_integer_eq_borrow(_brw_x313,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x313, _ctx);
  _match_x312 = _brw_x314; /*bool*/
  if (_match_x312) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x28_31 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x28_31, kk_list_new_hc__all__upper_fun422(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_list_hc__all__lower_fun425__t {
  struct kk_function_s _base;
};
static bool kk_list_hc__all__lower_fun425(kk_function_t _fself, kk_box_t _b_x35, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__all__lower_fun425(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_list_hc__all__lower_fun425, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_list_hc__all__lower_fun425(kk_function_t _fself, kk_box_t _b_x35, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x426 = kk_char_unbox(_b_x35, KK_OWNED, _ctx); /*char*/
  return kk_list_hc__is__lower(_x_x426, _ctx);
}

bool kk_list_hc__all__lower(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x309;
  kk_integer_t _brw_x310;
  kk_string_t _x_x424 = kk_string_dup(s, _ctx); /*string*/
  _brw_x310 = kk_std_core_string_chars_fs_count(_x_x424, _ctx); /*int*/
  bool _brw_x311 = kk_integer_eq_borrow(_brw_x310,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x310, _ctx);
  _match_x309 = _brw_x311; /*bool*/
  if (_match_x309) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x33_36 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x33_36, kk_list_new_hc__all__lower_fun425(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_list_hc__all__alnum_fun428__t {
  struct kk_function_s _base;
};
static bool kk_list_hc__all__alnum_fun428(kk_function_t _fself, kk_box_t _b_x40, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__all__alnum_fun428(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_list_hc__all__alnum_fun428, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_list_hc__all__alnum_fun428(kk_function_t _fself, kk_box_t _b_x40, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x429 = kk_char_unbox(_b_x40, KK_OWNED, _ctx); /*char*/
  return kk_list_hc__is__alnum(_x_x429, _ctx);
}

bool kk_list_hc__all__alnum(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x306;
  kk_integer_t _brw_x307;
  kk_string_t _x_x427 = kk_string_dup(s, _ctx); /*string*/
  _brw_x307 = kk_std_core_string_chars_fs_count(_x_x427, _ctx); /*int*/
  bool _brw_x308 = kk_integer_eq_borrow(_brw_x307,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x307, _ctx);
  _match_x306 = _brw_x308; /*bool*/
  if (_match_x306) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x38_41 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x38_41, kk_list_new_hc__all__alnum_fun428(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_list_hc__glob__match__chars_fun435__t {
  struct kk_function_s _base;
};
static bool kk_list_hc__glob__match__chars_fun435(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__glob__match__chars_fun435(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_list_hc__glob__match__chars_fun435, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_list_hc__glob__match__chars_fun435(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x436;
  kk_char_t _x_x437 = kk_char_unbox(_b_x47, KK_OWNED, _ctx); /*char*/
  _x_x436 = kk_std_core_string_char_fs_string(_x_x437, _ctx); /*string*/
  kk_string_t _x_x438;
  kk_define_string_literal(static, _s_x439, 1, "/", _ctx)
  _x_x438 = kk_string_dup(_s_x439, _ctx); /*string*/
  return kk_string_is_neq(_x_x436,_x_x438,kk_context());
}

bool kk_list_hc__glob__match__chars(kk_std_core_types__list pat, kk_std_core_types__list input, kk_context_t* _ctx) { /* (pat : list<char>, input : list<char>) -> div bool */ 
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
    struct kk_std_core_types_Cons* _con_x430 = kk_std_core_types__as_Cons(pat, _ctx);
    kk_box_t _box_x43 = _con_x430->head;
    kk_std_core_types__list prest = _con_x430->tail;
    kk_char_t p = kk_char_unbox(_box_x43, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(pat, _ctx)) {
      kk_datatype_ptr_free(pat, _ctx);
    }
    else {
      kk_std_core_types__list_dup(prest, _ctx);
      kk_datatype_ptr_decref(pat, _ctx);
    }
    kk_string_t _match_x303 = kk_std_core_string_char_fs_string(p, _ctx); /*string*/;
    if (kk_string_cmp_cstr_borrow(_match_x303, "\?", _ctx) == 0) {
      kk_string_drop(_match_x303, _ctx);
      if (kk_std_core_types__is_Nil(input, _ctx)) {
        kk_std_core_types__list_drop(prest, _ctx);
        return false;
      }
      {
        struct kk_std_core_types_Cons* _con_x431 = kk_std_core_types__as_Cons(input, _ctx);
        kk_box_t _box_x44 = _con_x431->head;
        kk_std_core_types__list irest = _con_x431->tail;
        kk_char_t c = kk_char_unbox(_box_x44, KK_BORROWED, _ctx);
        if kk_likely(kk_datatype_ptr_is_unique(input, _ctx)) {
          kk_datatype_ptr_free(input, _ctx);
        }
        else {
          kk_std_core_types__list_dup(irest, _ctx);
          kk_datatype_ptr_decref(input, _ctx);
        }
        bool _match_x305;
        kk_string_t _x_x432 = kk_std_core_string_char_fs_string(c, _ctx); /*string*/
        kk_string_t _x_x433;
        kk_define_string_literal(static, _s_x434, 1, "/", _ctx)
        _x_x433 = kk_string_dup(_s_x434, _ctx); /*string*/
        _match_x305 = kk_string_is_eq(_x_x432,_x_x433,kk_context()); /*bool*/
        if (_match_x305) {
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
    if (kk_string_cmp_cstr_borrow(_match_x303, "*", _ctx) == 0) {
      kk_string_drop(_match_x303, _ctx);
      if (kk_std_core_types__is_Nil(prest, _ctx)) {
        return kk_std_core_list_all(input, kk_list_new_hc__glob__match__chars_fun435(_ctx), _ctx);
      }
      {
        return kk_list_hc__glob__star(prest, input, _ctx);
      }
    }
    {
      kk_string_drop(_match_x303, _ctx);
      if (kk_std_core_types__is_Nil(input, _ctx)) {
        kk_std_core_types__list_drop(prest, _ctx);
        return false;
      }
      {
        struct kk_std_core_types_Cons* _con_x440 = kk_std_core_types__as_Cons(input, _ctx);
        kk_box_t _box_x48 = _con_x440->head;
        kk_std_core_types__list irest_0 = _con_x440->tail;
        kk_char_t c_1 = kk_char_unbox(_box_x48, KK_BORROWED, _ctx);
        if kk_likely(kk_datatype_ptr_is_unique(input, _ctx)) {
          kk_datatype_ptr_free(input, _ctx);
        }
        else {
          kk_std_core_types__list_dup(irest_0, _ctx);
          kk_datatype_ptr_decref(input, _ctx);
        }
        bool _match_x304 = (p == c_1); /*bool*/;
        if (_match_x304) { // tailcall
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

bool kk_list_hc__glob__star(kk_std_core_types__list prest_0, kk_std_core_types__list input_0, kk_context_t* _ctx) { /* (prest : list<char>, input : list<char>) -> div bool */ 
  kk__tailcall: ;
  bool _match_x301;
  kk_std_core_types__list _x_x441 = kk_std_core_types__list_dup(prest_0, _ctx); /*list<char>*/
  kk_std_core_types__list _x_x442 = kk_std_core_types__list_dup(input_0, _ctx); /*list<char>*/
  _match_x301 = kk_list_hc__glob__match__chars(_x_x441, _x_x442, _ctx); /*bool*/
  if (_match_x301) {
    kk_std_core_types__list_drop(prest_0, _ctx);
    kk_std_core_types__list_drop(input_0, _ctx);
    return true;
  }
  if (kk_std_core_types__is_Nil(input_0, _ctx)) {
    kk_std_core_types__list_drop(prest_0, _ctx);
    return false;
  }
  {
    struct kk_std_core_types_Cons* _con_x443 = kk_std_core_types__as_Cons(input_0, _ctx);
    kk_box_t _box_x52 = _con_x443->head;
    kk_std_core_types__list irest_1 = _con_x443->tail;
    kk_char_t c_2 = kk_char_unbox(_box_x52, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(input_0, _ctx)) {
      kk_datatype_ptr_free(input_0, _ctx);
    }
    else {
      kk_std_core_types__list_dup(irest_1, _ctx);
      kk_datatype_ptr_decref(input_0, _ctx);
    }
    bool _match_x302;
    kk_string_t _x_x444 = kk_std_core_string_char_fs_string(c_2, _ctx); /*string*/
    kk_string_t _x_x445;
    kk_define_string_literal(static, _s_x446, 1, "/", _ctx)
    _x_x445 = kk_string_dup(_s_x446, _ctx); /*string*/
    _match_x302 = kk_string_is_eq(_x_x444,_x_x445,kk_context()); /*bool*/
    if (_match_x302) {
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

bool kk_list_hc__glob__doublestar(kk_std_core_types__list prest, kk_std_core_types__list paths, kk_context_t* _ctx) { /* (prest : list<string>, paths : list<string>) -> div bool */ 
  kk__tailcall: ;
  bool _match_x300;
  kk_std_core_types__list _x_x449 = kk_std_core_types__list_dup(prest, _ctx); /*list<string>*/
  kk_std_core_types__list _x_x450 = kk_std_core_types__list_dup(paths, _ctx); /*list<string>*/
  _match_x300 = kk_list_hc__glob__match__segments(_x_x449, _x_x450, _ctx); /*bool*/
  if (_match_x300) {
    kk_std_core_types__list_drop(prest, _ctx);
    kk_std_core_types__list_drop(paths, _ctx);
    return true;
  }
  if (kk_std_core_types__is_Nil(paths, _ctx)) {
    kk_std_core_types__list_drop(prest, _ctx);
    return false;
  }
  {
    struct kk_std_core_types_Cons* _con_x451 = kk_std_core_types__as_Cons(paths, _ctx);
    kk_box_t _box_x53 = _con_x451->head;
    kk_std_core_types__list srest = _con_x451->tail;
    kk_string_t _pat_3 = kk_string_unbox(_box_x53);
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

bool kk_list_hc__glob__match__segments(kk_std_core_types__list pats, kk_std_core_types__list paths_0, kk_context_t* _ctx) { /* (pats : list<string>, paths : list<string>) -> div bool */ 
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
    struct kk_std_core_types_Cons* _con_x452 = kk_std_core_types__as_Cons(pats, _ctx);
    kk_box_t _box_x54 = _con_x452->head;
    kk_std_core_types__list prest_0 = _con_x452->tail;
    kk_string_t p = kk_string_unbox(_box_x54);
    if kk_likely(kk_datatype_ptr_is_unique(pats, _ctx)) {
      kk_datatype_ptr_free(pats, _ctx);
    }
    else {
      kk_string_dup(p, _ctx);
      kk_std_core_types__list_dup(prest_0, _ctx);
      kk_datatype_ptr_decref(pats, _ctx);
    }
    bool _match_x298;
    kk_string_t _x_x453 = kk_string_dup(p, _ctx); /*string*/
    kk_string_t _x_x454;
    kk_define_string_literal(static, _s_x455, 2, "**", _ctx)
    _x_x454 = kk_string_dup(_s_x455, _ctx); /*string*/
    _match_x298 = kk_string_is_eq(_x_x453,_x_x454,kk_context()); /*bool*/
    if (_match_x298) {
      kk_string_drop(p, _ctx);
      return kk_list_hc__glob__doublestar(prest_0, paths_0, _ctx);
    }
    if (kk_std_core_types__is_Nil(paths_0, _ctx)) {
      kk_std_core_types__list_drop(prest_0, _ctx);
      kk_string_drop(p, _ctx);
      return false;
    }
    {
      struct kk_std_core_types_Cons* _con_x456 = kk_std_core_types__as_Cons(paths_0, _ctx);
      kk_box_t _box_x55 = _con_x456->head;
      kk_std_core_types__list srest_0 = _con_x456->tail;
      kk_string_t s = kk_string_unbox(_box_x55);
      if kk_likely(kk_datatype_ptr_is_unique(paths_0, _ctx)) {
        kk_datatype_ptr_free(paths_0, _ctx);
      }
      else {
        kk_string_dup(s, _ctx);
        kk_std_core_types__list_dup(srest_0, _ctx);
        kk_datatype_ptr_decref(paths_0, _ctx);
      }
      bool _match_x299;
      kk_std_core_types__list _x_x457 = kk_std_core_string_list(p, _ctx); /*list<char>*/
      kk_std_core_types__list _x_x458 = kk_std_core_string_list(s, _ctx); /*list<char>*/
      _match_x299 = kk_list_hc__glob__match__chars(_x_x457, _x_x458, _ctx); /*bool*/
      if (_match_x299) { // tailcall
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
struct kk_list_hc__glob__match__path_fun463__t {
  struct kk_function_s _base;
};
static kk_box_t kk_list_hc__glob__match__path_fun463(kk_function_t _fself, kk_box_t _b_x58, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__glob__match__path_fun463(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_list_hc__glob__match__path_fun463, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_list_hc__glob__match__path_fun463(kk_function_t _fself, kk_box_t _b_x58, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x464;
  kk_char_t _x_x465 = kk_char_unbox(_b_x58, KK_OWNED, _ctx); /*char*/
  _x_x464 = kk_std_core_string_char_fs_string(_x_x465, _ctx); /*string*/
  return kk_string_box(_x_x464);
}


// lift anonymous function
struct kk_list_hc__glob__match__path_fun472__t {
  struct kk_function_s _base;
};
static kk_box_t kk_list_hc__glob__match__path_fun472(kk_function_t _fself, kk_box_t _b_x63, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__glob__match__path_fun472(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_list_hc__glob__match__path_fun472, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_list_hc__glob__match__path_fun472(kk_function_t _fself, kk_box_t _b_x63, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x473;
  kk_char_t _x_x474 = kk_char_unbox(_b_x63, KK_OWNED, _ctx); /*char*/
  _x_x473 = kk_std_core_string_char_fs_string(_x_x474, _ctx); /*string*/
  return kk_string_box(_x_x473);
}

bool kk_list_hc__glob__match__path(kk_string_t pattern, kk_string_t hc__path, kk_context_t* _ctx) { /* (pattern : string, hc_path : string) -> div bool */ 
  kk_std_core_types__list pat__parts;
  bool _match_x295;
  kk_string_t _x_x459;
  kk_define_string_literal(static, _s_x460, 1, "/", _ctx)
  _x_x459 = kk_string_dup(_s_x460, _ctx); /*string*/
  kk_string_t _x_x461 = kk_string_empty(); /*string*/
  _match_x295 = kk_string_is_eq(_x_x459,_x_x461,kk_context()); /*bool*/
  if (_match_x295) {
    kk_std_core_types__list _b_x56_59 = kk_std_core_string_list(pattern, _ctx); /*list<char>*/;
    kk_function_t _brw_x296 = kk_list_new_hc__glob__match__path_fun463(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x297 = kk_std_core_list_map(_b_x56_59, _brw_x296, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x296, _ctx);
    pat__parts = _brw_x297; /*list<string>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x466;
    kk_define_string_literal(static, _s_x467, 1, "/", _ctx)
    _x_x466 = kk_string_dup(_s_x467, _ctx); /*string*/
    v_10011 = kk_string_splitv(pattern,_x_x466,kk_context()); /*vector<string>*/
    pat__parts = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  kk_std_core_types__list path__parts;
  bool _match_x292;
  kk_string_t _x_x468;
  kk_define_string_literal(static, _s_x469, 1, "/", _ctx)
  _x_x468 = kk_string_dup(_s_x469, _ctx); /*string*/
  kk_string_t _x_x470 = kk_string_empty(); /*string*/
  _match_x292 = kk_string_is_eq(_x_x468,_x_x470,kk_context()); /*bool*/
  if (_match_x292) {
    kk_std_core_types__list _b_x61_64 = kk_std_core_string_list(hc__path, _ctx); /*list<char>*/;
    kk_function_t _brw_x293 = kk_list_new_hc__glob__match__path_fun472(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x294 = kk_std_core_list_map(_b_x61_64, _brw_x293, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x293, _ctx);
    path__parts = _brw_x294; /*list<string>*/
  }
  else {
    kk_vector_t v_10011_0;
    kk_string_t _x_x475;
    kk_define_string_literal(static, _s_x476, 1, "/", _ctx)
    _x_x475 = kk_string_dup(_s_x476, _ctx); /*string*/
    v_10011_0 = kk_string_splitv(hc__path,_x_x475,kk_context()); /*vector<string>*/
    path__parts = kk_std_core_vector_vlist(v_10011_0, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  return kk_list_hc__glob__match__segments(pat__parts, path__parts, _ctx);
}


// lift anonymous function
struct kk_list_hc__words_fun482__t {
  struct kk_function_s _base;
};
static kk_box_t kk_list_hc__words_fun482(kk_function_t _fself, kk_box_t _b_x68, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__words_fun482(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_list_hc__words_fun482, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_list_hc__words_fun482(kk_function_t _fself, kk_box_t _b_x68, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x483;
  kk_char_t _x_x484 = kk_char_unbox(_b_x68, KK_OWNED, _ctx); /*char*/
  _x_x483 = kk_std_core_string_char_fs_string(_x_x484, _ctx); /*string*/
  return kk_string_box(_x_x483);
}


// lift anonymous function
struct kk_list_hc__words_fun487__t {
  struct kk_function_s _base;
};
static bool kk_list_hc__words_fun487(kk_function_t _fself, kk_box_t _b_x71, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__words_fun487(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_list_hc__words_fun487, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_list_hc__words_fun487(kk_function_t _fself, kk_box_t _b_x71, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool b_10041;
  kk_integer_t _brw_x283;
  kk_string_t _x_x488 = kk_string_unbox(_b_x71); /*string*/
  _brw_x283 = kk_std_core_string_chars_fs_count(_x_x488, _ctx); /*int*/
  bool _brw_x284 = kk_integer_eq_borrow(_brw_x283,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x283, _ctx);
  b_10041 = _brw_x284; /*bool*/
  if (b_10041) {
    return false;
  }
  {
    return true;
  }
}

kk_std_core_types__list kk_list_hc__words(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> list<string> */ 
  kk_std_core_types__list _b_x69_72;
  bool _match_x285;
  kk_string_t _x_x478;
  kk_define_string_literal(static, _s_x479, 1, " ", _ctx)
  _x_x478 = kk_string_dup(_s_x479, _ctx); /*string*/
  kk_string_t _x_x480 = kk_string_empty(); /*string*/
  _match_x285 = kk_string_is_eq(_x_x478,_x_x480,kk_context()); /*bool*/
  if (_match_x285) {
    kk_std_core_types__list _b_x66_74 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x286 = kk_list_new_hc__words_fun482(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x287 = kk_std_core_list_map(_b_x66_74, _brw_x286, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x286, _ctx);
    _b_x69_72 = _brw_x287; /*list<string>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x485;
    kk_define_string_literal(static, _s_x486, 1, " ", _ctx)
    _x_x485 = kk_string_dup(_s_x486, _ctx); /*string*/
    v_10011 = kk_string_splitv(s,_x_x485,kk_context()); /*vector<string>*/
    _b_x69_72 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  return kk_std_core_list_filter(_b_x69_72, kk_list_new_hc__words_fun487(_ctx), _ctx);
}


// lift anonymous function
struct kk_list_hc__lines_fun493__t {
  struct kk_function_s _base;
};
static kk_box_t kk_list_hc__lines_fun493(kk_function_t _fself, kk_box_t _b_x79, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__lines_fun493(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_list_hc__lines_fun493, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_list_hc__lines_fun493(kk_function_t _fself, kk_box_t _b_x79, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x494;
  kk_char_t _x_x495 = kk_char_unbox(_b_x79, KK_OWNED, _ctx); /*char*/
  _x_x494 = kk_std_core_string_char_fs_string(_x_x495, _ctx); /*string*/
  return kk_string_box(_x_x494);
}

kk_std_core_types__list kk_list_hc__lines(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> list<string> */ 
  bool _match_x280;
  kk_string_t _x_x489;
  kk_define_string_literal(static, _s_x490, 1, "\n", _ctx)
  _x_x489 = kk_string_dup(_s_x490, _ctx); /*string*/
  kk_string_t _x_x491 = kk_string_empty(); /*string*/
  _match_x280 = kk_string_is_eq(_x_x489,_x_x491,kk_context()); /*bool*/
  if (_match_x280) {
    kk_std_core_types__list _b_x77_80 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x281 = kk_list_new_hc__lines_fun493(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x282 = kk_std_core_list_map(_b_x77_80, _brw_x281, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x281, _ctx);
    return _brw_x282;
  }
  {
    kk_vector_t v_10011;
    kk_string_t _x_x496;
    kk_define_string_literal(static, _s_x497, 1, "\n", _ctx)
    _x_x496 = kk_string_dup(_s_x497, _ctx); /*string*/
    v_10011 = kk_string_splitv(s,_x_x496,kk_context()); /*vector<string>*/
    return kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx);
  }
}

kk_string_t kk_list_hc__repeat__str(kk_string_t s, kk_integer_t n, kk_context_t* _ctx) { /* (s : string, n : int) -> div string */ 
  bool _match_x279 = kk_integer_lte_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x279) {
    kk_string_drop(s, _ctx);
    kk_integer_drop(n, _ctx);
    return kk_string_empty();
  }
  {
    kk_string_t _x_x503 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x504;
    kk_integer_t _x_x505 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
    _x_x504 = kk_list_hc__repeat__str(s, _x_x505, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x503, _x_x504, _ctx);
  }
}

kk_string_t kk_list_hc__pad__left(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10055;
  kk_string_t _x_x506 = kk_string_dup(s, _ctx); /*string*/
  y_10055 = kk_std_core_string_chars_fs_count(_x_x506, _ctx); /*int*/
  kk_integer_t b_10053 = kk_integer_sub(width,y_10055,kk_context()); /*int*/;
  kk_string_t _x_x507;
  kk_integer_t _x_x508;
  bool _match_x278 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10053,kk_context()); /*bool*/;
  if (_match_x278) {
    kk_integer_drop(b_10053, _ctx);
    _x_x508 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x508 = b_10053; /*int*/
  }
  _x_x507 = kk_list_hc__repeat__str(ch, _x_x508, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x507, s, _ctx);
}

kk_string_t kk_list_hc__pad__right(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10059;
  kk_string_t _x_x509 = kk_string_dup(s, _ctx); /*string*/
  y_10059 = kk_std_core_string_chars_fs_count(_x_x509, _ctx); /*int*/
  kk_integer_t b_10057 = kk_integer_sub(width,y_10059,kk_context()); /*int*/;
  kk_string_t _x_x510;
  kk_integer_t _x_x511;
  bool _match_x277 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10057,kk_context()); /*bool*/;
  if (_match_x277) {
    kk_integer_drop(b_10057, _ctx);
    _x_x511 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x511 = b_10057; /*int*/
  }
  _x_x510 = kk_list_hc__repeat__str(ch, _x_x511, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(s, _x_x510, _ctx);
}

kk_string_t kk_list_hc__center(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10063;
  kk_string_t _x_x512 = kk_string_dup(s, _ctx); /*string*/
  y_10063 = kk_std_core_string_chars_fs_count(_x_x512, _ctx); /*int*/
  kk_integer_t b_10061 = kk_integer_sub(width,y_10063,kk_context()); /*int*/;
  kk_integer_t total;
  bool _match_x276 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10061,kk_context()); /*bool*/;
  if (_match_x276) {
    kk_integer_drop(b_10061, _ctx);
    total = kk_integer_from_small(0); /*int*/
  }
  else {
    total = b_10061; /*int*/
  }
  kk_integer_t left;
  kk_integer_t _x_x513 = kk_integer_dup(total, _ctx); /*int*/
  left = kk_integer_div(_x_x513,(kk_integer_from_small(2)),kk_context()); /*int*/
  kk_integer_t right;
  kk_integer_t _x_x514 = kk_integer_dup(left, _ctx); /*int*/
  right = kk_integer_sub(total,_x_x514,kk_context()); /*int*/
  kk_string_t _x_x515;
  kk_string_t _x_x516;
  kk_string_t _x_x517 = kk_string_dup(ch, _ctx); /*string*/
  _x_x516 = kk_list_hc__repeat__str(_x_x517, left, _ctx); /*string*/
  _x_x515 = kk_std_core_types__lp__plus__plus__rp_(_x_x516, s, _ctx); /*string*/
  kk_string_t _x_x518 = kk_list_hc__repeat__str(ch, right, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x515, _x_x518, _ctx);
}

kk_string_t kk_list_hc__removeprefix(kk_string_t s, kk_string_t pre, kk_context_t* _ctx) { /* (s : string, pre : string) -> string */ 
  kk_std_core_types__maybe maybe_10066;
  kk_string_t _x_x519 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x520 = kk_string_dup(pre, _ctx); /*string*/
  maybe_10066 = kk_std_core_sslice_starts_with(_x_x519, _x_x520, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(maybe_10066, _ctx)) {
    kk_box_t _box_x82 = maybe_10066._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_10066, _ctx);
    kk_std_core_types__list _x_x521;
    kk_std_core_types__list _x_x522 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    kk_integer_t _x_x523 = kk_std_core_string_chars_fs_count(pre, _ctx); /*int*/
    _x_x521 = kk_std_core_list_drop(_x_x522, _x_x523, _ctx); /*list<10001>*/
    return kk_std_core_string_listchar_fs_string(_x_x521, _ctx);
  }
  {
    kk_string_drop(pre, _ctx);
    return s;
  }
}
 
// .hc:11

kk_std_core_types__list kk_list_hc__intersperse(kk_std_core_types__list xs, kk_box_t sep, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, sep : a) -> list<a> */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_box_drop(sep, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x524 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_std_core_types__list _pat_1 = _con_x524->tail;
    if (kk_std_core_types__is_Nil(_pat_1, _ctx)) {
      kk_box_t x = _con_x524->head;
      kk_reuse_t _ru_x377 = kk_reuse_null; /*@reuse*/;
      if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
        _ru_x377 = (kk_datatype_ptr_reuse(xs, _ctx));
      }
      else {
        kk_box_dup(x, _ctx);
        kk_datatype_ptr_decref(xs, _ctx);
      }
      kk_box_drop(sep, _ctx);
      return kk_std_core_types__new_Cons(_ru_x377, 0, x, kk_std_core_types__new_Nil(_ctx), _ctx);
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x525 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x_0 = _con_x525->head;
    kk_std_core_types__list rest = _con_x525->tail;
    kk_reuse_t _ru_x378 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x378 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_std_core_types__list_dup(rest, _ctx);
      kk_box_dup(x_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_std_core_types__list ys_10068;
    kk_box_t _x_x526 = kk_box_dup(sep, _ctx); /*5170*/
    ys_10068 = kk_list_hc__intersperse(rest, _x_x526, _ctx); /*list<5170>*/
    kk_std_core_types__list _x_x527;
    kk_std_core_types__list _x_x528 = kk_std_core_types__new_Cons(_ru_x378, 0, sep, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    _x_x527 = kk_std_core_types__new_Cons(kk_reuse_null, 0, x_0, _x_x528, _ctx); /*list<10021>*/
    return kk_std_core_list_append(_x_x527, ys_10068, _ctx);
  }
}
 
// .hc:19


// lift anonymous function
struct kk_list_hc__sum_fun530__t {
  struct kk_function_s _base;
};
static kk_box_t kk_list_hc__sum_fun530(kk_function_t _fself, kk_box_t _b_x86, kk_box_t _b_x87, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__sum_fun530(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_list_hc__sum_fun530, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_list_hc__sum_fun530(kk_function_t _fself, kk_box_t _b_x86, kk_box_t _b_x87, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x531;
  kk_integer_t _x_x532 = kk_integer_unbox(_b_x86, _ctx); /*int*/
  kk_integer_t _x_x533 = kk_integer_unbox(_b_x87, _ctx); /*int*/
  _x_x531 = kk_std_core_int__lp__plus__rp_(_x_x532, _x_x533, _ctx); /*int*/
  return kk_integer_box(_x_x531, _ctx);
}

kk_integer_t kk_list_hc__sum(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<int>) -> int */ 
  kk_box_t _x_x529 = kk_std_core_list_foldl(xs, kk_integer_box(kk_integer_from_small(0), _ctx), kk_list_new_hc__sum_fun530(_ctx), _ctx); /*10002*/
  return kk_integer_unbox(_x_x529, _ctx);
}
 
// .hc:21


// lift anonymous function
struct kk_list_hc__product_fun535__t {
  struct kk_function_s _base;
};
static kk_box_t kk_list_hc__product_fun535(kk_function_t _fself, kk_box_t _b_x94, kk_box_t _b_x95, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__product_fun535(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_list_hc__product_fun535, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_list_hc__product_fun535(kk_function_t _fself, kk_box_t _b_x94, kk_box_t _b_x95, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t a_99 = kk_integer_unbox(_b_x94, _ctx); /*int*/;
  kk_integer_t b_100 = kk_integer_unbox(_b_x95, _ctx); /*int*/;
  kk_integer_t _x_x536 = kk_integer_mul(a_99,b_100,kk_context()); /*int*/
  return kk_integer_box(_x_x536, _ctx);
}

kk_integer_t kk_list_hc__product(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<int>) -> int */ 
  kk_box_t _x_x534 = kk_std_core_list_foldl(xs, kk_integer_box(kk_integer_from_small(1), _ctx), kk_list_new_hc__product_fun535(_ctx), _ctx); /*10002*/
  return kk_integer_unbox(_x_x534, _ctx);
}
 
// monadic lift

kk_std_core_types__list kk_list__mlift_hc__scan_10125(kk_box_t init, kk_std_core_types__list _y_x10082, kk_context_t* _ctx) { /* forall<a,e> (init : a, list<a>) -> e list<a> */ 
  kk_std_core_types__list _x_x537 = kk_std_core_types__new_Cons(kk_reuse_null, 0, init, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  return kk_std_core_list_append(_x_x537, _y_x10082, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_list__mlift_hc__scan_10126_fun539__t {
  struct kk_function_s _base;
  kk_box_t init_0;
};
static kk_box_t kk_list__mlift_hc__scan_10126_fun539(kk_function_t _fself, kk_box_t _b_x102, kk_context_t* _ctx);
static kk_function_t kk_list__new_mlift_hc__scan_10126_fun539(kk_box_t init_0, kk_context_t* _ctx) {
  struct kk_list__mlift_hc__scan_10126_fun539__t* _self = kk_function_alloc_as(struct kk_list__mlift_hc__scan_10126_fun539__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_list__mlift_hc__scan_10126_fun539, kk_context());
  _self->init_0 = init_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_list__mlift_hc__scan_10126_fun539(kk_function_t _fself, kk_box_t _b_x102, kk_context_t* _ctx) {
  struct kk_list__mlift_hc__scan_10126_fun539__t* _self = kk_function_as(struct kk_list__mlift_hc__scan_10126_fun539__t*, _fself, _ctx);
  kk_box_t init_0 = _self->init_0; /* 5287 */
  kk_drop_match(_self, {kk_box_dup(init_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10082_0_104 = kk_std_core_types__list_unbox(_b_x102, KK_OWNED, _ctx); /*list<5287>*/;
  kk_std_core_types__list _x_x540 = kk_list__mlift_hc__scan_10125(init_0, _y_x10082_0_104, _ctx); /*list<5287>*/
  return kk_std_core_types__list_box(_x_x540, _ctx);
}

kk_std_core_types__list kk_list__mlift_hc__scan_10126(kk_function_t f, kk_box_t init_0, kk_std_core_types__list rest, kk_box_t _y_x10081, kk_context_t* _ctx) { /* forall<a,b,e> (f : (b, a) -> e b, init : b, rest : list<a>, b) -> e list<b> */ 
  kk_std_core_types__list x_10138 = kk_list_hc__scan(rest, _y_x10081, f, _ctx); /*list<5287>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10138, _ctx);
    kk_box_t _x_x538 = kk_std_core_hnd_yield_extend(kk_list__new_mlift_hc__scan_10126_fun539(init_0, _ctx), _ctx); /*10001*/
    return kk_std_core_types__list_unbox(_x_x538, KK_OWNED, _ctx);
  }
  {
    return kk_list__mlift_hc__scan_10125(init_0, x_10138, _ctx);
  }
}
 
// .hc:23


// lift anonymous function
struct kk_list_hc__scan_fun545__t {
  struct kk_function_s _base;
  kk_function_t f_0;
  kk_box_t init_1;
  kk_std_core_types__list rest_0;
};
static kk_box_t kk_list_hc__scan_fun545(kk_function_t _fself, kk_box_t _b_x106, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__scan_fun545(kk_function_t f_0, kk_box_t init_1, kk_std_core_types__list rest_0, kk_context_t* _ctx) {
  struct kk_list_hc__scan_fun545__t* _self = kk_function_alloc_as(struct kk_list_hc__scan_fun545__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_list_hc__scan_fun545, kk_context());
  _self->f_0 = f_0;
  _self->init_1 = init_1;
  _self->rest_0 = rest_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_list_hc__scan_fun545(kk_function_t _fself, kk_box_t _b_x106, kk_context_t* _ctx) {
  struct kk_list_hc__scan_fun545__t* _self = kk_function_as(struct kk_list_hc__scan_fun545__t*, _fself, _ctx);
  kk_function_t f_0 = _self->f_0; /* (5287, 5286) -> 5288 5287 */
  kk_box_t init_1 = _self->init_1; /* 5287 */
  kk_std_core_types__list rest_0 = _self->rest_0; /* list<5286> */
  kk_drop_match(_self, {kk_function_dup(f_0, _ctx);kk_box_dup(init_1, _ctx);kk_std_core_types__list_dup(rest_0, _ctx);}, {}, _ctx)
  kk_box_t _y_x10081_0_111 = _b_x106; /*5287*/;
  kk_std_core_types__list _x_x546 = kk_list__mlift_hc__scan_10126(f_0, init_1, rest_0, _y_x10081_0_111, _ctx); /*list<5287>*/
  return kk_std_core_types__list_box(_x_x546, _ctx);
}


// lift anonymous function
struct kk_list_hc__scan_fun548__t {
  struct kk_function_s _base;
  kk_box_t init_1;
};
static kk_box_t kk_list_hc__scan_fun548(kk_function_t _fself, kk_box_t _b_x108, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__scan_fun548(kk_box_t init_1, kk_context_t* _ctx) {
  struct kk_list_hc__scan_fun548__t* _self = kk_function_alloc_as(struct kk_list_hc__scan_fun548__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_list_hc__scan_fun548, kk_context());
  _self->init_1 = init_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_list_hc__scan_fun548(kk_function_t _fself, kk_box_t _b_x108, kk_context_t* _ctx) {
  struct kk_list_hc__scan_fun548__t* _self = kk_function_as(struct kk_list_hc__scan_fun548__t*, _fself, _ctx);
  kk_box_t init_1 = _self->init_1; /* 5287 */
  kk_drop_match(_self, {kk_box_dup(init_1, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10082_1_112 = kk_std_core_types__list_unbox(_b_x108, KK_OWNED, _ctx); /*list<5287>*/;
  kk_std_core_types__list _x_x549 = kk_list__mlift_hc__scan_10125(init_1, _y_x10082_1_112, _ctx); /*list<5287>*/
  return kk_std_core_types__list_box(_x_x549, _ctx);
}

kk_std_core_types__list kk_list_hc__scan(kk_std_core_types__list xs, kk_box_t init_1, kk_function_t f_0, kk_context_t* _ctx) { /* forall<a,b,e> (xs : list<a>, init : b, f : (b, a) -> e b) -> e list<b> */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_function_drop(f_0, _ctx);
    return kk_std_core_types__new_Cons(kk_reuse_null, 0, init_1, kk_std_core_types__new_Nil(_ctx), _ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x541 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x_0 = _con_x541->head;
    kk_std_core_types__list rest_0 = _con_x541->tail;
    kk_reuse_t _ru_x379 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x379 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_std_core_types__list_dup(rest_0, _ctx);
      kk_box_dup(x_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_box_t x_1_10140;
    kk_function_t _x_x543 = kk_function_dup(f_0, _ctx); /*(5287, 5286) -> 5288 5287*/
    kk_box_t _x_x542 = kk_box_dup(init_1, _ctx); /*5287*/
    x_1_10140 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x543, (_x_x543, _x_x542, x_0, _ctx), _ctx); /*5287*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x379,kk_context());
      kk_box_drop(x_1_10140, _ctx);
      kk_box_t _x_x544 = kk_std_core_hnd_yield_extend(kk_list_new_hc__scan_fun545(f_0, init_1, rest_0, _ctx), _ctx); /*10001*/
      return kk_std_core_types__list_unbox(_x_x544, KK_OWNED, _ctx);
    }
    {
      kk_std_core_types__list x_2_10143 = kk_list_hc__scan(rest_0, x_1_10140, f_0, _ctx); /*list<5287>*/;
      if (kk_yielding(kk_context())) {
        kk_reuse_drop(_ru_x379,kk_context());
        kk_std_core_types__list_drop(x_2_10143, _ctx);
        kk_box_t _x_x547 = kk_std_core_hnd_yield_extend(kk_list_new_hc__scan_fun548(init_1, _ctx), _ctx); /*10001*/
        return kk_std_core_types__list_unbox(_x_x547, KK_OWNED, _ctx);
      }
      {
        kk_std_core_types__list _x_x550 = kk_std_core_types__new_Cons(_ru_x379, 0, init_1, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
        return kk_std_core_list_append(_x_x550, x_2_10143, _ctx);
      }
    }
  }
}
 
// .hc:30


// lift anonymous function
struct kk_list_hc__zip__with_fun551__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_list_hc__zip__with_fun551(kk_function_t _fself, kk_box_t _b_x115, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__zip__with_fun551(kk_function_t f, kk_context_t* _ctx) {
  struct kk_list_hc__zip__with_fun551__t* _self = kk_function_alloc_as(struct kk_list_hc__zip__with_fun551__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_list_hc__zip__with_fun551, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_list_hc__zip__with_fun551(kk_function_t _fself, kk_box_t _b_x115, kk_context_t* _ctx) {
  struct kk_list_hc__zip__with_fun551__t* _self = kk_function_as(struct kk_list_hc__zip__with_fun551__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (5497, 5498) -> 5500 5499 */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_box_t _x_x552;
  kk_std_core_types__tuple2 _match_x270;
  kk_box_t _x_x553 = kk_box_dup(_b_x115, _ctx); /*10001*/
  _match_x270 = kk_std_core_types__tuple2_unbox(_x_x553, KK_OWNED, _ctx); /*(5497, 5498)*/
  {
    kk_box_t _x = _match_x270.fst;
    kk_box_dup(_x, _ctx);
    kk_std_core_types__tuple2_drop(_match_x270, _ctx);
    _x_x552 = _x; /*5497*/
  }
  kk_box_t _x_x554;
  kk_std_core_types__tuple2 _match_x269 = kk_std_core_types__tuple2_unbox(_b_x115, KK_OWNED, _ctx); /*(5497, 5498)*/;
  {
    kk_box_t _x_0 = _match_x269.snd;
    kk_box_dup(_x_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x269, _ctx);
    _x_x554 = _x_0; /*5498*/
  }
  return kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), f, (f, _x_x552, _x_x554, _ctx), _ctx);
}

kk_std_core_types__list kk_list_hc__zip__with(kk_std_core_types__list xs, kk_std_core_types__list ys, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b,c,e> (xs : list<a>, ys : list<b>, f : (a, b) -> e c) -> e list<c> */ 
  kk_std_core_types__list _b_x113_116 = kk_std_core_list_zip(xs, ys, _ctx); /*list<(5497, 5498)>*/;
  kk_function_t _brw_x271 = kk_list_new_hc__zip__with_fun551(f, _ctx); /*(10001) -> 10003 5499*/;
  kk_std_core_types__list _brw_x272 = kk_std_core_list_map(_b_x113_116, _brw_x271, _ctx); /*list<10002>*/;
  kk_function_drop(_brw_x271, _ctx);
  return _brw_x272;
}
 
// .hc:34


// lift anonymous function
struct kk_list_hc__unique_fun556__t {
  struct kk_function_s _base;
};
static kk_box_t kk_list_hc__unique_fun556(kk_function_t _fself, kk_box_t _b_x127, kk_box_t _b_x128, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__unique_fun556(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_list_hc__unique_fun556, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_list_hc__unique_fun557__t {
  struct kk_function_s _base;
  kk_integer_t x_137;
};
static bool kk_list_hc__unique_fun557(kk_function_t _fself, kk_integer_t hc____el, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__unique_fun557(kk_integer_t x_137, kk_context_t* _ctx) {
  struct kk_list_hc__unique_fun557__t* _self = kk_function_alloc_as(struct kk_list_hc__unique_fun557__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_list_hc__unique_fun557, kk_context());
  _self->x_137 = x_137;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_list_hc__unique_fun557(kk_function_t _fself, kk_integer_t hc____el, kk_context_t* _ctx) {
  struct kk_list_hc__unique_fun557__t* _self = kk_function_as(struct kk_list_hc__unique_fun557__t*, _fself, _ctx);
  kk_integer_t x_137 = _self->x_137; /* int */
  kk_drop_match(_self, {kk_integer_dup(x_137, _ctx);}, {}, _ctx)
  bool _brw_x268 = kk_integer_eq_borrow(hc____el,x_137,kk_context()); /*bool*/;
  kk_integer_drop(hc____el, _ctx);
  kk_integer_drop(x_137, _ctx);
  return _brw_x268;
}


// lift anonymous function
struct kk_list_hc__unique_fun559__t {
  struct kk_function_s _base;
  kk_function_t _b_x120_133;
};
static bool kk_list_hc__unique_fun559(kk_function_t _fself, kk_box_t _b_x121, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__unique_fun559(kk_function_t _b_x120_133, kk_context_t* _ctx) {
  struct kk_list_hc__unique_fun559__t* _self = kk_function_alloc_as(struct kk_list_hc__unique_fun559__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_list_hc__unique_fun559, kk_context());
  _self->_b_x120_133 = _b_x120_133;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_list_hc__unique_fun559(kk_function_t _fself, kk_box_t _b_x121, kk_context_t* _ctx) {
  struct kk_list_hc__unique_fun559__t* _self = kk_function_as(struct kk_list_hc__unique_fun559__t*, _fself, _ctx);
  kk_function_t _b_x120_133 = _self->_b_x120_133; /* (hc__el : int) -> bool */
  kk_drop_match(_self, {kk_function_dup(_b_x120_133, _ctx);}, {}, _ctx)
  kk_integer_t _x_x560 = kk_integer_unbox(_b_x121, _ctx); /*int*/
  return kk_function_call(bool, (kk_function_t, kk_integer_t, kk_context_t*), _b_x120_133, (_b_x120_133, _x_x560, _ctx), _ctx);
}
static kk_box_t kk_list_hc__unique_fun556(kk_function_t _fself, kk_box_t _b_x127, kk_box_t _b_x128, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list acc_136 = kk_std_core_types__list_unbox(_b_x127, KK_OWNED, _ctx); /*list<int>*/;
  kk_integer_t x_137 = kk_integer_unbox(_b_x128, _ctx); /*int*/;
  kk_std_core_types__list _b_x119_132 = kk_std_core_types__list_dup(acc_136, _ctx); /*list<int>*/;
  kk_function_t _b_x120_133;
  kk_integer_dup(x_137, _ctx);
  _b_x120_133 = kk_list_new_hc__unique_fun557(x_137, _ctx); /*(hc__el : int) -> bool*/
  kk_std_core_types__list _x_x558;
  bool _match_x267 = kk_std_core_list_any(_b_x119_132, kk_list_new_hc__unique_fun559(_b_x120_133, _ctx), _ctx); /*bool*/;
  if (_match_x267) {
    kk_integer_drop(x_137, _ctx);
    _x_x558 = acc_136; /*list<int>*/
  }
  else {
    kk_std_core_types__list _x_x561 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(x_137, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    _x_x558 = kk_std_core_list_append(acc_136, _x_x561, _ctx); /*list<int>*/
  }
  return kk_std_core_types__list_box(_x_x558, _ctx);
}

kk_std_core_types__list kk_list_hc__unique(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<int>) -> list<int> */ 
  kk_box_t _x_x555 = kk_std_core_list_foldl(xs, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), kk_list_new_hc__unique_fun556(_ctx), _ctx); /*10002*/
  return kk_std_core_types__list_unbox(_x_x555, KK_OWNED, _ctx);
}
 
// .hc:36

kk_std_core_types__list kk_list_hc__chunks(kk_std_core_types__list xs, kk_integer_t n, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, n : int) -> div list<list<a>> */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_integer_drop(n, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    kk_std_core_types__list _b_x138_140;
    kk_std_core_types__list _x_x562 = kk_std_core_types__list_dup(xs, _ctx); /*list<5760>*/
    kk_integer_t _x_x563 = kk_integer_dup(n, _ctx); /*int*/
    _b_x138_140 = kk_std_core_list_take(_x_x562, _x_x563, _ctx); /*list<5760>*/
    kk_std_core_types__list ys_10072;
    kk_std_core_types__list _x_x564;
    kk_integer_t _x_x565 = kk_integer_dup(n, _ctx); /*int*/
    _x_x564 = kk_std_core_list_drop(xs, _x_x565, _ctx); /*list<10001>*/
    ys_10072 = kk_list_hc__chunks(_x_x564, n, _ctx); /*list<list<5760>>*/
    kk_std_core_types__list _x_x566 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_std_core_types__list_box(_b_x138_140, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    return kk_std_core_list_append(_x_x566, ys_10072, _ctx);
  }
}
 
// .hc:47

kk_box_t kk_list_hc__head__or(kk_std_core_types__list xs, kk_box_t kkloc_default, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, default : a) -> a */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    return kkloc_default;
  }
  {
    struct kk_std_core_types_Cons* _con_x567 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x = _con_x567->head;
    kk_std_core_types__list _pat_1 = _con_x567->tail;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_std_core_types__list_drop(_pat_1, _ctx);
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_box_dup(x, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_box_drop(kkloc_default, _ctx);
    return x;
  }
}
 
// monadic lift

kk_std_core_types__list kk_list__mlift_hc__take__while_10127(kk_box_t x, kk_std_core_types__list _y_x10087, kk_context_t* _ctx) { /* forall<a,e> (x : a, list<a>) -> e list<a> */ 
  kk_std_core_types__list _x_x568 = kk_std_core_types__new_Cons(kk_reuse_null, 0, x, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  return kk_std_core_list_append(_x_x568, _y_x10087, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_list__mlift_hc__take__while_10128_fun570__t {
  struct kk_function_s _base;
  kk_box_t x_0;
};
static kk_box_t kk_list__mlift_hc__take__while_10128_fun570(kk_function_t _fself, kk_box_t _b_x143, kk_context_t* _ctx);
static kk_function_t kk_list__new_mlift_hc__take__while_10128_fun570(kk_box_t x_0, kk_context_t* _ctx) {
  struct kk_list__mlift_hc__take__while_10128_fun570__t* _self = kk_function_alloc_as(struct kk_list__mlift_hc__take__while_10128_fun570__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_list__mlift_hc__take__while_10128_fun570, kk_context());
  _self->x_0 = x_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_list__mlift_hc__take__while_10128_fun570(kk_function_t _fself, kk_box_t _b_x143, kk_context_t* _ctx) {
  struct kk_list__mlift_hc__take__while_10128_fun570__t* _self = kk_function_as(struct kk_list__mlift_hc__take__while_10128_fun570__t*, _fself, _ctx);
  kk_box_t x_0 = _self->x_0; /* 5848 */
  kk_drop_match(_self, {kk_box_dup(x_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10087_0_145 = kk_std_core_types__list_unbox(_b_x143, KK_OWNED, _ctx); /*list<5848>*/;
  kk_std_core_types__list _x_x571 = kk_list__mlift_hc__take__while_10127(x_0, _y_x10087_0_145, _ctx); /*list<5848>*/
  return kk_std_core_types__list_box(_x_x571, _ctx);
}

kk_std_core_types__list kk_list__mlift_hc__take__while_10128(kk_function_t pred, kk_std_core_types__list rest, kk_box_t x_0, bool _y_x10086, kk_context_t* _ctx) { /* forall<a,e> (pred : (a) -> e bool, rest : list<a>, x : a, bool) -> e list<a> */ 
  if (_y_x10086) {
    kk_std_core_types__list x_1_10146 = kk_list_hc__take__while(rest, pred, _ctx); /*list<5848>*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_1_10146, _ctx);
      kk_box_t _x_x569 = kk_std_core_hnd_yield_extend(kk_list__new_mlift_hc__take__while_10128_fun570(x_0, _ctx), _ctx); /*10001*/
      return kk_std_core_types__list_unbox(_x_x569, KK_OWNED, _ctx);
    }
    {
      return kk_list__mlift_hc__take__while_10127(x_0, x_1_10146, _ctx);
    }
  }
  {
    kk_box_drop(x_0, _ctx);
    kk_std_core_types__list_drop(rest, _ctx);
    kk_function_drop(pred, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
}
 
// .hc:55


// lift anonymous function
struct kk_list_hc__take__while_fun576__t {
  struct kk_function_s _base;
  kk_function_t pred_0;
  kk_std_core_types__list rest_0;
  kk_box_t x_2;
};
static kk_box_t kk_list_hc__take__while_fun576(kk_function_t _fself, kk_box_t _b_x147, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__take__while_fun576(kk_function_t pred_0, kk_std_core_types__list rest_0, kk_box_t x_2, kk_context_t* _ctx) {
  struct kk_list_hc__take__while_fun576__t* _self = kk_function_alloc_as(struct kk_list_hc__take__while_fun576__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_list_hc__take__while_fun576, kk_context());
  _self->pred_0 = pred_0;
  _self->rest_0 = rest_0;
  _self->x_2 = x_2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_list_hc__take__while_fun576(kk_function_t _fself, kk_box_t _b_x147, kk_context_t* _ctx) {
  struct kk_list_hc__take__while_fun576__t* _self = kk_function_as(struct kk_list_hc__take__while_fun576__t*, _fself, _ctx);
  kk_function_t pred_0 = _self->pred_0; /* (5848) -> 5849 bool */
  kk_std_core_types__list rest_0 = _self->rest_0; /* list<5848> */
  kk_box_t x_2 = _self->x_2; /* 5848 */
  kk_drop_match(_self, {kk_function_dup(pred_0, _ctx);kk_std_core_types__list_dup(rest_0, _ctx);kk_box_dup(x_2, _ctx);}, {}, _ctx)
  bool _y_x10086_0_152 = kk_bool_unbox(_b_x147); /*bool*/;
  kk_std_core_types__list _x_x577 = kk_list__mlift_hc__take__while_10128(pred_0, rest_0, x_2, _y_x10086_0_152, _ctx); /*list<5848>*/
  return kk_std_core_types__list_box(_x_x577, _ctx);
}


// lift anonymous function
struct kk_list_hc__take__while_fun579__t {
  struct kk_function_s _base;
  kk_box_t x_2;
};
static kk_box_t kk_list_hc__take__while_fun579(kk_function_t _fself, kk_box_t _b_x149, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__take__while_fun579(kk_box_t x_2, kk_context_t* _ctx) {
  struct kk_list_hc__take__while_fun579__t* _self = kk_function_alloc_as(struct kk_list_hc__take__while_fun579__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_list_hc__take__while_fun579, kk_context());
  _self->x_2 = x_2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_list_hc__take__while_fun579(kk_function_t _fself, kk_box_t _b_x149, kk_context_t* _ctx) {
  struct kk_list_hc__take__while_fun579__t* _self = kk_function_as(struct kk_list_hc__take__while_fun579__t*, _fself, _ctx);
  kk_box_t x_2 = _self->x_2; /* 5848 */
  kk_drop_match(_self, {kk_box_dup(x_2, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10087_1_153 = kk_std_core_types__list_unbox(_b_x149, KK_OWNED, _ctx); /*list<5848>*/;
  kk_std_core_types__list _x_x580 = kk_list__mlift_hc__take__while_10127(x_2, _y_x10087_1_153, _ctx); /*list<5848>*/
  return kk_std_core_types__list_box(_x_x580, _ctx);
}

kk_std_core_types__list kk_list_hc__take__while(kk_std_core_types__list xs, kk_function_t pred_0, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, pred : (a) -> e bool) -> e list<a> */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_function_drop(pred_0, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x572 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x_2 = _con_x572->head;
    kk_std_core_types__list rest_0 = _con_x572->tail;
    kk_reuse_t _ru_x381 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x381 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_std_core_types__list_dup(rest_0, _ctx);
      kk_box_dup(x_2, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    bool x_3_10148;
    kk_function_t _x_x574 = kk_function_dup(pred_0, _ctx); /*(5848) -> 5849 bool*/
    kk_box_t _x_x573 = kk_box_dup(x_2, _ctx); /*5848*/
    x_3_10148 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_context_t*), _x_x574, (_x_x574, _x_x573, _ctx), _ctx); /*bool*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x381,kk_context());
      kk_box_t _x_x575 = kk_std_core_hnd_yield_extend(kk_list_new_hc__take__while_fun576(pred_0, rest_0, x_2, _ctx), _ctx); /*10001*/
      return kk_std_core_types__list_unbox(_x_x575, KK_OWNED, _ctx);
    }
    if (x_3_10148) {
      kk_std_core_types__list x_4_10151 = kk_list_hc__take__while(rest_0, pred_0, _ctx); /*list<5848>*/;
      if (kk_yielding(kk_context())) {
        kk_reuse_drop(_ru_x381,kk_context());
        kk_std_core_types__list_drop(x_4_10151, _ctx);
        kk_box_t _x_x578 = kk_std_core_hnd_yield_extend(kk_list_new_hc__take__while_fun579(x_2, _ctx), _ctx); /*10001*/
        return kk_std_core_types__list_unbox(_x_x578, KK_OWNED, _ctx);
      }
      {
        kk_std_core_types__list _x_x581 = kk_std_core_types__new_Cons(_ru_x381, 0, x_2, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
        return kk_std_core_list_append(_x_x581, x_4_10151, _ctx);
      }
    }
    {
      kk_reuse_drop(_ru_x381,kk_context());
      kk_box_drop(x_2, _ctx);
      kk_std_core_types__list_drop(rest_0, _ctx);
      kk_function_drop(pred_0, _ctx);
      return kk_std_core_types__new_Nil(_ctx);
    }
  }
}
 
// monadic lift

kk_std_core_types__list kk_list__mlift_hc__drop__while_10129(kk_function_t pred, kk_std_core_types__list rest, kk_std_core_types__list xs, bool _y_x10090, kk_context_t* _ctx) { /* forall<a,e> (pred : (a) -> e bool, rest : list<a>, xs : list<a>, bool) -> e list<a> */ 
  if (_y_x10090) {
    kk_std_core_types__list_drop(xs, _ctx);
    return kk_list_hc__drop__while(rest, pred, _ctx);
  }
  {
    kk_std_core_types__list_drop(rest, _ctx);
    kk_function_drop(pred, _ctx);
    return xs;
  }
}
 
// .hc:61


// lift anonymous function
struct kk_list_hc__drop__while_fun585__t {
  struct kk_function_s _base;
  kk_function_t pred_0;
  kk_std_core_types__list rest_0;
  kk_std_core_types__list xs_0;
};
static kk_box_t kk_list_hc__drop__while_fun585(kk_function_t _fself, kk_box_t _b_x155, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__drop__while_fun585(kk_function_t pred_0, kk_std_core_types__list rest_0, kk_std_core_types__list xs_0, kk_context_t* _ctx) {
  struct kk_list_hc__drop__while_fun585__t* _self = kk_function_alloc_as(struct kk_list_hc__drop__while_fun585__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_list_hc__drop__while_fun585, kk_context());
  _self->pred_0 = pred_0;
  _self->rest_0 = rest_0;
  _self->xs_0 = xs_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_list_hc__drop__while_fun585(kk_function_t _fself, kk_box_t _b_x155, kk_context_t* _ctx) {
  struct kk_list_hc__drop__while_fun585__t* _self = kk_function_as(struct kk_list_hc__drop__while_fun585__t*, _fself, _ctx);
  kk_function_t pred_0 = _self->pred_0; /* (5887) -> 5888 bool */
  kk_std_core_types__list rest_0 = _self->rest_0; /* list<5887> */
  kk_std_core_types__list xs_0 = _self->xs_0; /* list<5887> */
  kk_drop_match(_self, {kk_function_dup(pred_0, _ctx);kk_std_core_types__list_dup(rest_0, _ctx);kk_std_core_types__list_dup(xs_0, _ctx);}, {}, _ctx)
  bool _y_x10090_0_157 = kk_bool_unbox(_b_x155); /*bool*/;
  kk_std_core_types__list _x_x586 = kk_list__mlift_hc__drop__while_10129(pred_0, rest_0, xs_0, _y_x10090_0_157, _ctx); /*list<5887>*/
  return kk_std_core_types__list_box(_x_x586, _ctx);
}

kk_std_core_types__list kk_list_hc__drop__while(kk_std_core_types__list xs_0, kk_function_t pred_0, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, pred : (a) -> e bool) -> e list<a> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(xs_0, _ctx)) {
    kk_function_drop(pred_0, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x582 = kk_std_core_types__as_Cons(xs_0, _ctx);
    kk_box_t x = _con_x582->head;
    kk_std_core_types__list rest_0 = _con_x582->tail;
    kk_std_core_types__list_dup(rest_0, _ctx);
    kk_box_dup(x, _ctx);
    bool x_0_10154;
    kk_function_t _x_x583 = kk_function_dup(pred_0, _ctx); /*(5887) -> 5888 bool*/
    x_0_10154 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_context_t*), _x_x583, (_x_x583, x, _ctx), _ctx); /*bool*/
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x584 = kk_std_core_hnd_yield_extend(kk_list_new_hc__drop__while_fun585(pred_0, rest_0, xs_0, _ctx), _ctx); /*10001*/
      return kk_std_core_types__list_unbox(_x_x584, KK_OWNED, _ctx);
    }
    if (x_0_10154) {
      if kk_likely(kk_datatype_ptr_is_unique(xs_0, _ctx)) {
        kk_box_drop(x, _ctx);
        kk_std_core_types__list_drop(rest_0, _ctx);
        kk_datatype_ptr_free(xs_0, _ctx);
      }
      else {
        kk_datatype_ptr_decref(xs_0, _ctx);
      }
      { // tailcall
        xs_0 = rest_0;
        goto kk__tailcall;
      }
    }
    {
      kk_std_core_types__list_drop(rest_0, _ctx);
      kk_function_drop(pred_0, _ctx);
      return xs_0;
    }
  }
}
 
// .hc:68


// lift anonymous function
struct kk_list_hc__count_fun588__t {
  struct kk_function_s _base;
  kk_function_t pred;
};
static kk_box_t kk_list_hc__count_fun588(kk_function_t _fself, kk_box_t _b_x163, kk_box_t _b_x164, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__count_fun588(kk_function_t pred, kk_context_t* _ctx) {
  struct kk_list_hc__count_fun588__t* _self = kk_function_alloc_as(struct kk_list_hc__count_fun588__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_list_hc__count_fun588, kk_context());
  _self->pred = pred;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_list_hc__count_fun589__t {
  struct kk_function_s _base;
  kk_integer_t acc_169;
};
static kk_integer_t kk_list_hc__count_fun589(kk_function_t _fself, bool _y_x10094, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__count_fun589(kk_integer_t acc_169, kk_context_t* _ctx) {
  struct kk_list_hc__count_fun589__t* _self = kk_function_alloc_as(struct kk_list_hc__count_fun589__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_list_hc__count_fun589, kk_context());
  _self->acc_169 = acc_169;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_integer_t kk_list_hc__count_fun589(kk_function_t _fself, bool _y_x10094, kk_context_t* _ctx) {
  struct kk_list_hc__count_fun589__t* _self = kk_function_as(struct kk_list_hc__count_fun589__t*, _fself, _ctx);
  kk_integer_t acc_169 = _self->acc_169; /* int */
  kk_drop_match(_self, {kk_integer_dup(acc_169, _ctx);}, {}, _ctx)
  if (_y_x10094) {
    return kk_integer_add_small_const(acc_169, 1, _ctx);
  }
  {
    return acc_169;
  }
}


// lift anonymous function
struct kk_list_hc__count_fun592__t {
  struct kk_function_s _base;
  kk_function_t next_10158;
};
static kk_box_t kk_list_hc__count_fun592(kk_function_t _fself, kk_box_t _b_x159, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__count_fun592(kk_function_t next_10158, kk_context_t* _ctx) {
  struct kk_list_hc__count_fun592__t* _self = kk_function_alloc_as(struct kk_list_hc__count_fun592__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_list_hc__count_fun592, kk_context());
  _self->next_10158 = next_10158;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_list_hc__count_fun592(kk_function_t _fself, kk_box_t _b_x159, kk_context_t* _ctx) {
  struct kk_list_hc__count_fun592__t* _self = kk_function_as(struct kk_list_hc__count_fun592__t*, _fself, _ctx);
  kk_function_t next_10158 = _self->next_10158; /* (bool) -> 5927 int */
  kk_drop_match(_self, {kk_function_dup(next_10158, _ctx);}, {}, _ctx)
  kk_integer_t _x_x593;
  bool _x_x594 = kk_bool_unbox(_b_x159); /*bool*/
  _x_x593 = kk_function_call(kk_integer_t, (kk_function_t, bool, kk_context_t*), next_10158, (next_10158, _x_x594, _ctx), _ctx); /*int*/
  return kk_integer_box(_x_x593, _ctx);
}
static kk_box_t kk_list_hc__count_fun588(kk_function_t _fself, kk_box_t _b_x163, kk_box_t _b_x164, kk_context_t* _ctx) {
  struct kk_list_hc__count_fun588__t* _self = kk_function_as(struct kk_list_hc__count_fun588__t*, _fself, _ctx);
  kk_function_t pred = _self->pred; /* (5926) -> 5927 bool */
  kk_drop_match(_self, {kk_function_dup(pred, _ctx);}, {}, _ctx)
  kk_integer_t acc_169 = kk_integer_unbox(_b_x163, _ctx); /*int*/;
  kk_box_t x_170 = _b_x164; /*5926*/;
  bool x_0_10157 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_context_t*), pred, (pred, x_170, _ctx), _ctx); /*bool*/;
  kk_function_t next_10158 = kk_list_new_hc__count_fun589(acc_169, _ctx); /*(bool) -> 5927 int*/;
  kk_integer_t _x_x590;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x591 = kk_std_core_hnd_yield_extend(kk_list_new_hc__count_fun592(next_10158, _ctx), _ctx); /*10001*/
    _x_x590 = kk_integer_unbox(_x_x591, _ctx); /*int*/
  }
  else {
    _x_x590 = kk_function_call(kk_integer_t, (kk_function_t, bool, kk_context_t*), next_10158, (next_10158, x_0_10157, _ctx), _ctx); /*int*/
  }
  return kk_integer_box(_x_x590, _ctx);
}

kk_integer_t kk_list_hc__count(kk_std_core_types__list xs, kk_function_t pred, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, pred : (a) -> e bool) -> e int */ 
  kk_box_t _x_x587 = kk_std_core_list_foldl(xs, kk_integer_box(kk_integer_from_small(0), _ctx), kk_list_new_hc__count_fun588(pred, _ctx), _ctx); /*10002*/
  return kk_integer_unbox(_x_x587, _ctx);
}
 
// .hc:74

kk_std_core_types__list kk_list_hc__group__by__insert(kk_std_core_types__list pairs, kk_string_t key, kk_box_t item, kk_context_t* _ctx) { /* forall<a> (pairs : list<(string, list<a>)>, key : string, item : a) -> list<(string, list<a>)> */ 
  if (kk_std_core_types__is_Nil(pairs, _ctx)) {
    kk_box_t _x_x595;
    kk_std_core_types__tuple2 _x_x596;
    kk_box_t _x_x597;
    kk_std_core_types__list _x_x598 = kk_std_core_types__new_Cons(kk_reuse_null, 0, item, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    _x_x597 = kk_std_core_types__list_box(_x_x598, _ctx); /*10038*/
    _x_x596 = kk_std_core_types__new_Tuple2(kk_string_box(key), _x_x597, _ctx); /*(10037, 10038)*/
    _x_x595 = kk_std_core_types__tuple2_box(_x_x596, _ctx); /*10021*/
    return kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x595, kk_std_core_types__new_Nil(_ctx), _ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x599 = kk_std_core_types__as_Cons(pairs, _ctx);
    kk_box_t _box_x175 = _con_x599->head;
    kk_std_core_types__list rest = _con_x599->tail;
    kk_std_core_types__tuple2 p = kk_std_core_types__tuple2_unbox(_box_x175, KK_BORROWED, _ctx);
    kk_reuse_t _ru_x383 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(pairs, _ctx)) {
      kk_std_core_types__tuple2_dup(p, _ctx);
      kk_box_drop(_box_x175, _ctx);
      _ru_x383 = (kk_datatype_ptr_reuse(pairs, _ctx));
    }
    else {
      kk_std_core_types__tuple2_dup(p, _ctx);
      kk_std_core_types__list_dup(rest, _ctx);
      kk_datatype_ptr_decref(pairs, _ctx);
    }
    {
      kk_box_t _box_x176 = p.fst;
      kk_box_t _box_x177 = p.snd;
      kk_string_t k = kk_string_unbox(_box_x176);
      kk_std_core_types__list vs = kk_std_core_types__list_unbox(_box_x177, KK_BORROWED, _ctx);
      kk_string_dup(k, _ctx);
      kk_std_core_types__list_dup(vs, _ctx);
      kk_std_core_types__tuple2_drop(p, _ctx);
      bool _match_x261;
      kk_string_t _x_x600 = kk_string_dup(k, _ctx); /*string*/
      kk_string_t _x_x601 = kk_string_dup(key, _ctx); /*string*/
      _match_x261 = kk_string_is_eq(_x_x600,_x_x601,kk_context()); /*bool*/
      if (_match_x261) {
        kk_string_drop(key, _ctx);
        kk_std_core_types__list _b_x179_185;
        kk_std_core_types__list _x_x602 = kk_std_core_types__new_Cons(_ru_x383, 0, item, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
        _b_x179_185 = kk_std_core_list_append(vs, _x_x602, _ctx); /*list<6200>*/
        kk_std_core_types__list _x_x603;
        kk_box_t _x_x604;
        kk_std_core_types__tuple2 _x_x605 = kk_std_core_types__new_Tuple2(kk_string_box(k), kk_std_core_types__list_box(_b_x179_185, _ctx), _ctx); /*(10037, 10038)*/
        _x_x604 = kk_std_core_types__tuple2_box(_x_x605, _ctx); /*10021*/
        _x_x603 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x604, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
        return kk_std_core_list_append(_x_x603, rest, _ctx);
      }
      {
        kk_std_core_types__list ys_1_10078 = kk_list_hc__group__by__insert(rest, key, item, _ctx); /*list<(string, list<6200>)>*/;
        kk_std_core_types__list _x_x606;
        kk_box_t _x_x607;
        kk_std_core_types__tuple2 _x_x608 = kk_std_core_types__new_Tuple2(kk_string_box(k), kk_std_core_types__list_box(vs, _ctx), _ctx); /*(10037, 10038)*/
        _x_x607 = kk_std_core_types__tuple2_box(_x_x608, _ctx); /*10021*/
        _x_x606 = kk_std_core_types__new_Cons(_ru_x383, 0, _x_x607, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
        return kk_std_core_list_append(_x_x606, ys_1_10078, _ctx);
      }
    }
  }
}
 
// .hc:82


// lift anonymous function
struct kk_list_hc__group__by_fun610__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_list_hc__group__by_fun610(kk_function_t _fself, kk_box_t _b_x203, kk_box_t _b_x204, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__group__by_fun610(kk_function_t f, kk_context_t* _ctx) {
  struct kk_list_hc__group__by_fun610__t* _self = kk_function_alloc_as(struct kk_list_hc__group__by_fun610__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_list_hc__group__by_fun610, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_list_hc__group__by_fun614__t {
  struct kk_function_s _base;
  kk_std_core_types__list acc_209;
  kk_box_t x_210;
};
static kk_box_t kk_list_hc__group__by_fun614(kk_function_t _fself, kk_box_t _b_x199, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__group__by_fun614(kk_std_core_types__list acc_209, kk_box_t x_210, kk_context_t* _ctx) {
  struct kk_list_hc__group__by_fun614__t* _self = kk_function_alloc_as(struct kk_list_hc__group__by_fun614__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_list_hc__group__by_fun614, kk_context());
  _self->acc_209 = acc_209;
  _self->x_210 = x_210;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_list_hc__group__by_fun614(kk_function_t _fself, kk_box_t _b_x199, kk_context_t* _ctx) {
  struct kk_list_hc__group__by_fun614__t* _self = kk_function_as(struct kk_list_hc__group__by_fun614__t*, _fself, _ctx);
  kk_std_core_types__list acc_209 = _self->acc_209; /* list<(string, list<6238>)> */
  kk_box_t x_210 = _self->x_210; /* 6238 */
  kk_drop_match(_self, {kk_std_core_types__list_dup(acc_209, _ctx);kk_box_dup(x_210, _ctx);}, {}, _ctx)
  kk_string_t _y_x10097_211 = kk_string_unbox(_b_x199); /*string*/;
  kk_std_core_types__list _x_x615 = kk_list_hc__group__by__insert(acc_209, _y_x10097_211, x_210, _ctx); /*list<(string, list<6199>)>*/
  return kk_std_core_types__list_box(_x_x615, _ctx);
}
static kk_box_t kk_list_hc__group__by_fun610(kk_function_t _fself, kk_box_t _b_x203, kk_box_t _b_x204, kk_context_t* _ctx) {
  struct kk_list_hc__group__by_fun610__t* _self = kk_function_as(struct kk_list_hc__group__by_fun610__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (6238) -> 6239 string */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_std_core_types__list acc_209 = kk_std_core_types__list_unbox(_b_x203, KK_OWNED, _ctx); /*list<(string, list<6238>)>*/;
  kk_box_t x_210 = _b_x204; /*6238*/;
  kk_string_t x_0_10161;
  kk_box_t _x_x611 = kk_box_dup(x_210, _ctx); /*6238*/
  x_0_10161 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), f, (f, _x_x611, _ctx), _ctx); /*string*/
  kk_std_core_types__list _x_x612;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_0_10161, _ctx);
    kk_box_t _x_x613 = kk_std_core_hnd_yield_extend(kk_list_new_hc__group__by_fun614(acc_209, x_210, _ctx), _ctx); /*10001*/
    _x_x612 = kk_std_core_types__list_unbox(_x_x613, KK_OWNED, _ctx); /*list<(string, list<6238>)>*/
  }
  else {
    _x_x612 = kk_list_hc__group__by__insert(acc_209, x_0_10161, x_210, _ctx); /*list<(string, list<6238>)>*/
  }
  return kk_std_core_types__list_box(_x_x612, _ctx);
}

kk_std_core_types__list kk_list_hc__group__by(kk_std_core_types__list xs, kk_function_t f, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, f : (a) -> e string) -> e list<(string, list<a>)> */ 
  kk_box_t _x_x609 = kk_std_core_list_foldl(xs, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), kk_list_new_hc__group__by_fun610(f, _ctx), _ctx); /*10002*/
  return kk_std_core_types__list_unbox(_x_x609, KK_OWNED, _ctx);
}
 
// .hc:87

kk_box_t kk_list_hc__pick__min(kk_box_t a, kk_box_t b, kk_integer_t ka, kk_integer_t kb, kk_context_t* _ctx) { /* forall<a> (a : a, b : a, ka : int, kb : int) -> a */ 
  bool _match_x258;
  bool _brw_x259 = kk_integer_lt_borrow(ka,kb,kk_context()); /*bool*/;
  kk_integer_drop(ka, _ctx);
  kk_integer_drop(kb, _ctx);
  _match_x258 = _brw_x259; /*bool*/
  if (_match_x258) {
    kk_box_drop(b, _ctx);
    return a;
  }
  {
    kk_box_drop(a, _ctx);
    return b;
  }
}
 
// .hc:88

kk_box_t kk_list_hc__pick__max(kk_box_t a, kk_box_t b, kk_integer_t ka, kk_integer_t kb, kk_context_t* _ctx) { /* forall<a> (a : a, b : a, ka : int, kb : int) -> a */ 
  bool _match_x256;
  bool _brw_x257 = kk_integer_gt_borrow(ka,kb,kk_context()); /*bool*/;
  kk_integer_drop(ka, _ctx);
  kk_integer_drop(kb, _ctx);
  _match_x256 = _brw_x257; /*bool*/
  if (_match_x256) {
    kk_box_drop(b, _ctx);
    return a;
  }
  {
    kk_box_drop(a, _ctx);
    return b;
  }
}
 
// monadic lift

kk_box_t kk_list__mlift_hc__min__by_10132(kk_integer_t _y_x10099, kk_box_t best, kk_box_t x, kk_integer_t _y_x10100, kk_context_t* _ctx) { /* forall<a,e> (int, best : a, x : a, int) -> e a */ 
  bool _match_x254;
  bool _brw_x255 = kk_integer_lt_borrow(_y_x10099,_y_x10100,kk_context()); /*bool*/;
  kk_integer_drop(_y_x10099, _ctx);
  kk_integer_drop(_y_x10100, _ctx);
  _match_x254 = _brw_x255; /*bool*/
  if (_match_x254) {
    kk_box_drop(best, _ctx);
    return x;
  }
  {
    kk_box_drop(x, _ctx);
    return best;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_list__mlift_hc__min__by_10133_fun617__t {
  struct kk_function_s _base;
  kk_integer_t _y_x10099;
  kk_box_t best;
  kk_box_t x;
};
static kk_box_t kk_list__mlift_hc__min__by_10133_fun617(kk_function_t _fself, kk_box_t _b_x213, kk_context_t* _ctx);
static kk_function_t kk_list__new_mlift_hc__min__by_10133_fun617(kk_integer_t _y_x10099, kk_box_t best, kk_box_t x, kk_context_t* _ctx) {
  struct kk_list__mlift_hc__min__by_10133_fun617__t* _self = kk_function_alloc_as(struct kk_list__mlift_hc__min__by_10133_fun617__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_list__mlift_hc__min__by_10133_fun617, kk_context());
  _self->_y_x10099 = _y_x10099;
  _self->best = best;
  _self->x = x;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_list__mlift_hc__min__by_10133_fun617(kk_function_t _fself, kk_box_t _b_x213, kk_context_t* _ctx) {
  struct kk_list__mlift_hc__min__by_10133_fun617__t* _self = kk_function_as(struct kk_list__mlift_hc__min__by_10133_fun617__t*, _fself, _ctx);
  kk_integer_t _y_x10099 = _self->_y_x10099; /* int */
  kk_box_t best = _self->best; /* 6402 */
  kk_box_t x = _self->x; /* 6402 */
  kk_drop_match(_self, {kk_integer_dup(_y_x10099, _ctx);kk_box_dup(best, _ctx);kk_box_dup(x, _ctx);}, {}, _ctx)
  kk_integer_t _y_x10100_215 = kk_integer_unbox(_b_x213, _ctx); /*int*/;
  bool _match_x252;
  bool _brw_x253 = kk_integer_lt_borrow(_y_x10099,_y_x10100_215,kk_context()); /*bool*/;
  kk_integer_drop(_y_x10099, _ctx);
  kk_integer_drop(_y_x10100_215, _ctx);
  _match_x252 = _brw_x253; /*bool*/
  if (_match_x252) {
    kk_box_drop(best, _ctx);
    return x;
  }
  {
    kk_box_drop(x, _ctx);
    return best;
  }
}

kk_box_t kk_list__mlift_hc__min__by_10133(kk_box_t best, kk_function_t f, kk_box_t x, kk_integer_t _y_x10099, kk_context_t* _ctx) { /* forall<a,e> (best : a, f : (a) -> e int, x : a, int) -> e a */ 
  kk_integer_t x_0_10166;
  kk_box_t _x_x616 = kk_box_dup(best, _ctx); /*6402*/
  x_0_10166 = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, kk_context_t*), f, (f, _x_x616, _ctx), _ctx); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_0_10166, _ctx);
    return kk_std_core_hnd_yield_extend(kk_list__new_mlift_hc__min__by_10133_fun617(_y_x10099, best, x, _ctx), _ctx);
  }
  {
    kk_integer_t _y_x10100_216 = x_0_10166; /*int*/;
    bool _match_x250;
    bool _brw_x251 = kk_integer_lt_borrow(_y_x10099,_y_x10100_216,kk_context()); /*bool*/;
    kk_integer_drop(_y_x10099, _ctx);
    kk_integer_drop(_y_x10100_216, _ctx);
    _match_x250 = _brw_x251; /*bool*/
    if (_match_x250) {
      kk_box_drop(best, _ctx);
      return x;
    }
    {
      kk_box_drop(x, _ctx);
      return best;
    }
  }
}
 
// .hc:91


// lift anonymous function
struct kk_list_hc__min__by_fun619__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_list_hc__min__by_fun619(kk_function_t _fself, kk_box_t best, kk_box_t x_0, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__min__by_fun619(kk_function_t f, kk_context_t* _ctx) {
  struct kk_list_hc__min__by_fun619__t* _self = kk_function_alloc_as(struct kk_list_hc__min__by_fun619__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_list_hc__min__by_fun619, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_list_hc__min__by_fun622__t {
  struct kk_function_s _base;
  kk_box_t best;
  kk_function_t f;
  kk_box_t x_0;
};
static kk_box_t kk_list_hc__min__by_fun622(kk_function_t _fself, kk_box_t _b_x218, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__min__by_fun622(kk_box_t best, kk_function_t f, kk_box_t x_0, kk_context_t* _ctx) {
  struct kk_list_hc__min__by_fun622__t* _self = kk_function_alloc_as(struct kk_list_hc__min__by_fun622__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_list_hc__min__by_fun622, kk_context());
  _self->best = best;
  _self->f = f;
  _self->x_0 = x_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_list_hc__min__by_fun622(kk_function_t _fself, kk_box_t _b_x218, kk_context_t* _ctx) {
  struct kk_list_hc__min__by_fun622__t* _self = kk_function_as(struct kk_list_hc__min__by_fun622__t*, _fself, _ctx);
  kk_box_t best = _self->best; /* 6402 */
  kk_function_t f = _self->f; /* (6402) -> 6403 int */
  kk_box_t x_0 = _self->x_0; /* 6402 */
  kk_drop_match(_self, {kk_box_dup(best, _ctx);kk_function_dup(f, _ctx);kk_box_dup(x_0, _ctx);}, {}, _ctx)
  kk_integer_t _x_x623 = kk_integer_unbox(_b_x218, _ctx); /*int*/
  return kk_list__mlift_hc__min__by_10133(best, f, x_0, _x_x623, _ctx);
}
static kk_box_t kk_list_hc__min__by_fun619(kk_function_t _fself, kk_box_t best, kk_box_t x_0, kk_context_t* _ctx) {
  struct kk_list_hc__min__by_fun619__t* _self = kk_function_as(struct kk_list_hc__min__by_fun619__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (6402) -> 6403 int */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_integer_t x_1_10175;
  kk_function_t _x_x621 = kk_function_dup(f, _ctx); /*(6402) -> 6403 int*/
  kk_box_t _x_x620 = kk_box_dup(x_0, _ctx); /*6402*/
  x_1_10175 = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, kk_context_t*), _x_x621, (_x_x621, _x_x620, _ctx), _ctx); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_1_10175, _ctx);
    return kk_std_core_hnd_yield_extend(kk_list_new_hc__min__by_fun622(best, f, x_0, _ctx), _ctx);
  }
  {
    return kk_list__mlift_hc__min__by_10133(best, f, x_0, x_1_10175, _ctx);
  }
}


// lift anonymous function
struct kk_list_hc__min__by_fun625__t {
  struct kk_function_s _base;
};
static kk_box_t kk_list_hc__min__by_fun625(kk_function_t _fself, kk_box_t _b_x222, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__min__by_fun625(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_list_hc__min__by_fun625, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_list_hc__min__by_fun625(kk_function_t _fself, kk_box_t _b_x222, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_box_t _y_x10101_224 = _b_x222; /*6402*/;
  kk_std_core_types__maybe _x_x626 = kk_std_core_types__new_Just(_y_x10101_224, _ctx); /*maybe<10024>*/
  return kk_std_core_types__maybe_box(_x_x626, _ctx);
}

kk_std_core_types__maybe kk_list_hc__min__by(kk_std_core_types__list xs, kk_function_t f, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, f : (a) -> e int) -> e maybe<a> */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_function_drop(f, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x618 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t first = _con_x618->head;
    kk_std_core_types__list rest = _con_x618->tail;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_box_dup(first, _ctx);
      kk_std_core_types__list_dup(rest, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_box_t x_10172 = kk_std_core_list_foldl(rest, first, kk_list_new_hc__min__by_fun619(f, _ctx), _ctx); /*6402*/;
    if (kk_yielding(kk_context())) {
      kk_box_drop(x_10172, _ctx);
      kk_box_t _x_x624 = kk_std_core_hnd_yield_extend(kk_list_new_hc__min__by_fun625(_ctx), _ctx); /*10001*/
      return kk_std_core_types__maybe_unbox(_x_x624, KK_OWNED, _ctx);
    }
    {
      return kk_std_core_types__new_Just(x_10172, _ctx);
    }
  }
}
 
// monadic lift

kk_box_t kk_list__mlift_hc__max__by_10135(kk_integer_t _y_x10103, kk_box_t best, kk_box_t x, kk_integer_t _y_x10104, kk_context_t* _ctx) { /* forall<a,e> (int, best : a, x : a, int) -> e a */ 
  bool _match_x245;
  bool _brw_x246 = kk_integer_gt_borrow(_y_x10103,_y_x10104,kk_context()); /*bool*/;
  kk_integer_drop(_y_x10103, _ctx);
  kk_integer_drop(_y_x10104, _ctx);
  _match_x245 = _brw_x246; /*bool*/
  if (_match_x245) {
    kk_box_drop(best, _ctx);
    return x;
  }
  {
    kk_box_drop(x, _ctx);
    return best;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_list__mlift_hc__max__by_10136_fun628__t {
  struct kk_function_s _base;
  kk_integer_t _y_x10103;
  kk_box_t best;
  kk_box_t x;
};
static kk_box_t kk_list__mlift_hc__max__by_10136_fun628(kk_function_t _fself, kk_box_t _b_x226, kk_context_t* _ctx);
static kk_function_t kk_list__new_mlift_hc__max__by_10136_fun628(kk_integer_t _y_x10103, kk_box_t best, kk_box_t x, kk_context_t* _ctx) {
  struct kk_list__mlift_hc__max__by_10136_fun628__t* _self = kk_function_alloc_as(struct kk_list__mlift_hc__max__by_10136_fun628__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_list__mlift_hc__max__by_10136_fun628, kk_context());
  _self->_y_x10103 = _y_x10103;
  _self->best = best;
  _self->x = x;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_list__mlift_hc__max__by_10136_fun628(kk_function_t _fself, kk_box_t _b_x226, kk_context_t* _ctx) {
  struct kk_list__mlift_hc__max__by_10136_fun628__t* _self = kk_function_as(struct kk_list__mlift_hc__max__by_10136_fun628__t*, _fself, _ctx);
  kk_integer_t _y_x10103 = _self->_y_x10103; /* int */
  kk_box_t best = _self->best; /* 6468 */
  kk_box_t x = _self->x; /* 6468 */
  kk_drop_match(_self, {kk_integer_dup(_y_x10103, _ctx);kk_box_dup(best, _ctx);kk_box_dup(x, _ctx);}, {}, _ctx)
  kk_integer_t _y_x10104_228 = kk_integer_unbox(_b_x226, _ctx); /*int*/;
  bool _match_x243;
  bool _brw_x244 = kk_integer_gt_borrow(_y_x10103,_y_x10104_228,kk_context()); /*bool*/;
  kk_integer_drop(_y_x10103, _ctx);
  kk_integer_drop(_y_x10104_228, _ctx);
  _match_x243 = _brw_x244; /*bool*/
  if (_match_x243) {
    kk_box_drop(best, _ctx);
    return x;
  }
  {
    kk_box_drop(x, _ctx);
    return best;
  }
}

kk_box_t kk_list__mlift_hc__max__by_10136(kk_box_t best, kk_function_t f, kk_box_t x, kk_integer_t _y_x10103, kk_context_t* _ctx) { /* forall<a,e> (best : a, f : (a) -> e int, x : a, int) -> e a */ 
  kk_integer_t x_0_10178;
  kk_box_t _x_x627 = kk_box_dup(best, _ctx); /*6468*/
  x_0_10178 = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, kk_context_t*), f, (f, _x_x627, _ctx), _ctx); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_0_10178, _ctx);
    return kk_std_core_hnd_yield_extend(kk_list__new_mlift_hc__max__by_10136_fun628(_y_x10103, best, x, _ctx), _ctx);
  }
  {
    kk_integer_t _y_x10104_229 = x_0_10178; /*int*/;
    bool _match_x241;
    bool _brw_x242 = kk_integer_gt_borrow(_y_x10103,_y_x10104_229,kk_context()); /*bool*/;
    kk_integer_drop(_y_x10103, _ctx);
    kk_integer_drop(_y_x10104_229, _ctx);
    _match_x241 = _brw_x242; /*bool*/
    if (_match_x241) {
      kk_box_drop(best, _ctx);
      return x;
    }
    {
      kk_box_drop(x, _ctx);
      return best;
    }
  }
}
 
// .hc:97


// lift anonymous function
struct kk_list_hc__max__by_fun630__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_list_hc__max__by_fun630(kk_function_t _fself, kk_box_t best, kk_box_t x_0, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__max__by_fun630(kk_function_t f, kk_context_t* _ctx) {
  struct kk_list_hc__max__by_fun630__t* _self = kk_function_alloc_as(struct kk_list_hc__max__by_fun630__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_list_hc__max__by_fun630, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_list_hc__max__by_fun633__t {
  struct kk_function_s _base;
  kk_box_t best;
  kk_function_t f;
  kk_box_t x_0;
};
static kk_box_t kk_list_hc__max__by_fun633(kk_function_t _fself, kk_box_t _b_x231, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__max__by_fun633(kk_box_t best, kk_function_t f, kk_box_t x_0, kk_context_t* _ctx) {
  struct kk_list_hc__max__by_fun633__t* _self = kk_function_alloc_as(struct kk_list_hc__max__by_fun633__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_list_hc__max__by_fun633, kk_context());
  _self->best = best;
  _self->f = f;
  _self->x_0 = x_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_list_hc__max__by_fun633(kk_function_t _fself, kk_box_t _b_x231, kk_context_t* _ctx) {
  struct kk_list_hc__max__by_fun633__t* _self = kk_function_as(struct kk_list_hc__max__by_fun633__t*, _fself, _ctx);
  kk_box_t best = _self->best; /* 6468 */
  kk_function_t f = _self->f; /* (6468) -> 6469 int */
  kk_box_t x_0 = _self->x_0; /* 6468 */
  kk_drop_match(_self, {kk_box_dup(best, _ctx);kk_function_dup(f, _ctx);kk_box_dup(x_0, _ctx);}, {}, _ctx)
  kk_integer_t _x_x634 = kk_integer_unbox(_b_x231, _ctx); /*int*/
  return kk_list__mlift_hc__max__by_10136(best, f, x_0, _x_x634, _ctx);
}
static kk_box_t kk_list_hc__max__by_fun630(kk_function_t _fself, kk_box_t best, kk_box_t x_0, kk_context_t* _ctx) {
  struct kk_list_hc__max__by_fun630__t* _self = kk_function_as(struct kk_list_hc__max__by_fun630__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (6468) -> 6469 int */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_integer_t x_1_10187;
  kk_function_t _x_x632 = kk_function_dup(f, _ctx); /*(6468) -> 6469 int*/
  kk_box_t _x_x631 = kk_box_dup(x_0, _ctx); /*6468*/
  x_1_10187 = kk_function_call(kk_integer_t, (kk_function_t, kk_box_t, kk_context_t*), _x_x632, (_x_x632, _x_x631, _ctx), _ctx); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_1_10187, _ctx);
    return kk_std_core_hnd_yield_extend(kk_list_new_hc__max__by_fun633(best, f, x_0, _ctx), _ctx);
  }
  {
    return kk_list__mlift_hc__max__by_10136(best, f, x_0, x_1_10187, _ctx);
  }
}


// lift anonymous function
struct kk_list_hc__max__by_fun636__t {
  struct kk_function_s _base;
};
static kk_box_t kk_list_hc__max__by_fun636(kk_function_t _fself, kk_box_t _b_x235, kk_context_t* _ctx);
static kk_function_t kk_list_new_hc__max__by_fun636(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_list_hc__max__by_fun636, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_list_hc__max__by_fun636(kk_function_t _fself, kk_box_t _b_x235, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_box_t _y_x10105_237 = _b_x235; /*6468*/;
  kk_std_core_types__maybe _x_x637 = kk_std_core_types__new_Just(_y_x10105_237, _ctx); /*maybe<10024>*/
  return kk_std_core_types__maybe_box(_x_x637, _ctx);
}

kk_std_core_types__maybe kk_list_hc__max__by(kk_std_core_types__list xs, kk_function_t f, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, f : (a) -> e int) -> e maybe<a> */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_function_drop(f, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x629 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t first = _con_x629->head;
    kk_std_core_types__list rest = _con_x629->tail;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_box_dup(first, _ctx);
      kk_std_core_types__list_dup(rest, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_box_t x_10184 = kk_std_core_list_foldl(rest, first, kk_list_new_hc__max__by_fun630(f, _ctx), _ctx); /*6468*/;
    if (kk_yielding(kk_context())) {
      kk_box_drop(x_10184, _ctx);
      kk_box_t _x_x635 = kk_std_core_hnd_yield_extend(kk_list_new_hc__max__by_fun636(_ctx), _ctx); /*10001*/
      return kk_std_core_types__maybe_unbox(_x_x635, KK_OWNED, _ctx);
    }
    {
      return kk_std_core_types__new_Just(x_10184, _ctx);
    }
  }
}

// initialization
void kk_list__init(kk_context_t* _ctx){
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
void kk_list__done(kk_context_t* _ctx){
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
