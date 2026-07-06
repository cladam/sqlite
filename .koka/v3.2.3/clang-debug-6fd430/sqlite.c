// Koka generated module: sqlite, koka version: 3.2.3, platform: 64-bit
#include "sqlite.h"


// lift anonymous function
struct kk_sqlite_hc_assert_fun777__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc_assert_fun777(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc_assert_fun777(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc_assert_fun777, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc_assert_fun777(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x778;
  bool b_0_9 = kk_bool_unbox(_b_x2); /*bool*/;
  if (b_0_9) {
    _x_x778 = false; /*bool*/
  }
  else {
    _x_x778 = true; /*bool*/
  }
  return kk_bool_box(_x_x778);
}

kk_unit_t kk_sqlite_hc_assert(bool b, kk_context_t* _ctx) { /* (b : bool) -> exn () */ 
  bool _match_x755;
  kk_box_t _x_x776 = kk_std_core_hnd__open_none1(kk_sqlite_new_hc_assert_fun777(_ctx), kk_bool_box(b), _ctx); /*10001*/
  _match_x755 = kk_bool_unbox(_x_x776); /*bool*/
  if (_match_x755) {
    kk_box_t _x_x779;
    kk_string_t _x_x780;
    kk_define_string_literal(static, _s_x781, 16, "assertion failed", _ctx)
    _x_x780 = kk_string_dup(_s_x781, _ctx); /*string*/
    _x_x779 = kk_std_core_exn_throw(_x_x780, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    kk_unit_unbox(_x_x779); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}


// lift anonymous function
struct kk_sqlite_hc_show_maybe_fun789__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc_show_maybe_fun789(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc_show_maybe_fun789(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc_show_maybe_fun789, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc_show_maybe_fun789(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _y_x10090_13 = kk_string_unbox(_b_x11); /*string*/;
  kk_string_t _x_x790;
  kk_string_t _x_x791;
  kk_define_string_literal(static, _s_x792, 5, "Some(", _ctx)
  _x_x791 = kk_string_dup(_s_x792, _ctx); /*string*/
  kk_string_t _x_x793;
  kk_string_t _x_x794;
  kk_define_string_literal(static, _s_x795, 1, ")", _ctx)
  _x_x794 = kk_string_dup(_s_x795, _ctx); /*string*/
  _x_x793 = kk_std_core_types__lp__plus__plus__rp_(_y_x10090_13, _x_x794, _ctx); /*string*/
  _x_x790 = kk_std_core_types__lp__plus__plus__rp_(_x_x791, _x_x793, _ctx); /*string*/
  return kk_string_box(_x_x790);
}

kk_string_t kk_sqlite_hc_show_maybe(kk_std_core_types__maybe m, kk_function_t show_a, kk_context_t* _ctx) { /* forall<a,e> (m : maybe<a>, show-a : (a) -> e string) -> e string */ 
  if (kk_std_core_types__is_Nothing(m, _ctx)) {
    kk_function_drop(show_a, _ctx);
    kk_define_string_literal(static, _s_x787, 4, "None", _ctx)
    return kk_string_dup(_s_x787, _ctx);
  }
  {
    kk_box_t x = m._cons.Just.value;
    kk_string_t x_0_10193 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), show_a, (show_a, x, _ctx), _ctx); /*string*/;
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_0_10193, _ctx);
      kk_box_t _x_x788 = kk_std_core_hnd_yield_extend(kk_sqlite_new_hc_show_maybe_fun789(_ctx), _ctx); /*10001*/
      return kk_string_unbox(_x_x788);
    }
    {
      kk_string_t _x_x796;
      kk_define_string_literal(static, _s_x797, 5, "Some(", _ctx)
      _x_x796 = kk_string_dup(_s_x797, _ctx); /*string*/
      kk_string_t _x_x798;
      kk_string_t _x_x799;
      kk_define_string_literal(static, _s_x800, 1, ")", _ctx)
      _x_x799 = kk_string_dup(_s_x800, _ctx); /*string*/
      _x_x798 = kk_std_core_types__lp__plus__plus__rp_(x_0_10193, _x_x799, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x796, _x_x798, _ctx);
    }
  }
}


// lift anonymous function
struct kk_sqlite_hc_show_result_fun812__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc_show_result_fun812(kk_function_t _fself, kk_box_t _b_x15, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc_show_result_fun812(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc_show_result_fun812, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc_show_result_fun812(kk_function_t _fself, kk_box_t _b_x15, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _y_x10092_20 = kk_string_unbox(_b_x15); /*string*/;
  kk_string_t _x_x813;
  kk_string_t _x_x814;
  kk_define_string_literal(static, _s_x815, 3, "Ok(", _ctx)
  _x_x814 = kk_string_dup(_s_x815, _ctx); /*string*/
  kk_string_t _x_x816;
  kk_string_t _x_x817;
  kk_define_string_literal(static, _s_x818, 1, ")", _ctx)
  _x_x817 = kk_string_dup(_s_x818, _ctx); /*string*/
  _x_x816 = kk_std_core_types__lp__plus__plus__rp_(_y_x10092_20, _x_x817, _ctx); /*string*/
  _x_x813 = kk_std_core_types__lp__plus__plus__rp_(_x_x814, _x_x816, _ctx); /*string*/
  return kk_string_box(_x_x813);
}


// lift anonymous function
struct kk_sqlite_hc_show_result_fun825__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc_show_result_fun825(kk_function_t _fself, kk_box_t _b_x17, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc_show_result_fun825(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc_show_result_fun825, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc_show_result_fun825(kk_function_t _fself, kk_box_t _b_x17, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _y_x10093_21 = kk_string_unbox(_b_x17); /*string*/;
  kk_string_t _x_x826;
  kk_string_t _x_x827;
  kk_define_string_literal(static, _s_x828, 4, "Err(", _ctx)
  _x_x827 = kk_string_dup(_s_x828, _ctx); /*string*/
  kk_string_t _x_x829;
  kk_string_t _x_x830;
  kk_define_string_literal(static, _s_x831, 1, ")", _ctx)
  _x_x830 = kk_string_dup(_s_x831, _ctx); /*string*/
  _x_x829 = kk_std_core_types__lp__plus__plus__rp_(_y_x10093_21, _x_x830, _ctx); /*string*/
  _x_x826 = kk_std_core_types__lp__plus__plus__rp_(_x_x827, _x_x829, _ctx); /*string*/
  return kk_string_box(_x_x826);
}

kk_string_t kk_sqlite_hc_show_result(kk_std_core_types__either r, kk_function_t show_a, kk_function_t show_e, kk_context_t* _ctx) { /* forall<a,b,e> (r : either<a,b>, show-a : (b) -> e string, show-e : (a) -> e string) -> e string */ 
  if (kk_std_core_types__is_Right(r, _ctx)) {
    kk_box_t x = r._cons.Right.right;
    kk_function_drop(show_e, _ctx);
    kk_string_t x_0_10197 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), show_a, (show_a, x, _ctx), _ctx); /*string*/;
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_0_10197, _ctx);
      kk_box_t _x_x811 = kk_std_core_hnd_yield_extend(kk_sqlite_new_hc_show_result_fun812(_ctx), _ctx); /*10001*/
      return kk_string_unbox(_x_x811);
    }
    {
      kk_string_t _x_x819;
      kk_define_string_literal(static, _s_x820, 3, "Ok(", _ctx)
      _x_x819 = kk_string_dup(_s_x820, _ctx); /*string*/
      kk_string_t _x_x821;
      kk_string_t _x_x822;
      kk_define_string_literal(static, _s_x823, 1, ")", _ctx)
      _x_x822 = kk_string_dup(_s_x823, _ctx); /*string*/
      _x_x821 = kk_std_core_types__lp__plus__plus__rp_(x_0_10197, _x_x822, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x819, _x_x821, _ctx);
    }
  }
  {
    kk_box_t e = r._cons.Left.left;
    kk_function_drop(show_a, _ctx);
    kk_string_t x_1_10201 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), show_e, (show_e, e, _ctx), _ctx); /*string*/;
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_1_10201, _ctx);
      kk_box_t _x_x824 = kk_std_core_hnd_yield_extend(kk_sqlite_new_hc_show_result_fun825(_ctx), _ctx); /*10001*/
      return kk_string_unbox(_x_x824);
    }
    {
      kk_string_t _x_x832;
      kk_define_string_literal(static, _s_x833, 4, "Err(", _ctx)
      _x_x832 = kk_string_dup(_s_x833, _ctx); /*string*/
      kk_string_t _x_x834;
      kk_string_t _x_x835;
      kk_define_string_literal(static, _s_x836, 1, ")", _ctx)
      _x_x835 = kk_string_dup(_s_x836, _ctx); /*string*/
      _x_x834 = kk_std_core_types__lp__plus__plus__rp_(x_1_10201, _x_x835, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x832, _x_x834, _ctx);
    }
  }
}

kk_sqlite__db kk_sqlite_db_fs__copy(kk_sqlite__db _this, kk_std_core_types__optional h, kk_context_t* _ctx) { /* (db, h : ? int) -> db */ 
  kk_integer_t _x_x837;
  if (kk_std_core_types__is_Optional(h, _ctx)) {
    kk_box_t _box_x22 = h._cons._Optional.value;
    kk_integer_t _uniq_h_474 = kk_integer_unbox(_box_x22, _ctx);
    kk_integer_dup(_uniq_h_474, _ctx);
    kk_std_core_types__optional_drop(h, _ctx);
    kk_sqlite__db_drop(_this, _ctx);
    _x_x837 = _uniq_h_474; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(h, _ctx);
    {
      kk_integer_t _x = _this.h;
      _x_x837 = _x; /*int*/
    }
  }
  return kk_sqlite__new_Db(_x_x837, _ctx);
}

kk_sqlite__row kk_sqlite_row_fs__copy(kk_sqlite__row _this, kk_std_core_types__optional values, kk_context_t* _ctx) { /* (row, values : ? (list<string>)) -> row */ 
  kk_std_core_types__list _x_x838;
  if (kk_std_core_types__is_Optional(values, _ctx)) {
    kk_box_t _box_x23 = values._cons._Optional.value;
    kk_std_core_types__list _uniq_values_498 = kk_std_core_types__list_unbox(_box_x23, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_values_498, _ctx);
    kk_std_core_types__optional_drop(values, _ctx);
    kk_sqlite__row_drop(_this, _ctx);
    _x_x838 = _uniq_values_498; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(values, _ctx);
    {
      kk_std_core_types__list _x = _this.values;
      _x_x838 = _x; /*list<string>*/
    }
  }
  return kk_sqlite__new_Row(_x_x838, _ctx);
}


// lift anonymous function
struct kk_sqlite_row_fs_show_fun855__t {
  struct kk_function_s _base;
};
static kk_string_t kk_sqlite_row_fs_show_fun855(kk_function_t _fself, kk_string_t _x1_x854, kk_context_t* _ctx);
static kk_function_t kk_sqlite_row_fs_new_show_fun855(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_row_fs_show_fun855, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_sqlite_row_fs_show_fun855(kk_function_t _fself, kk_string_t _x1_x854, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x854, _ctx);
}


// lift anonymous function
struct kk_sqlite_row_fs_show_fun860__t {
  struct kk_function_s _base;
  kk_function_t _b_x25_28;
};
static kk_string_t kk_sqlite_row_fs_show_fun860(kk_function_t _fself, kk_box_t _b_x26, kk_context_t* _ctx);
static kk_function_t kk_sqlite_row_fs_new_show_fun860(kk_function_t _b_x25_28, kk_context_t* _ctx) {
  struct kk_sqlite_row_fs_show_fun860__t* _self = kk_function_alloc_as(struct kk_sqlite_row_fs_show_fun860__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_sqlite_row_fs_show_fun860, kk_context());
  _self->_b_x25_28 = _b_x25_28;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_sqlite_row_fs_show_fun860(kk_function_t _fself, kk_box_t _b_x26, kk_context_t* _ctx) {
  struct kk_sqlite_row_fs_show_fun860__t* _self = kk_function_as(struct kk_sqlite_row_fs_show_fun860__t*, _fself, _ctx);
  kk_function_t _b_x25_28 = _self->_b_x25_28; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x25_28, _ctx);}, {}, _ctx)
  kk_string_t _x_x861 = kk_string_unbox(_b_x26); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x25_28, (_b_x25_28, _x_x861, _ctx), _ctx);
}

kk_string_t kk_sqlite_row_fs_show(kk_sqlite__row p, kk_context_t* _ctx) { /* (p : row) -> string */ 
  kk_string_t _x_x851;
  kk_define_string_literal(static, _s_x852, 4, "Row(", _ctx)
  _x_x851 = kk_string_dup(_s_x852, _ctx); /*string*/
  kk_string_t _x_x853;
  kk_std_core_types__list _b_x24_27;
  {
    kk_std_core_types__list _x = p.values;
    _b_x24_27 = _x; /*list<string>*/
  }
  kk_function_t _b_x25_28 = kk_sqlite_row_fs_new_show_fun855(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x856;
  kk_define_string_literal(static, _s_x857, 8, "values: ", _ctx)
  _x_x856 = kk_string_dup(_s_x857, _ctx); /*string*/
  kk_string_t _x_x858;
  kk_string_t _x_x859 = kk_std_core_list_show(_b_x24_27, kk_sqlite_row_fs_new_show_fun860(_b_x25_28, _ctx), _ctx); /*string*/
  kk_string_t _x_x862;
  kk_define_string_literal(static, _s_x863, 1, ")", _ctx)
  _x_x862 = kk_string_dup(_s_x863, _ctx); /*string*/
  _x_x858 = kk_std_core_types__lp__plus__plus__rp_(_x_x859, _x_x862, _ctx); /*string*/
  _x_x853 = kk_std_core_types__lp__plus__plus__rp_(_x_x856, _x_x858, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x851, _x_x853, _ctx);
}


// lift anonymous function
struct kk_sqlite_queryresult_fs_show_fun869__t {
  struct kk_function_s _base;
};
static kk_string_t kk_sqlite_queryresult_fs_show_fun869(kk_function_t _fself, kk_string_t _x1_x868, kk_context_t* _ctx);
static kk_function_t kk_sqlite_queryresult_fs_new_show_fun869(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_queryresult_fs_show_fun869, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_sqlite_queryresult_fs_show_fun869(kk_function_t _fself, kk_string_t _x1_x868, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x868, _ctx);
}


// lift anonymous function
struct kk_sqlite_queryresult_fs_show_fun874__t {
  struct kk_function_s _base;
  kk_function_t _b_x30_36;
};
static kk_string_t kk_sqlite_queryresult_fs_show_fun874(kk_function_t _fself, kk_box_t _b_x31, kk_context_t* _ctx);
static kk_function_t kk_sqlite_queryresult_fs_new_show_fun874(kk_function_t _b_x30_36, kk_context_t* _ctx) {
  struct kk_sqlite_queryresult_fs_show_fun874__t* _self = kk_function_alloc_as(struct kk_sqlite_queryresult_fs_show_fun874__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_sqlite_queryresult_fs_show_fun874, kk_context());
  _self->_b_x30_36 = _b_x30_36;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_sqlite_queryresult_fs_show_fun874(kk_function_t _fself, kk_box_t _b_x31, kk_context_t* _ctx) {
  struct kk_sqlite_queryresult_fs_show_fun874__t* _self = kk_function_as(struct kk_sqlite_queryresult_fs_show_fun874__t*, _fself, _ctx);
  kk_function_t _b_x30_36 = _self->_b_x30_36; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x30_36, _ctx);}, {}, _ctx)
  kk_string_t _x_x875 = kk_string_unbox(_b_x31); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x30_36, (_b_x30_36, _x_x875, _ctx), _ctx);
}


// lift anonymous function
struct kk_sqlite_queryresult_fs_show_fun882__t {
  struct kk_function_s _base;
};
static kk_string_t kk_sqlite_queryresult_fs_show_fun882(kk_function_t _fself, kk_sqlite__row _x1_x881, kk_context_t* _ctx);
static kk_function_t kk_sqlite_queryresult_fs_new_show_fun882(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_queryresult_fs_show_fun882, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_sqlite_queryresult_fs_show_fun882(kk_function_t _fself, kk_sqlite__row _x1_x881, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_sqlite_row_fs_show(_x1_x881, _ctx);
}


// lift anonymous function
struct kk_sqlite_queryresult_fs_show_fun887__t {
  struct kk_function_s _base;
  kk_function_t _b_x33_38;
};
static kk_string_t kk_sqlite_queryresult_fs_show_fun887(kk_function_t _fself, kk_box_t _b_x34, kk_context_t* _ctx);
static kk_function_t kk_sqlite_queryresult_fs_new_show_fun887(kk_function_t _b_x33_38, kk_context_t* _ctx) {
  struct kk_sqlite_queryresult_fs_show_fun887__t* _self = kk_function_alloc_as(struct kk_sqlite_queryresult_fs_show_fun887__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_sqlite_queryresult_fs_show_fun887, kk_context());
  _self->_b_x33_38 = _b_x33_38;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_sqlite_queryresult_fs_show_fun887(kk_function_t _fself, kk_box_t _b_x34, kk_context_t* _ctx) {
  struct kk_sqlite_queryresult_fs_show_fun887__t* _self = kk_function_as(struct kk_sqlite_queryresult_fs_show_fun887__t*, _fself, _ctx);
  kk_function_t _b_x33_38 = _self->_b_x33_38; /* (p : sqlite/row) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x33_38, _ctx);}, {}, _ctx)
  kk_sqlite__row _x_x888 = kk_sqlite__row_unbox(_b_x34, KK_OWNED, _ctx); /*sqlite/row*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_sqlite__row, kk_context_t*), _b_x33_38, (_b_x33_38, _x_x888, _ctx), _ctx);
}

kk_string_t kk_sqlite_queryresult_fs_show(kk_sqlite__queryresult p, kk_context_t* _ctx) { /* (p : queryresult) -> string */ 
  kk_string_t _x_x864;
  kk_define_string_literal(static, _s_x865, 12, "QueryResult(", _ctx)
  _x_x864 = kk_string_dup(_s_x865, _ctx); /*string*/
  kk_string_t _x_x866;
  kk_std_core_types__list _b_x29_35;
  {
    struct kk_sqlite_Queryresult* _con_x867 = kk_sqlite__as_Queryresult(p, _ctx);
    kk_std_core_types__list _x = _con_x867->columns;
    kk_std_core_types__list_dup(_x, _ctx);
    _b_x29_35 = _x; /*list<string>*/
  }
  kk_function_t _b_x30_36 = kk_sqlite_queryresult_fs_new_show_fun869(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x870;
  kk_define_string_literal(static, _s_x871, 9, "columns: ", _ctx)
  _x_x870 = kk_string_dup(_s_x871, _ctx); /*string*/
  kk_string_t _x_x872;
  kk_string_t _x_x873 = kk_std_core_list_show(_b_x29_35, kk_sqlite_queryresult_fs_new_show_fun874(_b_x30_36, _ctx), _ctx); /*string*/
  kk_string_t _x_x876;
  kk_string_t _x_x877;
  kk_define_string_literal(static, _s_x878, 2, ", ", _ctx)
  _x_x877 = kk_string_dup(_s_x878, _ctx); /*string*/
  kk_string_t _x_x879;
  kk_std_core_types__list _b_x32_37;
  {
    struct kk_sqlite_Queryresult* _con_x880 = kk_sqlite__as_Queryresult(p, _ctx);
    kk_std_core_types__list _pat_0_0 = _con_x880->columns;
    kk_std_core_types__list _x_0 = _con_x880->rows;
    if kk_likely(kk_datatype_ptr_is_unique(p, _ctx)) {
      kk_std_core_types__list_drop(_pat_0_0, _ctx);
      kk_datatype_ptr_free(p, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(p, _ctx);
    }
    _b_x32_37 = _x_0; /*list<sqlite/row>*/
  }
  kk_function_t _b_x33_38 = kk_sqlite_queryresult_fs_new_show_fun882(_ctx); /*(p : sqlite/row) -> string*/;
  kk_string_t _x_x883;
  kk_define_string_literal(static, _s_x884, 6, "rows: ", _ctx)
  _x_x883 = kk_string_dup(_s_x884, _ctx); /*string*/
  kk_string_t _x_x885;
  kk_string_t _x_x886 = kk_std_core_list_show(_b_x32_37, kk_sqlite_queryresult_fs_new_show_fun887(_b_x33_38, _ctx), _ctx); /*string*/
  kk_string_t _x_x889;
  kk_define_string_literal(static, _s_x890, 1, ")", _ctx)
  _x_x889 = kk_string_dup(_s_x890, _ctx); /*string*/
  _x_x885 = kk_std_core_types__lp__plus__plus__rp_(_x_x886, _x_x889, _ctx); /*string*/
  _x_x879 = kk_std_core_types__lp__plus__plus__rp_(_x_x883, _x_x885, _ctx); /*string*/
  _x_x876 = kk_std_core_types__lp__plus__plus__rp_(_x_x877, _x_x879, _ctx); /*string*/
  _x_x872 = kk_std_core_types__lp__plus__plus__rp_(_x_x873, _x_x876, _ctx); /*string*/
  _x_x866 = kk_std_core_types__lp__plus__plus__rp_(_x_x870, _x_x872, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x864, _x_x866, _ctx);
}

kk_sqlite__queryresult kk_sqlite_queryresult_fs__copy(kk_sqlite__queryresult _this, kk_std_core_types__optional columns, kk_std_core_types__optional rows, kk_context_t* _ctx) { /* (queryresult, columns : ? (list<string>), rows : ? (list<row>)) -> queryresult */ 
  kk_std_core_types__list _x_x891;
  if (kk_std_core_types__is_Optional(columns, _ctx)) {
    kk_box_t _box_x39 = columns._cons._Optional.value;
    kk_std_core_types__list _uniq_columns_1016 = kk_std_core_types__list_unbox(_box_x39, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_columns_1016, _ctx);
    kk_std_core_types__optional_drop(columns, _ctx);
    _x_x891 = _uniq_columns_1016; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(columns, _ctx);
    {
      struct kk_sqlite_Queryresult* _con_x892 = kk_sqlite__as_Queryresult(_this, _ctx);
      kk_std_core_types__list _x = _con_x892->columns;
      kk_std_core_types__list_dup(_x, _ctx);
      _x_x891 = _x; /*list<string>*/
    }
  }
  kk_std_core_types__list _x_x893;
  if (kk_std_core_types__is_Optional(rows, _ctx)) {
    kk_box_t _box_x40 = rows._cons._Optional.value;
    kk_std_core_types__list _uniq_rows_1024 = kk_std_core_types__list_unbox(_box_x40, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_rows_1024, _ctx);
    kk_std_core_types__optional_drop(rows, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(2)), _ctx);
    _x_x893 = _uniq_rows_1024; /*list<sqlite/row>*/
  }
  else {
    kk_std_core_types__optional_drop(rows, _ctx);
    {
      struct kk_sqlite_Queryresult* _con_x894 = kk_sqlite__as_Queryresult(_this, _ctx);
      kk_std_core_types__list _pat_0_1 = _con_x894->columns;
      kk_std_core_types__list _x_0 = _con_x894->rows;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_1, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_std_core_types__list_dup(_x_0, _ctx);
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x893 = _x_0; /*list<sqlite/row>*/
    }
  }
  return kk_sqlite__new_Queryresult(kk_reuse_null, 0, _x_x891, _x_x893, _ctx);
}

kk_integer_t kk_sqlite_hc__clamp(kk_integer_t v, kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (v : int, lo : int, hi : int) -> int */ 
  kk_integer_t a_10010;
  bool _match_x748 = kk_integer_gt_borrow(v,lo,kk_context()); /*bool*/;
  if (_match_x748) {
    kk_integer_drop(lo, _ctx);
    a_10010 = v; /*int*/
  }
  else {
    kk_integer_drop(v, _ctx);
    a_10010 = lo; /*int*/
  }
  bool _match_x747 = kk_integer_lt_borrow(a_10010,hi,kk_context()); /*bool*/;
  if (_match_x747) {
    kk_integer_drop(hi, _ctx);
    return a_10010;
  }
  {
    kk_integer_drop(a_10010, _ctx);
    return hi;
  }
}

kk_integer_t kk_sqlite_hc__gcd(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> div int */ 
  kk__tailcall: ;
  bool _match_x746 = kk_integer_eq_borrow(b,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x746) {
    kk_integer_drop(b, _ctx);
    return a;
  }
  { // tailcall
    kk_integer_t _x_x895 = kk_integer_dup(b, _ctx); /*int*/
    kk_integer_t _x_x896 = kk_integer_mod(a,b,kk_context()); /*int*/
    a = _x_x895;
    b = _x_x896;
    goto kk__tailcall;
  }
}

kk_integer_t kk_sqlite_hc__lcm(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> div int */ 
  bool _match_x743 = kk_integer_eq_borrow(a,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x743) {
    kk_integer_drop(b, _ctx);
    kk_integer_drop(a, _ctx);
    return kk_integer_from_small(0);
  }
  {
    bool _match_x744 = kk_integer_eq_borrow(b,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_x744) {
      kk_integer_drop(b, _ctx);
      kk_integer_drop(a, _ctx);
      return kk_integer_from_small(0);
    }
    {
      kk_integer_t n_10014;
      kk_integer_t _x_x897 = kk_integer_dup(a, _ctx); /*int*/
      kk_integer_t _x_x898 = kk_integer_dup(b, _ctx); /*int*/
      n_10014 = kk_integer_mul(_x_x897,_x_x898,kk_context()); /*int*/
      kk_integer_t _x_x899;
      bool _match_x745 = kk_integer_lt_borrow(n_10014,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      if (_match_x745) {
        _x_x899 = kk_integer_sub((kk_integer_from_small(0)),n_10014,kk_context()); /*int*/
      }
      else {
        _x_x899 = n_10014; /*int*/
      }
      kk_integer_t _x_x900 = kk_sqlite_hc__gcd(a, b, _ctx); /*int*/
      return kk_integer_div(_x_x899,_x_x900,kk_context());
    }
  }
}

kk_integer_t kk_sqlite_hc__pow(kk_integer_t base, kk_integer_t exp, kk_context_t* _ctx) { /* (base : int, exp : int) -> div int */ 
  bool _match_x742 = kk_integer_lte_borrow(exp,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x742) {
    kk_integer_drop(exp, _ctx);
    kk_integer_drop(base, _ctx);
    return kk_integer_from_small(1);
  }
  {
    kk_integer_t _x_x901 = kk_integer_dup(base, _ctx); /*int*/
    kk_integer_t _x_x902;
    kk_integer_t _x_x903 = kk_integer_add_small_const(exp, -1, _ctx); /*int*/
    _x_x902 = kk_sqlite_hc__pow(base, _x_x903, _ctx); /*int*/
    return kk_integer_mul(_x_x901,_x_x902,kk_context());
  }
}

kk_integer_t kk_sqlite_hc__sign(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> int */ 
  bool _match_x739 = kk_integer_gt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x739) {
    kk_integer_drop(n, _ctx);
    return kk_integer_from_small(1);
  }
  {
    bool _match_x740;
    bool _brw_x741 = kk_integer_lt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    _match_x740 = _brw_x741; /*bool*/
    if (_match_x740) {
      return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
    }
    {
      return kk_integer_from_small(0);
    }
  }
}

kk_std_core_types__list kk_sqlite_hc__range(kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (lo : int, hi : int) -> div list<int> */ 
  bool _match_x738 = kk_integer_gte_borrow(lo,hi,kk_context()); /*bool*/;
  if (_match_x738) {
    kk_integer_drop(lo, _ctx);
    kk_integer_drop(hi, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    kk_std_core_types__list ys_10022;
    kk_integer_t _x_x904;
    kk_integer_t _x_x905 = kk_integer_dup(lo, _ctx); /*int*/
    _x_x904 = kk_integer_add_small_const(_x_x905, 1, _ctx); /*int*/
    ys_10022 = kk_sqlite_hc__range(_x_x904, hi, _ctx); /*list<int>*/
    kk_std_core_types__list _x_x906 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(lo, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    return kk_std_core_list_append(_x_x906, ys_10022, _ctx);
  }
}

kk_std_core_types__list kk_sqlite_hc__range__inc(kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (lo : int, hi : int) -> div list<int> */ 
  bool _match_x737 = kk_integer_gt_borrow(lo,hi,kk_context()); /*bool*/;
  if (_match_x737) {
    kk_integer_drop(lo, _ctx);
    kk_integer_drop(hi, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    kk_std_core_types__list ys_10026;
    kk_integer_t _x_x907;
    kk_integer_t _x_x908 = kk_integer_dup(lo, _ctx); /*int*/
    _x_x907 = kk_integer_add_small_const(_x_x908, 1, _ctx); /*int*/
    ys_10026 = kk_sqlite_hc__range__inc(_x_x907, hi, _ctx); /*list<int>*/
    kk_std_core_types__list _x_x909 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(lo, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    return kk_std_core_list_append(_x_x909, ys_10026, _ctx);
  }
}

kk_integer_t kk_sqlite_hc__isqrt__loop(kk_integer_t n, kk_integer_t x0, kk_integer_t x1, kk_context_t* _ctx) { /* (n : int, x0 : int, x1 : int) -> div int */ 
  kk__tailcall: ;
  bool _match_x736 = kk_integer_gte_borrow(x1,x0,kk_context()); /*bool*/;
  if (_match_x736) {
    kk_integer_drop(x1, _ctx);
    kk_integer_drop(n, _ctx);
    return x0;
  }
  {
    kk_integer_drop(x0, _ctx);
    kk_integer_t y_10030;
    kk_integer_t _x_x910 = kk_integer_dup(n, _ctx); /*int*/
    kk_integer_t _x_x911 = kk_integer_dup(x1, _ctx); /*int*/
    y_10030 = kk_integer_div(_x_x910,_x_x911,kk_context()); /*int*/
    kk_integer_t x2;
    kk_integer_t _x_x912;
    kk_integer_t _x_x913 = kk_integer_dup(x1, _ctx); /*int*/
    _x_x912 = kk_integer_add(_x_x913,y_10030,kk_context()); /*int*/
    x2 = kk_integer_div(_x_x912,(kk_integer_from_small(2)),kk_context()); /*int*/
    { // tailcall
      kk_integer_t _x_x914 = x1; /*int*/
      x0 = _x_x914;
      x1 = x2;
      goto kk__tailcall;
    }
  }
}

kk_integer_t kk_sqlite_hc__isqrt(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> div int */ 
  bool _match_x735 = kk_integer_lte_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x735) {
    kk_integer_drop(n, _ctx);
    return kk_integer_from_small(0);
  }
  {
    kk_integer_t x1;
    kk_integer_t _x_x915;
    kk_integer_t _x_x916 = kk_integer_dup(n, _ctx); /*int*/
    _x_x915 = kk_integer_add_small_const(_x_x916, 1, _ctx); /*int*/
    x1 = kk_integer_div(_x_x915,(kk_integer_from_small(2)),kk_context()); /*int*/
    kk_integer_t _x_x917 = kk_integer_dup(n, _ctx); /*int*/
    return kk_sqlite_hc__isqrt__loop(_x_x917, n, x1, _ctx);
  }
}

bool kk_sqlite_hc__is__digit(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x733 = kk_integer_gte_borrow(n,(kk_integer_from_small(48)),kk_context()); /*bool*/;
  if (_match_x733) {
    bool _brw_x734 = kk_integer_lte_borrow(n,(kk_integer_from_small(57)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    return _brw_x734;
  }
  {
    kk_integer_drop(n, _ctx);
    return false;
  }
}

bool kk_sqlite_hc__is__upper(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x731 = kk_integer_gte_borrow(n,(kk_integer_from_small(65)),kk_context()); /*bool*/;
  if (_match_x731) {
    bool _brw_x732 = kk_integer_lte_borrow(n,(kk_integer_from_small(90)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    return _brw_x732;
  }
  {
    kk_integer_drop(n, _ctx);
    return false;
  }
}

bool kk_sqlite_hc__is__lower(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x729 = kk_integer_gte_borrow(n,(kk_integer_from_small(97)),kk_context()); /*bool*/;
  if (_match_x729) {
    bool _brw_x730 = kk_integer_lte_borrow(n,(kk_integer_from_small(122)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    return _brw_x730;
  }
  {
    kk_integer_drop(n, _ctx);
    return false;
  }
}

bool kk_sqlite_hc__is__alpha(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x722 = kk_integer_gte_borrow(n,(kk_integer_from_small(65)),kk_context()); /*bool*/;
  if (_match_x722) {
    bool _match_x725;
    bool _brw_x728 = kk_integer_lte_borrow(n,(kk_integer_from_small(90)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    _match_x725 = _brw_x728; /*bool*/
    if (_match_x725) {
      return true;
    }
    {
      kk_integer_t n_0 = kk_integer_from_int(c,kk_context()); /*int*/;
      bool _match_x726 = kk_integer_gte_borrow(n_0,(kk_integer_from_small(97)),kk_context()); /*bool*/;
      if (_match_x726) {
        bool _brw_x727 = kk_integer_lte_borrow(n_0,(kk_integer_from_small(122)),kk_context()); /*bool*/;
        kk_integer_drop(n_0, _ctx);
        return _brw_x727;
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
    bool _match_x723 = kk_integer_gte_borrow(n_0_0,(kk_integer_from_small(97)),kk_context()); /*bool*/;
    if (_match_x723) {
      bool _brw_x724 = kk_integer_lte_borrow(n_0_0,(kk_integer_from_small(122)),kk_context()); /*bool*/;
      kk_integer_drop(n_0_0, _ctx);
      return _brw_x724;
    }
    {
      kk_integer_drop(n_0_0, _ctx);
      return false;
    }
  }
}

bool kk_sqlite_hc__is__alnum(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  bool _match_x719 = kk_sqlite_hc__is__alpha(c, _ctx); /*bool*/;
  if (_match_x719) {
    return true;
  }
  {
    kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
    bool _match_x720 = kk_integer_gte_borrow(n,(kk_integer_from_small(48)),kk_context()); /*bool*/;
    if (_match_x720) {
      bool _brw_x721 = kk_integer_lte_borrow(n,(kk_integer_from_small(57)),kk_context()); /*bool*/;
      kk_integer_drop(n, _ctx);
      return _brw_x721;
    }
    {
      kk_integer_drop(n, _ctx);
      return false;
    }
  }
}

bool kk_sqlite_hc__is__space(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x715 = kk_integer_eq_borrow(n,(kk_integer_from_small(32)),kk_context()); /*bool*/;
  if (_match_x715) {
    kk_integer_drop(n, _ctx);
    return true;
  }
  {
    bool _match_x716 = kk_integer_eq_borrow(n,(kk_integer_from_small(9)),kk_context()); /*bool*/;
    if (_match_x716) {
      kk_integer_drop(n, _ctx);
      return true;
    }
    {
      bool _match_x717 = kk_integer_eq_borrow(n,(kk_integer_from_small(10)),kk_context()); /*bool*/;
      if (_match_x717) {
        kk_integer_drop(n, _ctx);
        return true;
      }
      {
        bool _brw_x718 = kk_integer_eq_borrow(n,(kk_integer_from_small(13)),kk_context()); /*bool*/;
        kk_integer_drop(n, _ctx);
        return _brw_x718;
      }
    }
  }
}

bool kk_sqlite_hc__is__punct(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> bool */ 
  kk_integer_t n = kk_integer_from_int(c,kk_context()); /*int*/;
  bool _match_x704;
  bool _match_x711 = kk_integer_gte_borrow(n,(kk_integer_from_small(33)),kk_context()); /*bool*/;
  if (_match_x711) {
    bool _match_x713 = kk_integer_lte_borrow(n,(kk_integer_from_small(47)),kk_context()); /*bool*/;
    if (_match_x713) {
      _match_x704 = true; /*bool*/
    }
    else {
      bool _match_x714 = kk_integer_gte_borrow(n,(kk_integer_from_small(58)),kk_context()); /*bool*/;
      if (_match_x714) {
        _match_x704 = kk_integer_lte_borrow(n,(kk_integer_from_small(64)),kk_context()); /*bool*/
      }
      else {
        _match_x704 = false; /*bool*/
      }
    }
  }
  else {
    bool _match_x712 = kk_integer_gte_borrow(n,(kk_integer_from_small(58)),kk_context()); /*bool*/;
    if (_match_x712) {
      _match_x704 = kk_integer_lte_borrow(n,(kk_integer_from_small(64)),kk_context()); /*bool*/
    }
    else {
      _match_x704 = false; /*bool*/
    }
  }
  if (_match_x704) {
    kk_integer_drop(n, _ctx);
    return true;
  }
  {
    bool _match_x705 = kk_integer_gte_borrow(n,(kk_integer_from_small(91)),kk_context()); /*bool*/;
    if (_match_x705) {
      bool _match_x708 = kk_integer_lte_borrow(n,(kk_integer_from_small(96)),kk_context()); /*bool*/;
      if (_match_x708) {
        kk_integer_drop(n, _ctx);
        return true;
      }
      {
        bool _match_x709 = kk_integer_gte_borrow(n,(kk_integer_from_small(123)),kk_context()); /*bool*/;
        if (_match_x709) {
          bool _brw_x710 = kk_integer_lte_borrow(n,(kk_integer_from_small(126)),kk_context()); /*bool*/;
          kk_integer_drop(n, _ctx);
          return _brw_x710;
        }
        {
          kk_integer_drop(n, _ctx);
          return false;
        }
      }
    }
    {
      bool _match_x706 = kk_integer_gte_borrow(n,(kk_integer_from_small(123)),kk_context()); /*bool*/;
      if (_match_x706) {
        bool _brw_x707 = kk_integer_lte_borrow(n,(kk_integer_from_small(126)),kk_context()); /*bool*/;
        kk_integer_drop(n, _ctx);
        return _brw_x707;
      }
      {
        kk_integer_drop(n, _ctx);
        return false;
      }
    }
  }
}


// lift anonymous function
struct kk_sqlite_hc__all__digits_fun919__t {
  struct kk_function_s _base;
};
static bool kk_sqlite_hc__all__digits_fun919(kk_function_t _fself, kk_box_t _b_x51, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__all__digits_fun919(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__all__digits_fun919, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_sqlite_hc__all__digits_fun919(kk_function_t _fself, kk_box_t _b_x51, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x920 = kk_char_unbox(_b_x51, KK_OWNED, _ctx); /*char*/
  return kk_sqlite_hc__is__digit(_x_x920, _ctx);
}

bool kk_sqlite_hc__all__digits(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x701;
  kk_integer_t _brw_x702;
  kk_string_t _x_x918 = kk_string_dup(s, _ctx); /*string*/
  _brw_x702 = kk_std_core_string_chars_fs_count(_x_x918, _ctx); /*int*/
  bool _brw_x703 = kk_integer_eq_borrow(_brw_x702,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x702, _ctx);
  _match_x701 = _brw_x703; /*bool*/
  if (_match_x701) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x49_52 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x49_52, kk_sqlite_new_hc__all__digits_fun919(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_sqlite_hc__all__alpha_fun922__t {
  struct kk_function_s _base;
};
static bool kk_sqlite_hc__all__alpha_fun922(kk_function_t _fself, kk_box_t _b_x56, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__all__alpha_fun922(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__all__alpha_fun922, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_sqlite_hc__all__alpha_fun922(kk_function_t _fself, kk_box_t _b_x56, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x923 = kk_char_unbox(_b_x56, KK_OWNED, _ctx); /*char*/
  return kk_sqlite_hc__is__alpha(_x_x923, _ctx);
}

bool kk_sqlite_hc__all__alpha(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x698;
  kk_integer_t _brw_x699;
  kk_string_t _x_x921 = kk_string_dup(s, _ctx); /*string*/
  _brw_x699 = kk_std_core_string_chars_fs_count(_x_x921, _ctx); /*int*/
  bool _brw_x700 = kk_integer_eq_borrow(_brw_x699,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x699, _ctx);
  _match_x698 = _brw_x700; /*bool*/
  if (_match_x698) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x54_57 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x54_57, kk_sqlite_new_hc__all__alpha_fun922(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_sqlite_hc__all__upper_fun925__t {
  struct kk_function_s _base;
};
static bool kk_sqlite_hc__all__upper_fun925(kk_function_t _fself, kk_box_t _b_x61, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__all__upper_fun925(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__all__upper_fun925, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_sqlite_hc__all__upper_fun925(kk_function_t _fself, kk_box_t _b_x61, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x926 = kk_char_unbox(_b_x61, KK_OWNED, _ctx); /*char*/
  return kk_sqlite_hc__is__upper(_x_x926, _ctx);
}

bool kk_sqlite_hc__all__upper(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x695;
  kk_integer_t _brw_x696;
  kk_string_t _x_x924 = kk_string_dup(s, _ctx); /*string*/
  _brw_x696 = kk_std_core_string_chars_fs_count(_x_x924, _ctx); /*int*/
  bool _brw_x697 = kk_integer_eq_borrow(_brw_x696,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x696, _ctx);
  _match_x695 = _brw_x697; /*bool*/
  if (_match_x695) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x59_62 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x59_62, kk_sqlite_new_hc__all__upper_fun925(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_sqlite_hc__all__lower_fun928__t {
  struct kk_function_s _base;
};
static bool kk_sqlite_hc__all__lower_fun928(kk_function_t _fself, kk_box_t _b_x66, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__all__lower_fun928(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__all__lower_fun928, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_sqlite_hc__all__lower_fun928(kk_function_t _fself, kk_box_t _b_x66, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x929 = kk_char_unbox(_b_x66, KK_OWNED, _ctx); /*char*/
  return kk_sqlite_hc__is__lower(_x_x929, _ctx);
}

bool kk_sqlite_hc__all__lower(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x692;
  kk_integer_t _brw_x693;
  kk_string_t _x_x927 = kk_string_dup(s, _ctx); /*string*/
  _brw_x693 = kk_std_core_string_chars_fs_count(_x_x927, _ctx); /*int*/
  bool _brw_x694 = kk_integer_eq_borrow(_brw_x693,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x693, _ctx);
  _match_x692 = _brw_x694; /*bool*/
  if (_match_x692) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x64_67 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x64_67, kk_sqlite_new_hc__all__lower_fun928(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_sqlite_hc__all__alnum_fun931__t {
  struct kk_function_s _base;
};
static bool kk_sqlite_hc__all__alnum_fun931(kk_function_t _fself, kk_box_t _b_x71, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__all__alnum_fun931(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__all__alnum_fun931, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_sqlite_hc__all__alnum_fun931(kk_function_t _fself, kk_box_t _b_x71, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x932 = kk_char_unbox(_b_x71, KK_OWNED, _ctx); /*char*/
  return kk_sqlite_hc__is__alnum(_x_x932, _ctx);
}

bool kk_sqlite_hc__all__alnum(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x689;
  kk_integer_t _brw_x690;
  kk_string_t _x_x930 = kk_string_dup(s, _ctx); /*string*/
  _brw_x690 = kk_std_core_string_chars_fs_count(_x_x930, _ctx); /*int*/
  bool _brw_x691 = kk_integer_eq_borrow(_brw_x690,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x690, _ctx);
  _match_x689 = _brw_x691; /*bool*/
  if (_match_x689) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list _b_x69_72 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    return kk_std_core_list_all(_b_x69_72, kk_sqlite_new_hc__all__alnum_fun931(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_sqlite_hc__glob__match__chars_fun938__t {
  struct kk_function_s _base;
};
static bool kk_sqlite_hc__glob__match__chars_fun938(kk_function_t _fself, kk_box_t _b_x78, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__glob__match__chars_fun938(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__glob__match__chars_fun938, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_sqlite_hc__glob__match__chars_fun938(kk_function_t _fself, kk_box_t _b_x78, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x939;
  kk_char_t _x_x940 = kk_char_unbox(_b_x78, KK_OWNED, _ctx); /*char*/
  _x_x939 = kk_std_core_string_char_fs_string(_x_x940, _ctx); /*string*/
  kk_string_t _x_x941;
  kk_define_string_literal(static, _s_x942, 1, "/", _ctx)
  _x_x941 = kk_string_dup(_s_x942, _ctx); /*string*/
  return kk_string_is_neq(_x_x939,_x_x941,kk_context());
}

bool kk_sqlite_hc__glob__match__chars(kk_std_core_types__list pat, kk_std_core_types__list input, kk_context_t* _ctx) { /* (pat : list<char>, input : list<char>) -> div bool */ 
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
    struct kk_std_core_types_Cons* _con_x933 = kk_std_core_types__as_Cons(pat, _ctx);
    kk_box_t _box_x74 = _con_x933->head;
    kk_std_core_types__list prest = _con_x933->tail;
    kk_char_t p = kk_char_unbox(_box_x74, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(pat, _ctx)) {
      kk_datatype_ptr_free(pat, _ctx);
    }
    else {
      kk_std_core_types__list_dup(prest, _ctx);
      kk_datatype_ptr_decref(pat, _ctx);
    }
    kk_string_t _match_x686 = kk_std_core_string_char_fs_string(p, _ctx); /*string*/;
    if (kk_string_cmp_cstr_borrow(_match_x686, "\?", _ctx) == 0) {
      kk_string_drop(_match_x686, _ctx);
      if (kk_std_core_types__is_Nil(input, _ctx)) {
        kk_std_core_types__list_drop(prest, _ctx);
        return false;
      }
      {
        struct kk_std_core_types_Cons* _con_x934 = kk_std_core_types__as_Cons(input, _ctx);
        kk_box_t _box_x75 = _con_x934->head;
        kk_std_core_types__list irest = _con_x934->tail;
        kk_char_t c = kk_char_unbox(_box_x75, KK_BORROWED, _ctx);
        if kk_likely(kk_datatype_ptr_is_unique(input, _ctx)) {
          kk_datatype_ptr_free(input, _ctx);
        }
        else {
          kk_std_core_types__list_dup(irest, _ctx);
          kk_datatype_ptr_decref(input, _ctx);
        }
        bool _match_x688;
        kk_string_t _x_x935 = kk_std_core_string_char_fs_string(c, _ctx); /*string*/
        kk_string_t _x_x936;
        kk_define_string_literal(static, _s_x937, 1, "/", _ctx)
        _x_x936 = kk_string_dup(_s_x937, _ctx); /*string*/
        _match_x688 = kk_string_is_eq(_x_x935,_x_x936,kk_context()); /*bool*/
        if (_match_x688) {
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
    if (kk_string_cmp_cstr_borrow(_match_x686, "*", _ctx) == 0) {
      kk_string_drop(_match_x686, _ctx);
      if (kk_std_core_types__is_Nil(prest, _ctx)) {
        return kk_std_core_list_all(input, kk_sqlite_new_hc__glob__match__chars_fun938(_ctx), _ctx);
      }
      {
        return kk_sqlite_hc__glob__star(prest, input, _ctx);
      }
    }
    {
      kk_string_drop(_match_x686, _ctx);
      if (kk_std_core_types__is_Nil(input, _ctx)) {
        kk_std_core_types__list_drop(prest, _ctx);
        return false;
      }
      {
        struct kk_std_core_types_Cons* _con_x943 = kk_std_core_types__as_Cons(input, _ctx);
        kk_box_t _box_x79 = _con_x943->head;
        kk_std_core_types__list irest_0 = _con_x943->tail;
        kk_char_t c_1 = kk_char_unbox(_box_x79, KK_BORROWED, _ctx);
        if kk_likely(kk_datatype_ptr_is_unique(input, _ctx)) {
          kk_datatype_ptr_free(input, _ctx);
        }
        else {
          kk_std_core_types__list_dup(irest_0, _ctx);
          kk_datatype_ptr_decref(input, _ctx);
        }
        bool _match_x687 = (p == c_1); /*bool*/;
        if (_match_x687) { // tailcall
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

bool kk_sqlite_hc__glob__star(kk_std_core_types__list prest_0, kk_std_core_types__list input_0, kk_context_t* _ctx) { /* (prest : list<char>, input : list<char>) -> div bool */ 
  kk__tailcall: ;
  bool _match_x684;
  kk_std_core_types__list _x_x944 = kk_std_core_types__list_dup(prest_0, _ctx); /*list<char>*/
  kk_std_core_types__list _x_x945 = kk_std_core_types__list_dup(input_0, _ctx); /*list<char>*/
  _match_x684 = kk_sqlite_hc__glob__match__chars(_x_x944, _x_x945, _ctx); /*bool*/
  if (_match_x684) {
    kk_std_core_types__list_drop(prest_0, _ctx);
    kk_std_core_types__list_drop(input_0, _ctx);
    return true;
  }
  if (kk_std_core_types__is_Nil(input_0, _ctx)) {
    kk_std_core_types__list_drop(prest_0, _ctx);
    return false;
  }
  {
    struct kk_std_core_types_Cons* _con_x946 = kk_std_core_types__as_Cons(input_0, _ctx);
    kk_box_t _box_x83 = _con_x946->head;
    kk_std_core_types__list irest_1 = _con_x946->tail;
    kk_char_t c_2 = kk_char_unbox(_box_x83, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(input_0, _ctx)) {
      kk_datatype_ptr_free(input_0, _ctx);
    }
    else {
      kk_std_core_types__list_dup(irest_1, _ctx);
      kk_datatype_ptr_decref(input_0, _ctx);
    }
    bool _match_x685;
    kk_string_t _x_x947 = kk_std_core_string_char_fs_string(c_2, _ctx); /*string*/
    kk_string_t _x_x948;
    kk_define_string_literal(static, _s_x949, 1, "/", _ctx)
    _x_x948 = kk_string_dup(_s_x949, _ctx); /*string*/
    _match_x685 = kk_string_is_eq(_x_x947,_x_x948,kk_context()); /*bool*/
    if (_match_x685) {
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

bool kk_sqlite_hc__glob__doublestar(kk_std_core_types__list prest, kk_std_core_types__list paths, kk_context_t* _ctx) { /* (prest : list<string>, paths : list<string>) -> div bool */ 
  kk__tailcall: ;
  bool _match_x683;
  kk_std_core_types__list _x_x952 = kk_std_core_types__list_dup(prest, _ctx); /*list<string>*/
  kk_std_core_types__list _x_x953 = kk_std_core_types__list_dup(paths, _ctx); /*list<string>*/
  _match_x683 = kk_sqlite_hc__glob__match__segments(_x_x952, _x_x953, _ctx); /*bool*/
  if (_match_x683) {
    kk_std_core_types__list_drop(prest, _ctx);
    kk_std_core_types__list_drop(paths, _ctx);
    return true;
  }
  if (kk_std_core_types__is_Nil(paths, _ctx)) {
    kk_std_core_types__list_drop(prest, _ctx);
    return false;
  }
  {
    struct kk_std_core_types_Cons* _con_x954 = kk_std_core_types__as_Cons(paths, _ctx);
    kk_box_t _box_x84 = _con_x954->head;
    kk_std_core_types__list srest = _con_x954->tail;
    kk_string_t _pat_3 = kk_string_unbox(_box_x84);
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

bool kk_sqlite_hc__glob__match__segments(kk_std_core_types__list pats, kk_std_core_types__list paths_0, kk_context_t* _ctx) { /* (pats : list<string>, paths : list<string>) -> div bool */ 
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
    struct kk_std_core_types_Cons* _con_x955 = kk_std_core_types__as_Cons(pats, _ctx);
    kk_box_t _box_x85 = _con_x955->head;
    kk_std_core_types__list prest_0 = _con_x955->tail;
    kk_string_t p = kk_string_unbox(_box_x85);
    if kk_likely(kk_datatype_ptr_is_unique(pats, _ctx)) {
      kk_datatype_ptr_free(pats, _ctx);
    }
    else {
      kk_string_dup(p, _ctx);
      kk_std_core_types__list_dup(prest_0, _ctx);
      kk_datatype_ptr_decref(pats, _ctx);
    }
    bool _match_x681;
    kk_string_t _x_x956 = kk_string_dup(p, _ctx); /*string*/
    kk_string_t _x_x957;
    kk_define_string_literal(static, _s_x958, 2, "**", _ctx)
    _x_x957 = kk_string_dup(_s_x958, _ctx); /*string*/
    _match_x681 = kk_string_is_eq(_x_x956,_x_x957,kk_context()); /*bool*/
    if (_match_x681) {
      kk_string_drop(p, _ctx);
      return kk_sqlite_hc__glob__doublestar(prest_0, paths_0, _ctx);
    }
    if (kk_std_core_types__is_Nil(paths_0, _ctx)) {
      kk_std_core_types__list_drop(prest_0, _ctx);
      kk_string_drop(p, _ctx);
      return false;
    }
    {
      struct kk_std_core_types_Cons* _con_x959 = kk_std_core_types__as_Cons(paths_0, _ctx);
      kk_box_t _box_x86 = _con_x959->head;
      kk_std_core_types__list srest_0 = _con_x959->tail;
      kk_string_t s = kk_string_unbox(_box_x86);
      if kk_likely(kk_datatype_ptr_is_unique(paths_0, _ctx)) {
        kk_datatype_ptr_free(paths_0, _ctx);
      }
      else {
        kk_string_dup(s, _ctx);
        kk_std_core_types__list_dup(srest_0, _ctx);
        kk_datatype_ptr_decref(paths_0, _ctx);
      }
      bool _match_x682;
      kk_std_core_types__list _x_x960 = kk_std_core_string_list(p, _ctx); /*list<char>*/
      kk_std_core_types__list _x_x961 = kk_std_core_string_list(s, _ctx); /*list<char>*/
      _match_x682 = kk_sqlite_hc__glob__match__chars(_x_x960, _x_x961, _ctx); /*bool*/
      if (_match_x682) { // tailcall
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
struct kk_sqlite_hc__glob__match__path_fun966__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__glob__match__path_fun966(kk_function_t _fself, kk_box_t _b_x89, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__glob__match__path_fun966(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__glob__match__path_fun966, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__glob__match__path_fun966(kk_function_t _fself, kk_box_t _b_x89, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x967;
  kk_char_t _x_x968 = kk_char_unbox(_b_x89, KK_OWNED, _ctx); /*char*/
  _x_x967 = kk_std_core_string_char_fs_string(_x_x968, _ctx); /*string*/
  return kk_string_box(_x_x967);
}


// lift anonymous function
struct kk_sqlite_hc__glob__match__path_fun975__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__glob__match__path_fun975(kk_function_t _fself, kk_box_t _b_x94, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__glob__match__path_fun975(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__glob__match__path_fun975, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__glob__match__path_fun975(kk_function_t _fself, kk_box_t _b_x94, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x976;
  kk_char_t _x_x977 = kk_char_unbox(_b_x94, KK_OWNED, _ctx); /*char*/
  _x_x976 = kk_std_core_string_char_fs_string(_x_x977, _ctx); /*string*/
  return kk_string_box(_x_x976);
}

bool kk_sqlite_hc__glob__match__path(kk_string_t pattern, kk_string_t hc__path, kk_context_t* _ctx) { /* (pattern : string, hc_path : string) -> div bool */ 
  kk_std_core_types__list pat__parts;
  bool _match_x678;
  kk_string_t _x_x962;
  kk_define_string_literal(static, _s_x963, 1, "/", _ctx)
  _x_x962 = kk_string_dup(_s_x963, _ctx); /*string*/
  kk_string_t _x_x964 = kk_string_empty(); /*string*/
  _match_x678 = kk_string_is_eq(_x_x962,_x_x964,kk_context()); /*bool*/
  if (_match_x678) {
    kk_std_core_types__list _b_x87_90 = kk_std_core_string_list(pattern, _ctx); /*list<char>*/;
    kk_function_t _brw_x679 = kk_sqlite_new_hc__glob__match__path_fun966(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x680 = kk_std_core_list_map(_b_x87_90, _brw_x679, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x679, _ctx);
    pat__parts = _brw_x680; /*list<string>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x969;
    kk_define_string_literal(static, _s_x970, 1, "/", _ctx)
    _x_x969 = kk_string_dup(_s_x970, _ctx); /*string*/
    v_10011 = kk_string_splitv(pattern,_x_x969,kk_context()); /*vector<string>*/
    pat__parts = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  kk_std_core_types__list path__parts;
  bool _match_x675;
  kk_string_t _x_x971;
  kk_define_string_literal(static, _s_x972, 1, "/", _ctx)
  _x_x971 = kk_string_dup(_s_x972, _ctx); /*string*/
  kk_string_t _x_x973 = kk_string_empty(); /*string*/
  _match_x675 = kk_string_is_eq(_x_x971,_x_x973,kk_context()); /*bool*/
  if (_match_x675) {
    kk_std_core_types__list _b_x92_95 = kk_std_core_string_list(hc__path, _ctx); /*list<char>*/;
    kk_function_t _brw_x676 = kk_sqlite_new_hc__glob__match__path_fun975(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x677 = kk_std_core_list_map(_b_x92_95, _brw_x676, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x676, _ctx);
    path__parts = _brw_x677; /*list<string>*/
  }
  else {
    kk_vector_t v_10011_0;
    kk_string_t _x_x978;
    kk_define_string_literal(static, _s_x979, 1, "/", _ctx)
    _x_x978 = kk_string_dup(_s_x979, _ctx); /*string*/
    v_10011_0 = kk_string_splitv(hc__path,_x_x978,kk_context()); /*vector<string>*/
    path__parts = kk_std_core_vector_vlist(v_10011_0, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  return kk_sqlite_hc__glob__match__segments(pat__parts, path__parts, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__words_fun985__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__words_fun985(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__words_fun985(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__words_fun985, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__words_fun985(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x986;
  kk_char_t _x_x987 = kk_char_unbox(_b_x99, KK_OWNED, _ctx); /*char*/
  _x_x986 = kk_std_core_string_char_fs_string(_x_x987, _ctx); /*string*/
  return kk_string_box(_x_x986);
}


// lift anonymous function
struct kk_sqlite_hc__words_fun990__t {
  struct kk_function_s _base;
};
static bool kk_sqlite_hc__words_fun990(kk_function_t _fself, kk_box_t _b_x102, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__words_fun990(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__words_fun990, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_sqlite_hc__words_fun990(kk_function_t _fself, kk_box_t _b_x102, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool b_10049;
  kk_integer_t _brw_x666;
  kk_string_t _x_x991 = kk_string_unbox(_b_x102); /*string*/
  _brw_x666 = kk_std_core_string_chars_fs_count(_x_x991, _ctx); /*int*/
  bool _brw_x667 = kk_integer_eq_borrow(_brw_x666,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x666, _ctx);
  b_10049 = _brw_x667; /*bool*/
  if (b_10049) {
    return false;
  }
  {
    return true;
  }
}

kk_std_core_types__list kk_sqlite_hc__words(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> list<string> */ 
  kk_std_core_types__list _b_x100_103;
  bool _match_x668;
  kk_string_t _x_x981;
  kk_define_string_literal(static, _s_x982, 1, " ", _ctx)
  _x_x981 = kk_string_dup(_s_x982, _ctx); /*string*/
  kk_string_t _x_x983 = kk_string_empty(); /*string*/
  _match_x668 = kk_string_is_eq(_x_x981,_x_x983,kk_context()); /*bool*/
  if (_match_x668) {
    kk_std_core_types__list _b_x97_105 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x669 = kk_sqlite_new_hc__words_fun985(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x670 = kk_std_core_list_map(_b_x97_105, _brw_x669, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x669, _ctx);
    _b_x100_103 = _brw_x670; /*list<string>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x988;
    kk_define_string_literal(static, _s_x989, 1, " ", _ctx)
    _x_x988 = kk_string_dup(_s_x989, _ctx); /*string*/
    v_10011 = kk_string_splitv(s,_x_x988,kk_context()); /*vector<string>*/
    _b_x100_103 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  return kk_std_core_list_filter(_b_x100_103, kk_sqlite_new_hc__words_fun990(_ctx), _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__lines_fun996__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__lines_fun996(kk_function_t _fself, kk_box_t _b_x110, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__lines_fun996(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__lines_fun996, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__lines_fun996(kk_function_t _fself, kk_box_t _b_x110, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x997;
  kk_char_t _x_x998 = kk_char_unbox(_b_x110, KK_OWNED, _ctx); /*char*/
  _x_x997 = kk_std_core_string_char_fs_string(_x_x998, _ctx); /*string*/
  return kk_string_box(_x_x997);
}

kk_std_core_types__list kk_sqlite_hc__lines(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> list<string> */ 
  bool _match_x663;
  kk_string_t _x_x992;
  kk_define_string_literal(static, _s_x993, 1, "\n", _ctx)
  _x_x992 = kk_string_dup(_s_x993, _ctx); /*string*/
  kk_string_t _x_x994 = kk_string_empty(); /*string*/
  _match_x663 = kk_string_is_eq(_x_x992,_x_x994,kk_context()); /*bool*/
  if (_match_x663) {
    kk_std_core_types__list _b_x108_111 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x664 = kk_sqlite_new_hc__lines_fun996(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x665 = kk_std_core_list_map(_b_x108_111, _brw_x664, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x664, _ctx);
    return _brw_x665;
  }
  {
    kk_vector_t v_10011;
    kk_string_t _x_x999;
    kk_define_string_literal(static, _s_x1000, 1, "\n", _ctx)
    _x_x999 = kk_string_dup(_s_x1000, _ctx); /*string*/
    v_10011 = kk_string_splitv(s,_x_x999,kk_context()); /*vector<string>*/
    return kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx);
  }
}

kk_string_t kk_sqlite_hc__repeat__str(kk_string_t s, kk_integer_t n, kk_context_t* _ctx) { /* (s : string, n : int) -> div string */ 
  bool _match_x662 = kk_integer_lte_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x662) {
    kk_string_drop(s, _ctx);
    kk_integer_drop(n, _ctx);
    return kk_string_empty();
  }
  {
    kk_string_t _x_x1006 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x1007;
    kk_integer_t _x_x1008 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
    _x_x1007 = kk_sqlite_hc__repeat__str(s, _x_x1008, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x1006, _x_x1007, _ctx);
  }
}

kk_string_t kk_sqlite_hc__pad__left(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10063;
  kk_string_t _x_x1009 = kk_string_dup(s, _ctx); /*string*/
  y_10063 = kk_std_core_string_chars_fs_count(_x_x1009, _ctx); /*int*/
  kk_integer_t b_10061 = kk_integer_sub(width,y_10063,kk_context()); /*int*/;
  kk_string_t _x_x1010;
  kk_integer_t _x_x1011;
  bool _match_x661 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10061,kk_context()); /*bool*/;
  if (_match_x661) {
    kk_integer_drop(b_10061, _ctx);
    _x_x1011 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x1011 = b_10061; /*int*/
  }
  _x_x1010 = kk_sqlite_hc__repeat__str(ch, _x_x1011, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x1010, s, _ctx);
}

kk_string_t kk_sqlite_hc__pad__right(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10067;
  kk_string_t _x_x1012 = kk_string_dup(s, _ctx); /*string*/
  y_10067 = kk_std_core_string_chars_fs_count(_x_x1012, _ctx); /*int*/
  kk_integer_t b_10065 = kk_integer_sub(width,y_10067,kk_context()); /*int*/;
  kk_string_t _x_x1013;
  kk_integer_t _x_x1014;
  bool _match_x660 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10065,kk_context()); /*bool*/;
  if (_match_x660) {
    kk_integer_drop(b_10065, _ctx);
    _x_x1014 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x1014 = b_10065; /*int*/
  }
  _x_x1013 = kk_sqlite_hc__repeat__str(ch, _x_x1014, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(s, _x_x1013, _ctx);
}

kk_string_t kk_sqlite_hc__center(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10071;
  kk_string_t _x_x1015 = kk_string_dup(s, _ctx); /*string*/
  y_10071 = kk_std_core_string_chars_fs_count(_x_x1015, _ctx); /*int*/
  kk_integer_t b_10069 = kk_integer_sub(width,y_10071,kk_context()); /*int*/;
  kk_integer_t total;
  bool _match_x659 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10069,kk_context()); /*bool*/;
  if (_match_x659) {
    kk_integer_drop(b_10069, _ctx);
    total = kk_integer_from_small(0); /*int*/
  }
  else {
    total = b_10069; /*int*/
  }
  kk_integer_t left;
  kk_integer_t _x_x1016 = kk_integer_dup(total, _ctx); /*int*/
  left = kk_integer_div(_x_x1016,(kk_integer_from_small(2)),kk_context()); /*int*/
  kk_integer_t right;
  kk_integer_t _x_x1017 = kk_integer_dup(left, _ctx); /*int*/
  right = kk_integer_sub(total,_x_x1017,kk_context()); /*int*/
  kk_string_t _x_x1018;
  kk_string_t _x_x1019;
  kk_string_t _x_x1020 = kk_string_dup(ch, _ctx); /*string*/
  _x_x1019 = kk_sqlite_hc__repeat__str(_x_x1020, left, _ctx); /*string*/
  _x_x1018 = kk_std_core_types__lp__plus__plus__rp_(_x_x1019, s, _ctx); /*string*/
  kk_string_t _x_x1021 = kk_sqlite_hc__repeat__str(ch, right, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x1018, _x_x1021, _ctx);
}

kk_string_t kk_sqlite_hc__removeprefix(kk_string_t s, kk_string_t pre, kk_context_t* _ctx) { /* (s : string, pre : string) -> string */ 
  kk_std_core_types__maybe maybe_10074;
  kk_string_t _x_x1022 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x1023 = kk_string_dup(pre, _ctx); /*string*/
  maybe_10074 = kk_std_core_sslice_starts_with(_x_x1022, _x_x1023, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(maybe_10074, _ctx)) {
    kk_box_t _box_x113 = maybe_10074._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_10074, _ctx);
    kk_std_core_types__list _x_x1024;
    kk_std_core_types__list _x_x1025 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    kk_integer_t _x_x1026 = kk_std_core_string_chars_fs_count(pre, _ctx); /*int*/
    _x_x1024 = kk_std_core_list_drop(_x_x1025, _x_x1026, _ctx); /*list<10001>*/
    return kk_std_core_string_listchar_fs_string(_x_x1024, _ctx);
  }
  {
    kk_string_drop(pre, _ctx);
    return s;
  }
}
 
// monadic lift

kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__open_10176(kk_string_t hc__path, kk_integer_t h, kk_context_t* _ctx) { /* (hc_path : string, h : int) -> io either<string,db> */ 
  bool _match_x658 = kk_integer_eq_borrow(h,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x658) {
    kk_integer_drop(h, _ctx);
    kk_string_t _b_x114_116;
    kk_string_t _x_x1027;
    kk_define_string_literal(static, _s_x1028, 20, "sqlite open failed: ", _ctx)
    _x_x1027 = kk_string_dup(_s_x1028, _ctx); /*string*/
    _b_x114_116 = kk_std_core_types__lp__plus__plus__rp_(_x_x1027, hc__path, _ctx); /*string*/
    return kk_std_core_types__new_Left(kk_string_box(_b_x114_116), _ctx);
  }
  {
    kk_string_drop(hc__path, _ctx);
    kk_box_t _x_x1029;
    kk_sqlite__db _x_x1030 = kk_sqlite__new_Db(h, _ctx); /*sqlite/db*/
    _x_x1029 = kk_sqlite__db_box(_x_x1030, _ctx); /*10015*/
    return kk_std_core_types__new_Right(_x_x1029, _ctx);
  }
}
 
// .hc:38


// lift anonymous function
struct kk_sqlite_hc__sqlite__open_fun1033__t {
  struct kk_function_s _base;
  kk_string_t hc__path;
};
static kk_box_t kk_sqlite_hc__sqlite__open_fun1033(kk_function_t _fself, kk_box_t _b_x119, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__open_fun1033(kk_string_t hc__path, kk_context_t* _ctx) {
  struct kk_sqlite_hc__sqlite__open_fun1033__t* _self = kk_function_alloc_as(struct kk_sqlite_hc__sqlite__open_fun1033__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_sqlite_hc__sqlite__open_fun1033, kk_context());
  _self->hc__path = hc__path;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__open_fun1033(kk_function_t _fself, kk_box_t _b_x119, kk_context_t* _ctx) {
  struct kk_sqlite_hc__sqlite__open_fun1033__t* _self = kk_function_as(struct kk_sqlite_hc__sqlite__open_fun1033__t*, _fself, _ctx);
  kk_string_t hc__path = _self->hc__path; /* string */
  kk_drop_match(_self, {kk_string_dup(hc__path, _ctx);}, {}, _ctx)
  kk_integer_t h_125 = kk_integer_unbox(_b_x119, _ctx); /*int*/;
  kk_std_core_types__either _x_x1034 = kk_sqlite__mlift_hc__sqlite__open_10176(hc__path, h_125, _ctx); /*either<string,sqlite/db>*/
  return kk_std_core_types__either_box(_x_x1034, _ctx);
}

kk_std_core_types__either kk_sqlite_hc__sqlite__open(kk_string_t hc__path, kk_context_t* _ctx) { /* (hc_path : string) -> io either<string,db> */ 
  kk_integer_t x_10205;
  kk_string_t _x_x1031 = kk_string_dup(hc__path, _ctx); /*string*/
  x_10205 = kk_sqlite__ffi_sqlite__open__raw(_x_x1031, _ctx); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_10205, _ctx);
    kk_box_t _x_x1032 = kk_std_core_hnd_yield_extend(kk_sqlite_new_hc__sqlite__open_fun1033(hc__path, _ctx), _ctx); /*10001*/
    return kk_std_core_types__either_unbox(_x_x1032, KK_OWNED, _ctx);
  }
  {
    bool _match_x657 = kk_integer_eq_borrow(x_10205,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_x657) {
      kk_integer_drop(x_10205, _ctx);
      kk_string_t _b_x120_123;
      kk_string_t _x_x1035;
      kk_define_string_literal(static, _s_x1036, 20, "sqlite open failed: ", _ctx)
      _x_x1035 = kk_string_dup(_s_x1036, _ctx); /*string*/
      _b_x120_123 = kk_std_core_types__lp__plus__plus__rp_(_x_x1035, hc__path, _ctx); /*string*/
      return kk_std_core_types__new_Left(kk_string_box(_b_x120_123), _ctx);
    }
    {
      kk_string_drop(hc__path, _ctx);
      kk_box_t _x_x1037;
      kk_sqlite__db _x_x1038 = kk_sqlite__new_Db(x_10205, _ctx); /*sqlite/db*/
      _x_x1037 = kk_sqlite__db_box(_x_x1038, _ctx); /*10015*/
      return kk_std_core_types__new_Right(_x_x1037, _ctx);
    }
  }
}
 
// .hc:45


// lift anonymous function
struct kk_sqlite_hc__sqlite__close_fun1041__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__close_fun1041(kk_function_t _fself, kk_box_t _b_x128, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__close_fun1041(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__close_fun1041, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__close_fun1041(kk_function_t _fself, kk_box_t _b_x128, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x1042;
  kk_sqlite__db db_131 = kk_sqlite__db_unbox(_b_x128, KK_OWNED, _ctx); /*sqlite/db*/;
  {
    kk_integer_t _x = db_131.h;
    _x_x1042 = _x; /*int*/
  }
  return kk_integer_box(_x_x1042, _ctx);
}

kk_unit_t kk_sqlite_hc__sqlite__close(kk_sqlite__db d, kk_context_t* _ctx) { /* (d : db) -> io () */ 
  kk_integer_t _x_x1039;
  kk_box_t _x_x1040 = kk_std_core_hnd__open_none1(kk_sqlite_new_hc__sqlite__close_fun1041(_ctx), kk_sqlite__db_box(d, _ctx), _ctx); /*10001*/
  _x_x1039 = kk_integer_unbox(_x_x1040, _ctx); /*int*/
  kk_sqlite__ffi_sqlite__close__raw(_x_x1039, _ctx); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_sqlite__mlift_hc__sqlite__exec_10178_fun1045__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite__mlift_hc__sqlite__exec_10178_fun1045(kk_function_t _fself, kk_box_t _b_x137, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__sqlite__exec_10178_fun1045(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite__mlift_hc__sqlite__exec_10178_fun1045, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite__mlift_hc__sqlite__exec_10178_fun1045(kk_function_t _fself, kk_box_t _b_x137, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x1046;
  kk_sqlite__db _match_x654 = kk_sqlite__db_unbox(_b_x137, KK_OWNED, _ctx); /*sqlite/db*/;
  {
    kk_integer_t _x_0 = _match_x654.h;
    _x_x1046 = _x_0; /*int*/
  }
  return kk_integer_box(_x_x1046, _ctx);
}


// lift anonymous function
struct kk_sqlite__mlift_hc__sqlite__exec_10178_fun1048__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite__mlift_hc__sqlite__exec_10178_fun1048(kk_function_t _fself, kk_box_t _b_x142, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__sqlite__exec_10178_fun1048(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite__mlift_hc__sqlite__exec_10178_fun1048, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite__mlift_hc__sqlite__exec_10178_fun1048(kk_function_t _fself, kk_box_t _b_x142, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__either _x_x1049;
  kk_string_t _x_x1050 = kk_string_unbox(_b_x142); /*string*/
  _x_x1049 = kk_sqlite__mlift_hc__sqlite__exec_10177(_x_x1050, _ctx); /*either<string,bool>*/
  return kk_std_core_types__either_box(_x_x1049, _ctx);
}

kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__exec_10178(kk_sqlite__db d, kk_integer_t rc, kk_context_t* _ctx) { /* (d : db, rc : int) -> io either<string,bool> */ 
  bool _match_x652;
  bool _brw_x655 = kk_integer_eq_borrow(rc,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(rc, _ctx);
  _match_x652 = _brw_x655; /*bool*/
  if (_match_x652) {
    kk_sqlite__db_drop(d, _ctx);
    return kk_std_core_types__new_Right(kk_bool_box(true), _ctx);
  }
  {
    kk_string_t x_10208;
    kk_integer_t _x_x1043;
    kk_box_t _x_x1044 = kk_std_core_hnd__open_none1(kk_sqlite__new_mlift_hc__sqlite__exec_10178_fun1045(_ctx), kk_sqlite__db_box(d, _ctx), _ctx); /*10001*/
    _x_x1043 = kk_integer_unbox(_x_x1044, _ctx); /*int*/
    x_10208 = kk_sqlite__ffi_sqlite__errmsg__raw(_x_x1043, _ctx); /*string*/
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_10208, _ctx);
      kk_box_t _x_x1047 = kk_std_core_hnd_yield_extend(kk_sqlite__new_mlift_hc__sqlite__exec_10178_fun1048(_ctx), _ctx); /*10001*/
      return kk_std_core_types__either_unbox(_x_x1047, KK_OWNED, _ctx);
    }
    {
      return kk_std_core_types__new_Left(kk_string_box(x_10208), _ctx);
    }
  }
}
 
// .hc:55


// lift anonymous function
struct kk_sqlite_hc__sqlite__exec_fun1053__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__exec_fun1053(kk_function_t _fself, kk_box_t _b_x149, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__exec_fun1053(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__exec_fun1053, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__exec_fun1053(kk_function_t _fself, kk_box_t _b_x149, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x1054;
  kk_sqlite__db _match_x651 = kk_sqlite__db_unbox(_b_x149, KK_OWNED, _ctx); /*sqlite/db*/;
  {
    kk_integer_t _x = _match_x651.h;
    _x_x1054 = _x; /*int*/
  }
  return kk_integer_box(_x_x1054, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__exec_fun1058__t {
  struct kk_function_s _base;
  kk_sqlite__db d;
};
static kk_box_t kk_sqlite_hc__sqlite__exec_fun1058(kk_function_t _fself, kk_box_t _b_x154, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__exec_fun1058(kk_sqlite__db d, kk_context_t* _ctx) {
  struct kk_sqlite_hc__sqlite__exec_fun1058__t* _self = kk_function_alloc_as(struct kk_sqlite_hc__sqlite__exec_fun1058__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_sqlite_hc__sqlite__exec_fun1058, kk_context());
  _self->d = d;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__exec_fun1058(kk_function_t _fself, kk_box_t _b_x154, kk_context_t* _ctx) {
  struct kk_sqlite_hc__sqlite__exec_fun1058__t* _self = kk_function_as(struct kk_sqlite_hc__sqlite__exec_fun1058__t*, _fself, _ctx);
  kk_sqlite__db d = _self->d; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(d, _ctx);}, {}, _ctx)
  kk_integer_t rc_169 = kk_integer_unbox(_b_x154, _ctx); /*int*/;
  kk_std_core_types__either _x_x1059 = kk_sqlite__mlift_hc__sqlite__exec_10178(d, rc_169, _ctx); /*either<string,bool>*/
  return kk_std_core_types__either_box(_x_x1059, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__exec_fun1062__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__exec_fun1062(kk_function_t _fself, kk_box_t _b_x158, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__exec_fun1062(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__exec_fun1062, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__exec_fun1062(kk_function_t _fself, kk_box_t _b_x158, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x1063;
  kk_sqlite__db _match_x649 = kk_sqlite__db_unbox(_b_x158, KK_OWNED, _ctx); /*sqlite/db*/;
  {
    kk_integer_t _x_0 = _match_x649.h;
    _x_x1063 = _x_0; /*int*/
  }
  return kk_integer_box(_x_x1063, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__exec_fun1065__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__exec_fun1065(kk_function_t _fself, kk_box_t _b_x163, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__exec_fun1065(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__exec_fun1065, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__exec_fun1065(kk_function_t _fself, kk_box_t _b_x163, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__either _x_x1066;
  kk_string_t _x_x1067 = kk_string_unbox(_b_x163); /*string*/
  _x_x1066 = kk_sqlite__mlift_hc__sqlite__exec_10177(_x_x1067, _ctx); /*either<string,bool>*/
  return kk_std_core_types__either_box(_x_x1066, _ctx);
}

kk_std_core_types__either kk_sqlite_hc__sqlite__exec(kk_sqlite__db d, kk_string_t sql, kk_context_t* _ctx) { /* (d : db, sql : string) -> io either<string,bool> */ 
  kk_integer_t x_10210;
  kk_integer_t _x_x1051;
  kk_box_t _x_x1052;
  kk_box_t _x_x1055;
  kk_sqlite__db _x_x1056 = kk_sqlite__db_dup(d, _ctx); /*sqlite/db*/
  _x_x1055 = kk_sqlite__db_box(_x_x1056, _ctx); /*10000*/
  _x_x1052 = kk_std_core_hnd__open_none1(kk_sqlite_new_hc__sqlite__exec_fun1053(_ctx), _x_x1055, _ctx); /*10001*/
  _x_x1051 = kk_integer_unbox(_x_x1052, _ctx); /*int*/
  x_10210 = kk_sqlite__ffi_sqlite__exec__raw(_x_x1051, sql, _ctx); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_10210, _ctx);
    kk_box_t _x_x1057 = kk_std_core_hnd_yield_extend(kk_sqlite_new_hc__sqlite__exec_fun1058(d, _ctx), _ctx); /*10001*/
    return kk_std_core_types__either_unbox(_x_x1057, KK_OWNED, _ctx);
  }
  {
    bool _match_x647;
    bool _brw_x650 = kk_integer_eq_borrow(x_10210,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(x_10210, _ctx);
    _match_x647 = _brw_x650; /*bool*/
    if (_match_x647) {
      kk_sqlite__db_drop(d, _ctx);
      return kk_std_core_types__new_Right(kk_bool_box(true), _ctx);
    }
    {
      kk_string_t x_0_10213;
      kk_integer_t _x_x1060;
      kk_box_t _x_x1061 = kk_std_core_hnd__open_none1(kk_sqlite_new_hc__sqlite__exec_fun1062(_ctx), kk_sqlite__db_box(d, _ctx), _ctx); /*10001*/
      _x_x1060 = kk_integer_unbox(_x_x1061, _ctx); /*int*/
      x_0_10213 = kk_sqlite__ffi_sqlite__errmsg__raw(_x_x1060, _ctx); /*string*/
      if (kk_yielding(kk_context())) {
        kk_string_drop(x_0_10213, _ctx);
        kk_box_t _x_x1064 = kk_std_core_hnd_yield_extend(kk_sqlite_new_hc__sqlite__exec_fun1065(_ctx), _ctx); /*10001*/
        return kk_std_core_types__either_unbox(_x_x1064, KK_OWNED, _ctx);
      }
      {
        return kk_std_core_types__new_Left(kk_string_box(x_0_10213), _ctx);
      }
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_sqlite__mlift_hc__sqlite__exec__p_10180_fun1070__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite__mlift_hc__sqlite__exec__p_10180_fun1070(kk_function_t _fself, kk_box_t _b_x175, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__sqlite__exec__p_10180_fun1070(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite__mlift_hc__sqlite__exec__p_10180_fun1070, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite__mlift_hc__sqlite__exec__p_10180_fun1070(kk_function_t _fself, kk_box_t _b_x175, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x1071;
  kk_sqlite__db _match_x644 = kk_sqlite__db_unbox(_b_x175, KK_OWNED, _ctx); /*sqlite/db*/;
  {
    kk_integer_t _x_0 = _match_x644.h;
    _x_x1071 = _x_0; /*int*/
  }
  return kk_integer_box(_x_x1071, _ctx);
}


// lift anonymous function
struct kk_sqlite__mlift_hc__sqlite__exec__p_10180_fun1073__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite__mlift_hc__sqlite__exec__p_10180_fun1073(kk_function_t _fself, kk_box_t _b_x180, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__sqlite__exec__p_10180_fun1073(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite__mlift_hc__sqlite__exec__p_10180_fun1073, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite__mlift_hc__sqlite__exec__p_10180_fun1073(kk_function_t _fself, kk_box_t _b_x180, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__either _x_x1074;
  kk_string_t _x_x1075 = kk_string_unbox(_b_x180); /*string*/
  _x_x1074 = kk_sqlite__mlift_hc__sqlite__exec__p_10179(_x_x1075, _ctx); /*either<string,bool>*/
  return kk_std_core_types__either_box(_x_x1074, _ctx);
}

kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__exec__p_10180(kk_sqlite__db d, kk_integer_t rc, kk_context_t* _ctx) { /* (d : db, rc : int) -> io either<string,bool> */ 
  bool _match_x642;
  bool _brw_x645 = kk_integer_eq_borrow(rc,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(rc, _ctx);
  _match_x642 = _brw_x645; /*bool*/
  if (_match_x642) {
    kk_sqlite__db_drop(d, _ctx);
    return kk_std_core_types__new_Right(kk_bool_box(true), _ctx);
  }
  {
    kk_string_t x_10216;
    kk_integer_t _x_x1068;
    kk_box_t _x_x1069 = kk_std_core_hnd__open_none1(kk_sqlite__new_mlift_hc__sqlite__exec__p_10180_fun1070(_ctx), kk_sqlite__db_box(d, _ctx), _ctx); /*10001*/
    _x_x1068 = kk_integer_unbox(_x_x1069, _ctx); /*int*/
    x_10216 = kk_sqlite__ffi_sqlite__errmsg__raw(_x_x1068, _ctx); /*string*/
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_10216, _ctx);
      kk_box_t _x_x1072 = kk_std_core_hnd_yield_extend(kk_sqlite__new_mlift_hc__sqlite__exec__p_10180_fun1073(_ctx), _ctx); /*10001*/
      return kk_std_core_types__either_unbox(_x_x1072, KK_OWNED, _ctx);
    }
    {
      return kk_std_core_types__new_Left(kk_string_box(x_10216), _ctx);
    }
  }
}
 
// .hc:63


// lift anonymous function
struct kk_sqlite_hc__sqlite__exec__p_fun1078__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__exec__p_fun1078(kk_function_t _fself, kk_box_t _b_x187, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__exec__p_fun1078(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__exec__p_fun1078, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__exec__p_fun1078(kk_function_t _fself, kk_box_t _b_x187, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x1079;
  kk_sqlite__db _match_x641 = kk_sqlite__db_unbox(_b_x187, KK_OWNED, _ctx); /*sqlite/db*/;
  {
    kk_integer_t _x = _match_x641.h;
    _x_x1079 = _x; /*int*/
  }
  return kk_integer_box(_x_x1079, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__exec__p_fun1086__t {
  struct kk_function_s _base;
  kk_sqlite__db d;
};
static kk_box_t kk_sqlite_hc__sqlite__exec__p_fun1086(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__exec__p_fun1086(kk_sqlite__db d, kk_context_t* _ctx) {
  struct kk_sqlite_hc__sqlite__exec__p_fun1086__t* _self = kk_function_alloc_as(struct kk_sqlite_hc__sqlite__exec__p_fun1086__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_sqlite_hc__sqlite__exec__p_fun1086, kk_context());
  _self->d = d;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__exec__p_fun1086(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx) {
  struct kk_sqlite_hc__sqlite__exec__p_fun1086__t* _self = kk_function_as(struct kk_sqlite_hc__sqlite__exec__p_fun1086__t*, _fself, _ctx);
  kk_sqlite__db d = _self->d; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(d, _ctx);}, {}, _ctx)
  kk_integer_t rc_207 = kk_integer_unbox(_b_x192, _ctx); /*int*/;
  kk_std_core_types__either _x_x1087 = kk_sqlite__mlift_hc__sqlite__exec__p_10180(d, rc_207, _ctx); /*either<string,bool>*/
  return kk_std_core_types__either_box(_x_x1087, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__exec__p_fun1090__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__exec__p_fun1090(kk_function_t _fself, kk_box_t _b_x196, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__exec__p_fun1090(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__exec__p_fun1090, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__exec__p_fun1090(kk_function_t _fself, kk_box_t _b_x196, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x1091;
  kk_sqlite__db _match_x639 = kk_sqlite__db_unbox(_b_x196, KK_OWNED, _ctx); /*sqlite/db*/;
  {
    kk_integer_t _x_0 = _match_x639.h;
    _x_x1091 = _x_0; /*int*/
  }
  return kk_integer_box(_x_x1091, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__exec__p_fun1093__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__exec__p_fun1093(kk_function_t _fself, kk_box_t _b_x201, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__exec__p_fun1093(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__exec__p_fun1093, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__exec__p_fun1093(kk_function_t _fself, kk_box_t _b_x201, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__either _x_x1094;
  kk_string_t _x_x1095 = kk_string_unbox(_b_x201); /*string*/
  _x_x1094 = kk_sqlite__mlift_hc__sqlite__exec__p_10179(_x_x1095, _ctx); /*either<string,bool>*/
  return kk_std_core_types__either_box(_x_x1094, _ctx);
}

kk_std_core_types__either kk_sqlite_hc__sqlite__exec__p(kk_sqlite__db d, kk_string_t sql, kk_std_core_types__list params, kk_context_t* _ctx) { /* (d : db, sql : string, params : list<string>) -> io either<string,bool> */ 
  kk_integer_t x_10218;
  kk_integer_t _x_x1076;
  kk_box_t _x_x1077;
  kk_box_t _x_x1080;
  kk_sqlite__db _x_x1081 = kk_sqlite__db_dup(d, _ctx); /*sqlite/db*/
  _x_x1080 = kk_sqlite__db_box(_x_x1081, _ctx); /*10000*/
  _x_x1077 = kk_std_core_hnd__open_none1(kk_sqlite_new_hc__sqlite__exec__p_fun1078(_ctx), _x_x1080, _ctx); /*10001*/
  _x_x1076 = kk_integer_unbox(_x_x1077, _ctx); /*int*/
  kk_string_t _x_x1082;
  kk_string_t _x_x1083;
  kk_define_string_literal(static, _s_x1084, 1, "" "\x1F" "", _ctx)
  _x_x1083 = kk_string_dup(_s_x1084, _ctx); /*string*/
  _x_x1082 = kk_std_core_list_joinsep(params, _x_x1083, _ctx); /*string*/
  x_10218 = kk_sqlite__ffi_sqlite__exec__p__raw(_x_x1076, sql, _x_x1082, _ctx); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_10218, _ctx);
    kk_box_t _x_x1085 = kk_std_core_hnd_yield_extend(kk_sqlite_new_hc__sqlite__exec__p_fun1086(d, _ctx), _ctx); /*10001*/
    return kk_std_core_types__either_unbox(_x_x1085, KK_OWNED, _ctx);
  }
  {
    bool _match_x637;
    bool _brw_x640 = kk_integer_eq_borrow(x_10218,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(x_10218, _ctx);
    _match_x637 = _brw_x640; /*bool*/
    if (_match_x637) {
      kk_sqlite__db_drop(d, _ctx);
      return kk_std_core_types__new_Right(kk_bool_box(true), _ctx);
    }
    {
      kk_string_t x_0_10221;
      kk_integer_t _x_x1088;
      kk_box_t _x_x1089 = kk_std_core_hnd__open_none1(kk_sqlite_new_hc__sqlite__exec__p_fun1090(_ctx), kk_sqlite__db_box(d, _ctx), _ctx); /*10001*/
      _x_x1088 = kk_integer_unbox(_x_x1089, _ctx); /*int*/
      x_0_10221 = kk_sqlite__ffi_sqlite__errmsg__raw(_x_x1088, _ctx); /*string*/
      if (kk_yielding(kk_context())) {
        kk_string_drop(x_0_10221, _ctx);
        kk_box_t _x_x1092 = kk_std_core_hnd_yield_extend(kk_sqlite_new_hc__sqlite__exec__p_fun1093(_ctx), _ctx); /*10001*/
        return kk_std_core_types__either_unbox(_x_x1092, KK_OWNED, _ctx);
      }
      {
        return kk_std_core_types__new_Left(kk_string_box(x_0_10221), _ctx);
      }
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1098__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1098(kk_function_t _fself, kk_box_t _b_x231, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__sqlite__query__p_10184_fun1098(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1098, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1104__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1104(kk_function_t _fself, kk_box_t _b_x214, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__sqlite__query__p_10184_fun1104(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1104, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1104(kk_function_t _fself, kk_box_t _b_x214, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x1105;
  kk_char_t _x_x1106 = kk_char_unbox(_b_x214, KK_OWNED, _ctx); /*char*/
  _x_x1105 = kk_std_core_string_char_fs_string(_x_x1106, _ctx); /*string*/
  return kk_string_box(_x_x1105);
}


// lift anonymous function
struct kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1108__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1108(kk_function_t _fself, kk_box_t _b_x218, kk_box_t _b_x219, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__sqlite__query__p_10184_fun1108(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1108, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1108(kk_function_t _fself, kk_box_t _b_x218, kk_box_t _b_x219, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_vector_t v_10011_1;
  kk_string_t _x_x1109 = kk_string_unbox(_b_x218); /*string*/
  kk_string_t _x_x1110 = kk_string_unbox(_b_x219); /*string*/
  v_10011_1 = kk_string_splitv(_x_x1109,_x_x1110,kk_context()); /*vector<string>*/
  kk_std_core_types__list _x_x1111 = kk_std_core_vector_vlist(v_10011_1, kk_std_core_types__new_None(_ctx), _ctx); /*list<10000>*/
  return kk_std_core_types__list_box(_x_x1111, _ctx);
}


// lift anonymous function
struct kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1117__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1117(kk_function_t _fself, kk_box_t _b_x228, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__sqlite__query__p_10184_fun1117(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1117, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1117(kk_function_t _fself, kk_box_t _b_x228, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_sqlite__row _x_x1118;
  kk_std_core_types__list _x_x1119 = kk_std_core_types__list_unbox(_b_x228, KK_OWNED, _ctx); /*list<string>*/
  _x_x1118 = kk_sqlite__mlift_hc__sqlite__query__p_10182(_x_x1119, _ctx); /*sqlite/row*/
  return kk_sqlite__row_box(_x_x1118, _ctx);
}
static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1098(kk_function_t _fself, kk_box_t _b_x231, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list x_0_10226;
  bool _match_x631;
  kk_string_t _x_x1099;
  kk_define_string_literal(static, _s_x1100, 1, "" "\x1F" "", _ctx)
  _x_x1099 = kk_string_dup(_s_x1100, _ctx); /*string*/
  kk_string_t _x_x1101 = kk_string_empty(); /*string*/
  _match_x631 = kk_string_is_eq(_x_x1099,_x_x1101,kk_context()); /*bool*/
  if (_match_x631) {
    kk_std_core_types__list _b_x212_220;
    kk_string_t _x_x1103 = kk_string_unbox(_b_x231); /*string*/
    _b_x212_220 = kk_std_core_string_list(_x_x1103, _ctx); /*list<char>*/
    kk_function_t _brw_x632 = kk_sqlite__new_mlift_hc__sqlite__query__p_10184_fun1104(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x633 = kk_std_core_list_map(_b_x212_220, _brw_x632, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x632, _ctx);
    x_0_10226 = _brw_x633; /*list<string>*/
  }
  else {
    kk_box_t _x_x1107;
    kk_box_t _x_x1112;
    kk_string_t _x_x1113;
    kk_define_string_literal(static, _s_x1114, 1, "" "\x1F" "", _ctx)
    _x_x1113 = kk_string_dup(_s_x1114, _ctx); /*string*/
    _x_x1112 = kk_string_box(_x_x1113); /*10001*/
    _x_x1107 = kk_std_core_hnd__open_none2(kk_sqlite__new_mlift_hc__sqlite__query__p_10184_fun1108(_ctx), _b_x231, _x_x1112, _ctx); /*10002*/
    x_0_10226 = kk_std_core_types__list_unbox(_x_x1107, KK_OWNED, _ctx); /*list<string>*/
  }
  kk_sqlite__row _x_x1115;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_0_10226, _ctx);
    kk_box_t _x_x1116 = kk_std_core_hnd_yield_extend(kk_sqlite__new_mlift_hc__sqlite__query__p_10184_fun1117(_ctx), _ctx); /*10001*/
    _x_x1115 = kk_sqlite__row_unbox(_x_x1116, KK_OWNED, _ctx); /*sqlite/row*/
  }
  else {
    _x_x1115 = kk_sqlite__new_Row(x_0_10226, _ctx); /*sqlite/row*/
  }
  return kk_sqlite__row_box(_x_x1115, _ctx);
}


// lift anonymous function
struct kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1120__t {
  struct kk_function_s _base;
  kk_std_core_types__list _c_x10110;
};
static kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1120(kk_function_t _fself, kk_std_core_types__list _y_x10113, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__sqlite__query__p_10184_fun1120(kk_std_core_types__list _c_x10110, kk_context_t* _ctx) {
  struct kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1120__t* _self = kk_function_alloc_as(struct kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1120__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1120, kk_context());
  _self->_c_x10110 = _c_x10110;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1120(kk_function_t _fself, kk_std_core_types__list _y_x10113, kk_context_t* _ctx) {
  struct kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1120__t* _self = kk_function_as(struct kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1120__t*, _fself, _ctx);
  kk_std_core_types__list _c_x10110 = _self->_c_x10110; /* list<string> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_c_x10110, _ctx);}, {}, _ctx)
  kk_box_t _x_x1121;
  kk_sqlite__queryresult _x_x1122 = kk_sqlite__new_Queryresult(kk_reuse_null, 0, _c_x10110, _y_x10113, _ctx); /*sqlite/queryresult*/
  _x_x1121 = kk_sqlite__queryresult_box(_x_x1122, _ctx); /*10015*/
  return kk_std_core_types__new_Right(_x_x1121, _ctx);
}


// lift anonymous function
struct kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1124__t {
  struct kk_function_s _base;
  kk_function_t next_10225;
};
static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1124(kk_function_t _fself, kk_box_t _b_x239, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__sqlite__query__p_10184_fun1124(kk_function_t next_10225, kk_context_t* _ctx) {
  struct kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1124__t* _self = kk_function_alloc_as(struct kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1124__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1124, kk_context());
  _self->next_10225 = next_10225;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1124(kk_function_t _fself, kk_box_t _b_x239, kk_context_t* _ctx) {
  struct kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1124__t* _self = kk_function_as(struct kk_sqlite__mlift_hc__sqlite__query__p_10184_fun1124__t*, _fself, _ctx);
  kk_function_t next_10225 = _self->next_10225; /* (list<sqlite/row>) -> <alloc<global>,console/console,div,exn,fsys,ndet,net,read<global>,ui,write<global>> either<string,sqlite/queryresult> */
  kk_drop_match(_self, {kk_function_dup(next_10225, _ctx);}, {}, _ctx)
  kk_std_core_types__either _x_x1125;
  kk_std_core_types__list _x_x1126 = kk_std_core_types__list_unbox(_b_x239, KK_OWNED, _ctx); /*list<sqlite/row>*/
  _x_x1125 = kk_function_call(kk_std_core_types__either, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_10225, (next_10225, _x_x1126, _ctx), _ctx); /*either<string,sqlite/queryresult>*/
  return kk_std_core_types__either_box(_x_x1125, _ctx);
}

kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__query__p_10184(kk_std_core_types__list data__rows, kk_std_core_types__list _c_x10110, kk_context_t* _ctx) { /* (data_rows : list<string>, list<string>) -> either<string,queryresult> */ 
  kk_std_core_types__list x_10224;
  kk_function_t _brw_x634 = kk_sqlite__new_mlift_hc__sqlite__query__p_10184_fun1098(_ctx); /*(10001) -> 10003 10002*/;
  kk_std_core_types__list _brw_x635 = kk_std_core_list_map(data__rows, _brw_x634, _ctx); /*list<10002>*/;
  kk_function_drop(_brw_x634, _ctx);
  x_10224 = _brw_x635; /*list<sqlite/row>*/
  kk_function_t next_10225 = kk_sqlite__new_mlift_hc__sqlite__query__p_10184_fun1120(_c_x10110, _ctx); /*(list<sqlite/row>) -> <alloc<global>,console/console,div,exn,fsys,ndet,net,read<global>,ui,write<global>> either<string,sqlite/queryresult>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10224, _ctx);
    kk_box_t _x_x1123 = kk_std_core_hnd_yield_extend(kk_sqlite__new_mlift_hc__sqlite__query__p_10184_fun1124(next_10225, _ctx), _ctx); /*10001*/
    return kk_std_core_types__either_unbox(_x_x1123, KK_OWNED, _ctx);
  }
  {
    return kk_function_call(kk_std_core_types__either, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_10225, (next_10225, x_10224, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_sqlite__mlift_hc__sqlite__query__p_10185_fun1134__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10185_fun1134(kk_function_t _fself, kk_box_t _b_x245, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__sqlite__query__p_10185_fun1134(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite__mlift_hc__sqlite__query__p_10185_fun1134, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10185_fun1134(kk_function_t _fself, kk_box_t _b_x245, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x1135;
  kk_char_t _x_x1136 = kk_char_unbox(_b_x245, KK_OWNED, _ctx); /*char*/
  _x_x1135 = kk_std_core_string_char_fs_string(_x_x1136, _ctx); /*string*/
  return kk_string_box(_x_x1135);
}


// lift anonymous function
struct kk_sqlite__mlift_hc__sqlite__query__p_10185_fun1138__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10185_fun1138(kk_function_t _fself, kk_box_t _b_x249, kk_box_t _b_x250, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__sqlite__query__p_10185_fun1138(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite__mlift_hc__sqlite__query__p_10185_fun1138, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10185_fun1138(kk_function_t _fself, kk_box_t _b_x249, kk_box_t _b_x250, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_vector_t v_10011_0;
  kk_string_t _x_x1139 = kk_string_unbox(_b_x249); /*string*/
  kk_string_t _x_x1140 = kk_string_unbox(_b_x250); /*string*/
  v_10011_0 = kk_string_splitv(_x_x1139,_x_x1140,kk_context()); /*vector<string>*/
  kk_std_core_types__list _x_x1141 = kk_std_core_vector_vlist(v_10011_0, kk_std_core_types__new_None(_ctx), _ctx); /*list<10000>*/
  return kk_std_core_types__list_box(_x_x1141, _ctx);
}


// lift anonymous function
struct kk_sqlite__mlift_hc__sqlite__query__p_10185_fun1146__t {
  struct kk_function_s _base;
  kk_std_core_types__list data__rows;
};
static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10185_fun1146(kk_function_t _fself, kk_box_t _b_x259, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__sqlite__query__p_10185_fun1146(kk_std_core_types__list data__rows, kk_context_t* _ctx) {
  struct kk_sqlite__mlift_hc__sqlite__query__p_10185_fun1146__t* _self = kk_function_alloc_as(struct kk_sqlite__mlift_hc__sqlite__query__p_10185_fun1146__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_sqlite__mlift_hc__sqlite__query__p_10185_fun1146, kk_context());
  _self->data__rows = data__rows;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10185_fun1146(kk_function_t _fself, kk_box_t _b_x259, kk_context_t* _ctx) {
  struct kk_sqlite__mlift_hc__sqlite__query__p_10185_fun1146__t* _self = kk_function_as(struct kk_sqlite__mlift_hc__sqlite__query__p_10185_fun1146__t*, _fself, _ctx);
  kk_std_core_types__list data__rows = _self->data__rows; /* list<string> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(data__rows, _ctx);}, {}, _ctx)
  kk_std_core_types__list _c_x10110_262 = kk_std_core_types__list_unbox(_b_x259, KK_OWNED, _ctx); /*list<string>*/;
  kk_std_core_types__either _x_x1147 = kk_sqlite__mlift_hc__sqlite__query__p_10184(data__rows, _c_x10110_262, _ctx); /*either<string,sqlite/queryresult>*/
  return kk_std_core_types__either_box(_x_x1147, _ctx);
}

kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__query__p_10185(kk_std_core_types__list row__strs, kk_context_t* _ctx) { /* (row_strs : list<string>) -> <alloc<global>,console/console,div,exn,fsys,ndet,net,read<global>,ui,write<global>> either<string,queryresult> */ 
  if (kk_std_core_types__is_Nil(row__strs, _ctx)) {
    kk_box_t _x_x1127;
    kk_sqlite__queryresult _x_x1128 = kk_sqlite__new_Queryresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*sqlite/queryresult*/
    _x_x1127 = kk_sqlite__queryresult_box(_x_x1128, _ctx); /*10015*/
    return kk_std_core_types__new_Right(_x_x1127, _ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x1129 = kk_std_core_types__as_Cons(row__strs, _ctx);
    kk_box_t _box_x242 = _con_x1129->head;
    kk_std_core_types__list data__rows = _con_x1129->tail;
    kk_string_t header = kk_string_unbox(_box_x242);
    if kk_likely(kk_datatype_ptr_is_unique(row__strs, _ctx)) {
      kk_datatype_ptr_free(row__strs, _ctx);
    }
    else {
      kk_std_core_types__list_dup(data__rows, _ctx);
      kk_string_dup(header, _ctx);
      kk_datatype_ptr_decref(row__strs, _ctx);
    }
    kk_std_core_types__list x_10230;
    bool _match_x626;
    kk_string_t _x_x1130;
    kk_define_string_literal(static, _s_x1131, 1, "" "\x1F" "", _ctx)
    _x_x1130 = kk_string_dup(_s_x1131, _ctx); /*string*/
    kk_string_t _x_x1132 = kk_string_empty(); /*string*/
    _match_x626 = kk_string_is_eq(_x_x1130,_x_x1132,kk_context()); /*bool*/
    if (_match_x626) {
      kk_std_core_types__list _b_x243_251 = kk_std_core_string_list(header, _ctx); /*list<char>*/;
      kk_function_t _brw_x627 = kk_sqlite__new_mlift_hc__sqlite__query__p_10185_fun1134(_ctx); /*(10001) -> 10003 10002*/;
      kk_std_core_types__list _brw_x628 = kk_std_core_list_map(_b_x243_251, _brw_x627, _ctx); /*list<10002>*/;
      kk_function_drop(_brw_x627, _ctx);
      x_10230 = _brw_x628; /*list<string>*/
    }
    else {
      kk_box_t _x_x1137;
      kk_box_t _x_x1142;
      kk_string_t _x_x1143;
      kk_define_string_literal(static, _s_x1144, 1, "" "\x1F" "", _ctx)
      _x_x1143 = kk_string_dup(_s_x1144, _ctx); /*string*/
      _x_x1142 = kk_string_box(_x_x1143); /*10001*/
      _x_x1137 = kk_std_core_hnd__open_none2(kk_sqlite__new_mlift_hc__sqlite__query__p_10185_fun1138(_ctx), kk_string_box(header), _x_x1142, _ctx); /*10002*/
      x_10230 = kk_std_core_types__list_unbox(_x_x1137, KK_OWNED, _ctx); /*list<string>*/
    }
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_10230, _ctx);
      kk_box_t _x_x1145 = kk_std_core_hnd_yield_extend(kk_sqlite__new_mlift_hc__sqlite__query__p_10185_fun1146(data__rows, _ctx), _ctx); /*10001*/
      return kk_std_core_types__either_unbox(_x_x1145, KK_OWNED, _ctx);
    }
    {
      return kk_sqlite__mlift_hc__sqlite__query__p_10184(data__rows, x_10230, _ctx);
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_sqlite__mlift_hc__sqlite__query__p_10186_fun1148__t {
  struct kk_function_s _base;
};
static bool kk_sqlite__mlift_hc__sqlite__query__p_10186_fun1148(kk_function_t _fself, kk_box_t _b_x265, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__sqlite__query__p_10186_fun1148(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite__mlift_hc__sqlite__query__p_10186_fun1148, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_sqlite__mlift_hc__sqlite__query__p_10186_fun1148(kk_function_t _fself, kk_box_t _b_x265, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x1149 = kk_string_unbox(_b_x265); /*string*/
  kk_string_t _x_x1150 = kk_string_empty(); /*string*/
  return kk_string_is_neq(_x_x1149,_x_x1150,kk_context());
}


// lift anonymous function
struct kk_sqlite__mlift_hc__sqlite__query__p_10186_fun1153__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10186_fun1153(kk_function_t _fself, kk_box_t _b_x270, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__sqlite__query__p_10186_fun1153(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite__mlift_hc__sqlite__query__p_10186_fun1153, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10186_fun1153(kk_function_t _fself, kk_box_t _b_x270, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__either _x_x1154;
  kk_std_core_types__list _x_x1155 = kk_std_core_types__list_unbox(_b_x270, KK_OWNED, _ctx); /*list<string>*/
  _x_x1154 = kk_sqlite__mlift_hc__sqlite__query__p_10185(_x_x1155, _ctx); /*either<string,sqlite/queryresult>*/
  return kk_std_core_types__either_box(_x_x1154, _ctx);
}

kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__query__p_10186(kk_std_core_types__list _c_x10107, kk_context_t* _ctx) { /* (list<string>) -> either<string,queryresult> */ 
  kk_std_core_types__list x_10232 = kk_std_core_list_filter(_c_x10107, kk_sqlite__new_mlift_hc__sqlite__query__p_10186_fun1148(_ctx), _ctx); /*list<string>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10232, _ctx);
    kk_box_t _x_x1152 = kk_std_core_hnd_yield_extend(kk_sqlite__new_mlift_hc__sqlite__query__p_10186_fun1153(_ctx), _ctx); /*10001*/
    return kk_std_core_types__either_unbox(_x_x1152, KK_OWNED, _ctx);
  }
  {
    return kk_sqlite__mlift_hc__sqlite__query__p_10185(x_10232, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_sqlite__mlift_hc__sqlite__query__p_10187_fun1161__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10187_fun1161(kk_function_t _fself, kk_box_t _b_x274, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__sqlite__query__p_10187_fun1161(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite__mlift_hc__sqlite__query__p_10187_fun1161, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10187_fun1161(kk_function_t _fself, kk_box_t _b_x274, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x1162;
  kk_sqlite__db _match_x623 = kk_sqlite__db_unbox(_b_x274, KK_OWNED, _ctx); /*sqlite/db*/;
  {
    kk_integer_t _x_0 = _match_x623.h;
    _x_x1162 = _x_0; /*int*/
  }
  return kk_integer_box(_x_x1162, _ctx);
}


// lift anonymous function
struct kk_sqlite__mlift_hc__sqlite__query__p_10187_fun1164__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10187_fun1164(kk_function_t _fself, kk_box_t _b_x279, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__sqlite__query__p_10187_fun1164(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite__mlift_hc__sqlite__query__p_10187_fun1164, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10187_fun1164(kk_function_t _fself, kk_box_t _b_x279, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__either _x_x1165;
  kk_string_t _x_x1166 = kk_string_unbox(_b_x279); /*string*/
  _x_x1165 = kk_sqlite__mlift_hc__sqlite__query__p_10181(_x_x1166, _ctx); /*either<string,sqlite/queryresult>*/
  return kk_std_core_types__either_box(_x_x1165, _ctx);
}


// lift anonymous function
struct kk_sqlite__mlift_hc__sqlite__query__p_10187_fun1171__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10187_fun1171(kk_function_t _fself, kk_box_t _b_x283, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__sqlite__query__p_10187_fun1171(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite__mlift_hc__sqlite__query__p_10187_fun1171, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10187_fun1171(kk_function_t _fself, kk_box_t _b_x283, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x1172;
  kk_char_t _x_x1173 = kk_char_unbox(_b_x283, KK_OWNED, _ctx); /*char*/
  _x_x1172 = kk_std_core_string_char_fs_string(_x_x1173, _ctx); /*string*/
  return kk_string_box(_x_x1172);
}


// lift anonymous function
struct kk_sqlite__mlift_hc__sqlite__query__p_10187_fun1175__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10187_fun1175(kk_function_t _fself, kk_box_t _b_x287, kk_box_t _b_x288, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__sqlite__query__p_10187_fun1175(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite__mlift_hc__sqlite__query__p_10187_fun1175, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10187_fun1175(kk_function_t _fself, kk_box_t _b_x287, kk_box_t _b_x288, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_vector_t v_10011;
  kk_string_t _x_x1176 = kk_string_unbox(_b_x287); /*string*/
  kk_string_t _x_x1177 = kk_string_unbox(_b_x288); /*string*/
  v_10011 = kk_string_splitv(_x_x1176,_x_x1177,kk_context()); /*vector<string>*/
  kk_std_core_types__list _x_x1178 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<10000>*/
  return kk_std_core_types__list_box(_x_x1178, _ctx);
}


// lift anonymous function
struct kk_sqlite__mlift_hc__sqlite__query__p_10187_fun1183__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10187_fun1183(kk_function_t _fself, kk_box_t _b_x297, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__sqlite__query__p_10187_fun1183(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite__mlift_hc__sqlite__query__p_10187_fun1183, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite__mlift_hc__sqlite__query__p_10187_fun1183(kk_function_t _fself, kk_box_t _b_x297, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__either _x_x1184;
  kk_std_core_types__list _x_x1185 = kk_std_core_types__list_unbox(_b_x297, KK_OWNED, _ctx); /*list<string>*/
  _x_x1184 = kk_sqlite__mlift_hc__sqlite__query__p_10186(_x_x1185, _ctx); /*either<string,sqlite/queryresult>*/
  return kk_std_core_types__either_box(_x_x1184, _ctx);
}

kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__query__p_10187(kk_sqlite__db d, kk_string_t hc__raw, kk_context_t* _ctx) { /* (d : db, hc_raw : string) -> io either<string,queryresult> */ 
  bool _match_x617;
  kk_string_t _x_x1156 = kk_string_dup(hc__raw, _ctx); /*string*/
  kk_string_t _x_x1157 = kk_string_empty(); /*string*/
  _match_x617 = kk_string_is_eq(_x_x1156,_x_x1157,kk_context()); /*bool*/
  if (_match_x617) {
    kk_string_drop(hc__raw, _ctx);
    kk_string_t x_10234;
    kk_integer_t _x_x1159;
    kk_box_t _x_x1160 = kk_std_core_hnd__open_none1(kk_sqlite__new_mlift_hc__sqlite__query__p_10187_fun1161(_ctx), kk_sqlite__db_box(d, _ctx), _ctx); /*10001*/
    _x_x1159 = kk_integer_unbox(_x_x1160, _ctx); /*int*/
    x_10234 = kk_sqlite__ffi_sqlite__errmsg__raw(_x_x1159, _ctx); /*string*/
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_10234, _ctx);
      kk_box_t _x_x1163 = kk_std_core_hnd_yield_extend(kk_sqlite__new_mlift_hc__sqlite__query__p_10187_fun1164(_ctx), _ctx); /*10001*/
      return kk_std_core_types__either_unbox(_x_x1163, KK_OWNED, _ctx);
    }
    {
      return kk_std_core_types__new_Left(kk_string_box(x_10234), _ctx);
    }
  }
  {
    kk_sqlite__db_drop(d, _ctx);
    kk_std_core_types__list x_0_10236;
    bool _match_x619;
    kk_string_t _x_x1167;
    kk_define_string_literal(static, _s_x1168, 1, "" "\x1E" "", _ctx)
    _x_x1167 = kk_string_dup(_s_x1168, _ctx); /*string*/
    kk_string_t _x_x1169 = kk_string_empty(); /*string*/
    _match_x619 = kk_string_is_eq(_x_x1167,_x_x1169,kk_context()); /*bool*/
    if (_match_x619) {
      kk_std_core_types__list _b_x281_289 = kk_std_core_string_list(hc__raw, _ctx); /*list<char>*/;
      kk_function_t _brw_x620 = kk_sqlite__new_mlift_hc__sqlite__query__p_10187_fun1171(_ctx); /*(10001) -> 10003 10002*/;
      kk_std_core_types__list _brw_x621 = kk_std_core_list_map(_b_x281_289, _brw_x620, _ctx); /*list<10002>*/;
      kk_function_drop(_brw_x620, _ctx);
      x_0_10236 = _brw_x621; /*list<string>*/
    }
    else {
      kk_box_t _x_x1174;
      kk_box_t _x_x1179;
      kk_string_t _x_x1180;
      kk_define_string_literal(static, _s_x1181, 1, "" "\x1E" "", _ctx)
      _x_x1180 = kk_string_dup(_s_x1181, _ctx); /*string*/
      _x_x1179 = kk_string_box(_x_x1180); /*10001*/
      _x_x1174 = kk_std_core_hnd__open_none2(kk_sqlite__new_mlift_hc__sqlite__query__p_10187_fun1175(_ctx), kk_string_box(hc__raw), _x_x1179, _ctx); /*10002*/
      x_0_10236 = kk_std_core_types__list_unbox(_x_x1174, KK_OWNED, _ctx); /*list<string>*/
    }
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_0_10236, _ctx);
      kk_box_t _x_x1182 = kk_std_core_hnd_yield_extend(kk_sqlite__new_mlift_hc__sqlite__query__p_10187_fun1183(_ctx), _ctx); /*10001*/
      return kk_std_core_types__either_unbox(_x_x1182, KK_OWNED, _ctx);
    }
    {
      return kk_sqlite__mlift_hc__sqlite__query__p_10186(x_0_10236, _ctx);
    }
  }
}
 
// .hc:71


// lift anonymous function
struct kk_sqlite_hc__sqlite__query__p_fun1188__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1188(kk_function_t _fself, kk_box_t _b_x303, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__query__p_fun1188(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__query__p_fun1188, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1188(kk_function_t _fself, kk_box_t _b_x303, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x1189;
  kk_sqlite__db _match_x616 = kk_sqlite__db_unbox(_b_x303, KK_OWNED, _ctx); /*sqlite/db*/;
  {
    kk_integer_t _x = _match_x616.h;
    _x_x1189 = _x; /*int*/
  }
  return kk_integer_box(_x_x1189, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__query__p_fun1196__t {
  struct kk_function_s _base;
  kk_sqlite__db d;
};
static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1196(kk_function_t _fself, kk_box_t _b_x308, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__query__p_fun1196(kk_sqlite__db d, kk_context_t* _ctx) {
  struct kk_sqlite_hc__sqlite__query__p_fun1196__t* _self = kk_function_alloc_as(struct kk_sqlite_hc__sqlite__query__p_fun1196__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_sqlite_hc__sqlite__query__p_fun1196, kk_context());
  _self->d = d;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1196(kk_function_t _fself, kk_box_t _b_x308, kk_context_t* _ctx) {
  struct kk_sqlite_hc__sqlite__query__p_fun1196__t* _self = kk_function_as(struct kk_sqlite_hc__sqlite__query__p_fun1196__t*, _fself, _ctx);
  kk_sqlite__db d = _self->d; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(d, _ctx);}, {}, _ctx)
  kk_string_t hc__raw_400 = kk_string_unbox(_b_x308); /*string*/;
  kk_std_core_types__either _x_x1197 = kk_sqlite__mlift_hc__sqlite__query__p_10187(d, hc__raw_400, _ctx); /*either<string,sqlite/queryresult>*/
  return kk_std_core_types__either_box(_x_x1197, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__query__p_fun1203__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1203(kk_function_t _fself, kk_box_t _b_x311, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__query__p_fun1203(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__query__p_fun1203, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1203(kk_function_t _fself, kk_box_t _b_x311, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x1204;
  kk_sqlite__db _match_x615 = kk_sqlite__db_unbox(_b_x311, KK_OWNED, _ctx); /*sqlite/db*/;
  {
    kk_integer_t _x_0 = _match_x615.h;
    _x_x1204 = _x_0; /*int*/
  }
  return kk_integer_box(_x_x1204, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__query__p_fun1206__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1206(kk_function_t _fself, kk_box_t _b_x316, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__query__p_fun1206(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__query__p_fun1206, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1206(kk_function_t _fself, kk_box_t _b_x316, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__either _x_x1207;
  kk_string_t _x_x1208 = kk_string_unbox(_b_x316); /*string*/
  _x_x1207 = kk_sqlite__mlift_hc__sqlite__query__p_10181(_x_x1208, _ctx); /*either<string,sqlite/queryresult>*/
  return kk_std_core_types__either_box(_x_x1207, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__query__p_fun1213__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1213(kk_function_t _fself, kk_box_t _b_x320, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__query__p_fun1213(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__query__p_fun1213, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1213(kk_function_t _fself, kk_box_t _b_x320, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x1214;
  kk_char_t _x_x1215 = kk_char_unbox(_b_x320, KK_OWNED, _ctx); /*char*/
  _x_x1214 = kk_std_core_string_char_fs_string(_x_x1215, _ctx); /*string*/
  return kk_string_box(_x_x1214);
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__query__p_fun1217__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1217(kk_function_t _fself, kk_box_t _b_x324, kk_box_t _b_x325, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__query__p_fun1217(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__query__p_fun1217, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1217(kk_function_t _fself, kk_box_t _b_x324, kk_box_t _b_x325, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_vector_t v_10011;
  kk_string_t _x_x1218 = kk_string_unbox(_b_x324); /*string*/
  kk_string_t _x_x1219 = kk_string_unbox(_b_x325); /*string*/
  v_10011 = kk_string_splitv(_x_x1218,_x_x1219,kk_context()); /*vector<string>*/
  kk_std_core_types__list _x_x1220 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<10000>*/
  return kk_std_core_types__list_box(_x_x1220, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__query__p_fun1225__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1225(kk_function_t _fself, kk_box_t _b_x334, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__query__p_fun1225(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__query__p_fun1225, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1225(kk_function_t _fself, kk_box_t _b_x334, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__either _x_x1226;
  kk_std_core_types__list _x_x1227 = kk_std_core_types__list_unbox(_b_x334, KK_OWNED, _ctx); /*list<string>*/
  _x_x1226 = kk_sqlite__mlift_hc__sqlite__query__p_10186(_x_x1227, _ctx); /*either<string,sqlite/queryresult>*/
  return kk_std_core_types__either_box(_x_x1226, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__query__p_fun1228__t {
  struct kk_function_s _base;
};
static bool kk_sqlite_hc__sqlite__query__p_fun1228(kk_function_t _fself, kk_box_t _b_x337, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__query__p_fun1228(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__query__p_fun1228, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_sqlite_hc__sqlite__query__p_fun1228(kk_function_t _fself, kk_box_t _b_x337, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x1229 = kk_string_unbox(_b_x337); /*string*/
  kk_string_t _x_x1230 = kk_string_empty(); /*string*/
  return kk_string_is_neq(_x_x1229,_x_x1230,kk_context());
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__query__p_fun1233__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1233(kk_function_t _fself, kk_box_t _b_x342, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__query__p_fun1233(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__query__p_fun1233, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1233(kk_function_t _fself, kk_box_t _b_x342, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__either _x_x1234;
  kk_std_core_types__list _x_x1235 = kk_std_core_types__list_unbox(_b_x342, KK_OWNED, _ctx); /*list<string>*/
  _x_x1234 = kk_sqlite__mlift_hc__sqlite__query__p_10185(_x_x1235, _ctx); /*either<string,sqlite/queryresult>*/
  return kk_std_core_types__either_box(_x_x1234, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__query__p_fun1243__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1243(kk_function_t _fself, kk_box_t _b_x347, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__query__p_fun1243(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__query__p_fun1243, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1243(kk_function_t _fself, kk_box_t _b_x347, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x1244;
  kk_char_t _x_x1245 = kk_char_unbox(_b_x347, KK_OWNED, _ctx); /*char*/
  _x_x1244 = kk_std_core_string_char_fs_string(_x_x1245, _ctx); /*string*/
  return kk_string_box(_x_x1244);
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__query__p_fun1247__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1247(kk_function_t _fself, kk_box_t _b_x351, kk_box_t _b_x352, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__query__p_fun1247(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__query__p_fun1247, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1247(kk_function_t _fself, kk_box_t _b_x351, kk_box_t _b_x352, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_vector_t v_10011_0;
  kk_string_t _x_x1248 = kk_string_unbox(_b_x351); /*string*/
  kk_string_t _x_x1249 = kk_string_unbox(_b_x352); /*string*/
  v_10011_0 = kk_string_splitv(_x_x1248,_x_x1249,kk_context()); /*vector<string>*/
  kk_std_core_types__list _x_x1250 = kk_std_core_vector_vlist(v_10011_0, kk_std_core_types__new_None(_ctx), _ctx); /*list<10000>*/
  return kk_std_core_types__list_box(_x_x1250, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__query__p_fun1255__t {
  struct kk_function_s _base;
  kk_std_core_types__list data__rows;
};
static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1255(kk_function_t _fself, kk_box_t _b_x361, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__query__p_fun1255(kk_std_core_types__list data__rows, kk_context_t* _ctx) {
  struct kk_sqlite_hc__sqlite__query__p_fun1255__t* _self = kk_function_alloc_as(struct kk_sqlite_hc__sqlite__query__p_fun1255__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_sqlite_hc__sqlite__query__p_fun1255, kk_context());
  _self->data__rows = data__rows;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1255(kk_function_t _fself, kk_box_t _b_x361, kk_context_t* _ctx) {
  struct kk_sqlite_hc__sqlite__query__p_fun1255__t* _self = kk_function_as(struct kk_sqlite_hc__sqlite__query__p_fun1255__t*, _fself, _ctx);
  kk_std_core_types__list data__rows = _self->data__rows; /* list<string> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(data__rows, _ctx);}, {}, _ctx)
  kk_std_core_types__list _c_x10110_401 = kk_std_core_types__list_unbox(_b_x361, KK_OWNED, _ctx); /*list<string>*/;
  kk_std_core_types__either _x_x1256 = kk_sqlite__mlift_hc__sqlite__query__p_10184(data__rows, _c_x10110_401, _ctx); /*either<string,sqlite/queryresult>*/
  return kk_std_core_types__either_box(_x_x1256, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__query__p_fun1257__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1257(kk_function_t _fself, kk_box_t _b_x381, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__query__p_fun1257(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__query__p_fun1257, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_sqlite_hc__sqlite__query__p_fun1263__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1263(kk_function_t _fself, kk_box_t _b_x364, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__query__p_fun1263(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__query__p_fun1263, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1263(kk_function_t _fself, kk_box_t _b_x364, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x1264;
  kk_char_t _x_x1265 = kk_char_unbox(_b_x364, KK_OWNED, _ctx); /*char*/
  _x_x1264 = kk_std_core_string_char_fs_string(_x_x1265, _ctx); /*string*/
  return kk_string_box(_x_x1264);
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__query__p_fun1267__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1267(kk_function_t _fself, kk_box_t _b_x368, kk_box_t _b_x369, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__query__p_fun1267(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__query__p_fun1267, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1267(kk_function_t _fself, kk_box_t _b_x368, kk_box_t _b_x369, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_vector_t v_10011_1;
  kk_string_t _x_x1268 = kk_string_unbox(_b_x368); /*string*/
  kk_string_t _x_x1269 = kk_string_unbox(_b_x369); /*string*/
  v_10011_1 = kk_string_splitv(_x_x1268,_x_x1269,kk_context()); /*vector<string>*/
  kk_std_core_types__list _x_x1270 = kk_std_core_vector_vlist(v_10011_1, kk_std_core_types__new_None(_ctx), _ctx); /*list<10000>*/
  return kk_std_core_types__list_box(_x_x1270, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__query__p_fun1276__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1276(kk_function_t _fself, kk_box_t _b_x378, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__query__p_fun1276(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__query__p_fun1276, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1276(kk_function_t _fself, kk_box_t _b_x378, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_sqlite__row _x_x1277;
  kk_std_core_types__list _x_x1278 = kk_std_core_types__list_unbox(_b_x378, KK_OWNED, _ctx); /*list<string>*/
  _x_x1277 = kk_sqlite__mlift_hc__sqlite__query__p_10182(_x_x1278, _ctx); /*sqlite/row*/
  return kk_sqlite__row_box(_x_x1277, _ctx);
}
static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1257(kk_function_t _fself, kk_box_t _b_x381, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list x_5_10256;
  bool _match_x603;
  kk_string_t _x_x1258;
  kk_define_string_literal(static, _s_x1259, 1, "" "\x1F" "", _ctx)
  _x_x1258 = kk_string_dup(_s_x1259, _ctx); /*string*/
  kk_string_t _x_x1260 = kk_string_empty(); /*string*/
  _match_x603 = kk_string_is_eq(_x_x1258,_x_x1260,kk_context()); /*bool*/
  if (_match_x603) {
    kk_std_core_types__list _b_x362_370;
    kk_string_t _x_x1262 = kk_string_unbox(_b_x381); /*string*/
    _b_x362_370 = kk_std_core_string_list(_x_x1262, _ctx); /*list<char>*/
    kk_function_t _brw_x604 = kk_sqlite_new_hc__sqlite__query__p_fun1263(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x605 = kk_std_core_list_map(_b_x362_370, _brw_x604, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x604, _ctx);
    x_5_10256 = _brw_x605; /*list<string>*/
  }
  else {
    kk_box_t _x_x1266;
    kk_box_t _x_x1271;
    kk_string_t _x_x1272;
    kk_define_string_literal(static, _s_x1273, 1, "" "\x1F" "", _ctx)
    _x_x1272 = kk_string_dup(_s_x1273, _ctx); /*string*/
    _x_x1271 = kk_string_box(_x_x1272); /*10001*/
    _x_x1266 = kk_std_core_hnd__open_none2(kk_sqlite_new_hc__sqlite__query__p_fun1267(_ctx), _b_x381, _x_x1271, _ctx); /*10002*/
    x_5_10256 = kk_std_core_types__list_unbox(_x_x1266, KK_OWNED, _ctx); /*list<string>*/
  }
  kk_sqlite__row _x_x1274;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_5_10256, _ctx);
    kk_box_t _x_x1275 = kk_std_core_hnd_yield_extend(kk_sqlite_new_hc__sqlite__query__p_fun1276(_ctx), _ctx); /*10001*/
    _x_x1274 = kk_sqlite__row_unbox(_x_x1275, KK_OWNED, _ctx); /*sqlite/row*/
  }
  else {
    _x_x1274 = kk_sqlite__new_Row(x_5_10256, _ctx); /*sqlite/row*/
  }
  return kk_sqlite__row_box(_x_x1274, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__query__p_fun1280__t {
  struct kk_function_s _base;
  kk_std_core_types__list x_3_10250;
};
static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1280(kk_function_t _fself, kk_box_t _b_x388, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__query__p_fun1280(kk_std_core_types__list x_3_10250, kk_context_t* _ctx) {
  struct kk_sqlite_hc__sqlite__query__p_fun1280__t* _self = kk_function_alloc_as(struct kk_sqlite_hc__sqlite__query__p_fun1280__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_sqlite_hc__sqlite__query__p_fun1280, kk_context());
  _self->x_3_10250 = x_3_10250;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__query__p_fun1280(kk_function_t _fself, kk_box_t _b_x388, kk_context_t* _ctx) {
  struct kk_sqlite_hc__sqlite__query__p_fun1280__t* _self = kk_function_as(struct kk_sqlite_hc__sqlite__query__p_fun1280__t*, _fself, _ctx);
  kk_std_core_types__list x_3_10250 = _self->x_3_10250; /* list<string> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(x_3_10250, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10113_402 = kk_std_core_types__list_unbox(_b_x388, KK_OWNED, _ctx); /*list<sqlite/row>*/;
  kk_sqlite__queryresult _b_x386_398 = kk_sqlite__new_Queryresult(kk_reuse_null, 0, x_3_10250, _y_x10113_402, _ctx); /*sqlite/queryresult*/;
  kk_std_core_types__either _x_x1281 = kk_std_core_types__new_Right(kk_sqlite__queryresult_box(_b_x386_398, _ctx), _ctx); /*either<10014,10015>*/
  return kk_std_core_types__either_box(_x_x1281, _ctx);
}

kk_std_core_types__either kk_sqlite_hc__sqlite__query__p(kk_sqlite__db d, kk_string_t sql, kk_std_core_types__list params, kk_context_t* _ctx) { /* (d : db, sql : string, params : list<string>) -> io either<string,queryresult> */ 
  kk_string_t x_10238;
  kk_integer_t _x_x1186;
  kk_box_t _x_x1187;
  kk_box_t _x_x1190;
  kk_sqlite__db _x_x1191 = kk_sqlite__db_dup(d, _ctx); /*sqlite/db*/
  _x_x1190 = kk_sqlite__db_box(_x_x1191, _ctx); /*10000*/
  _x_x1187 = kk_std_core_hnd__open_none1(kk_sqlite_new_hc__sqlite__query__p_fun1188(_ctx), _x_x1190, _ctx); /*10001*/
  _x_x1186 = kk_integer_unbox(_x_x1187, _ctx); /*int*/
  kk_string_t _x_x1192;
  kk_string_t _x_x1193;
  kk_define_string_literal(static, _s_x1194, 1, "" "\x1F" "", _ctx)
  _x_x1193 = kk_string_dup(_s_x1194, _ctx); /*string*/
  _x_x1192 = kk_std_core_list_joinsep(params, _x_x1193, _ctx); /*string*/
  x_10238 = kk_sqlite__ffi_sqlite__query__p__raw(_x_x1186, sql, _x_x1192, _ctx); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10238, _ctx);
    kk_box_t _x_x1195 = kk_std_core_hnd_yield_extend(kk_sqlite_new_hc__sqlite__query__p_fun1196(d, _ctx), _ctx); /*10001*/
    return kk_std_core_types__either_unbox(_x_x1195, KK_OWNED, _ctx);
  }
  {
    bool _match_x597;
    kk_string_t _x_x1198 = kk_string_dup(x_10238, _ctx); /*string*/
    kk_string_t _x_x1199 = kk_string_empty(); /*string*/
    _match_x597 = kk_string_is_eq(_x_x1198,_x_x1199,kk_context()); /*bool*/
    if (_match_x597) {
      kk_string_drop(x_10238, _ctx);
      kk_string_t x_0_10241;
      kk_integer_t _x_x1201;
      kk_box_t _x_x1202 = kk_std_core_hnd__open_none1(kk_sqlite_new_hc__sqlite__query__p_fun1203(_ctx), kk_sqlite__db_box(d, _ctx), _ctx); /*10001*/
      _x_x1201 = kk_integer_unbox(_x_x1202, _ctx); /*int*/
      x_0_10241 = kk_sqlite__ffi_sqlite__errmsg__raw(_x_x1201, _ctx); /*string*/
      if (kk_yielding(kk_context())) {
        kk_string_drop(x_0_10241, _ctx);
        kk_box_t _x_x1205 = kk_std_core_hnd_yield_extend(kk_sqlite_new_hc__sqlite__query__p_fun1206(_ctx), _ctx); /*10001*/
        return kk_std_core_types__either_unbox(_x_x1205, KK_OWNED, _ctx);
      }
      {
        return kk_std_core_types__new_Left(kk_string_box(x_0_10241), _ctx);
      }
    }
    {
      kk_sqlite__db_drop(d, _ctx);
      kk_std_core_types__list x_1_10244;
      bool _match_x611;
      kk_string_t _x_x1209;
      kk_define_string_literal(static, _s_x1210, 1, "" "\x1E" "", _ctx)
      _x_x1209 = kk_string_dup(_s_x1210, _ctx); /*string*/
      kk_string_t _x_x1211 = kk_string_empty(); /*string*/
      _match_x611 = kk_string_is_eq(_x_x1209,_x_x1211,kk_context()); /*bool*/
      if (_match_x611) {
        kk_std_core_types__list _b_x318_326 = kk_std_core_string_list(x_10238, _ctx); /*list<char>*/;
        kk_function_t _brw_x612 = kk_sqlite_new_hc__sqlite__query__p_fun1213(_ctx); /*(10001) -> 10003 10002*/;
        kk_std_core_types__list _brw_x613 = kk_std_core_list_map(_b_x318_326, _brw_x612, _ctx); /*list<10002>*/;
        kk_function_drop(_brw_x612, _ctx);
        x_1_10244 = _brw_x613; /*list<string>*/
      }
      else {
        kk_box_t _x_x1216;
        kk_box_t _x_x1221;
        kk_string_t _x_x1222;
        kk_define_string_literal(static, _s_x1223, 1, "" "\x1E" "", _ctx)
        _x_x1222 = kk_string_dup(_s_x1223, _ctx); /*string*/
        _x_x1221 = kk_string_box(_x_x1222); /*10001*/
        _x_x1216 = kk_std_core_hnd__open_none2(kk_sqlite_new_hc__sqlite__query__p_fun1217(_ctx), kk_string_box(x_10238), _x_x1221, _ctx); /*10002*/
        x_1_10244 = kk_std_core_types__list_unbox(_x_x1216, KK_OWNED, _ctx); /*list<string>*/
      }
      if (kk_yielding(kk_context())) {
        kk_std_core_types__list_drop(x_1_10244, _ctx);
        kk_box_t _x_x1224 = kk_std_core_hnd_yield_extend(kk_sqlite_new_hc__sqlite__query__p_fun1225(_ctx), _ctx); /*10001*/
        return kk_std_core_types__either_unbox(_x_x1224, KK_OWNED, _ctx);
      }
      {
        kk_std_core_types__list x_2_10247 = kk_std_core_list_filter(x_1_10244, kk_sqlite_new_hc__sqlite__query__p_fun1228(_ctx), _ctx); /*list<string>*/;
        if (kk_yielding(kk_context())) {
          kk_std_core_types__list_drop(x_2_10247, _ctx);
          kk_box_t _x_x1232 = kk_std_core_hnd_yield_extend(kk_sqlite_new_hc__sqlite__query__p_fun1233(_ctx), _ctx); /*10001*/
          return kk_std_core_types__either_unbox(_x_x1232, KK_OWNED, _ctx);
        }
        if (kk_std_core_types__is_Nil(x_2_10247, _ctx)) {
          kk_box_t _x_x1236;
          kk_sqlite__queryresult _x_x1237 = kk_sqlite__new_Queryresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*sqlite/queryresult*/
          _x_x1236 = kk_sqlite__queryresult_box(_x_x1237, _ctx); /*10015*/
          return kk_std_core_types__new_Right(_x_x1236, _ctx);
        }
        {
          struct kk_std_core_types_Cons* _con_x1238 = kk_std_core_types__as_Cons(x_2_10247, _ctx);
          kk_box_t _box_x344 = _con_x1238->head;
          kk_std_core_types__list data__rows = _con_x1238->tail;
          kk_string_t header = kk_string_unbox(_box_x344);
          kk_reuse_t _ru_x767 = kk_reuse_null; /*@reuse*/;
          if kk_likely(kk_datatype_ptr_is_unique(x_2_10247, _ctx)) {
            _ru_x767 = (kk_datatype_ptr_reuse(x_2_10247, _ctx));
          }
          else {
            kk_std_core_types__list_dup(data__rows, _ctx);
            kk_string_dup(header, _ctx);
            kk_datatype_ptr_decref(x_2_10247, _ctx);
          }
          kk_std_core_types__list x_3_10250;
          bool _match_x608;
          kk_string_t _x_x1239;
          kk_define_string_literal(static, _s_x1240, 1, "" "\x1F" "", _ctx)
          _x_x1239 = kk_string_dup(_s_x1240, _ctx); /*string*/
          kk_string_t _x_x1241 = kk_string_empty(); /*string*/
          _match_x608 = kk_string_is_eq(_x_x1239,_x_x1241,kk_context()); /*bool*/
          if (_match_x608) {
            kk_std_core_types__list _b_x345_353 = kk_std_core_string_list(header, _ctx); /*list<char>*/;
            kk_function_t _brw_x609 = kk_sqlite_new_hc__sqlite__query__p_fun1243(_ctx); /*(10001) -> 10003 10002*/;
            kk_std_core_types__list _brw_x610 = kk_std_core_list_map(_b_x345_353, _brw_x609, _ctx); /*list<10002>*/;
            kk_function_drop(_brw_x609, _ctx);
            x_3_10250 = _brw_x610; /*list<string>*/
          }
          else {
            kk_box_t _x_x1246;
            kk_box_t _x_x1251;
            kk_string_t _x_x1252;
            kk_define_string_literal(static, _s_x1253, 1, "" "\x1F" "", _ctx)
            _x_x1252 = kk_string_dup(_s_x1253, _ctx); /*string*/
            _x_x1251 = kk_string_box(_x_x1252); /*10001*/
            _x_x1246 = kk_std_core_hnd__open_none2(kk_sqlite_new_hc__sqlite__query__p_fun1247(_ctx), kk_string_box(header), _x_x1251, _ctx); /*10002*/
            x_3_10250 = kk_std_core_types__list_unbox(_x_x1246, KK_OWNED, _ctx); /*list<string>*/
          }
          if (kk_yielding(kk_context())) {
            kk_reuse_drop(_ru_x767,kk_context());
            kk_std_core_types__list_drop(x_3_10250, _ctx);
            kk_box_t _x_x1254 = kk_std_core_hnd_yield_extend(kk_sqlite_new_hc__sqlite__query__p_fun1255(data__rows, _ctx), _ctx); /*10001*/
            return kk_std_core_types__either_unbox(_x_x1254, KK_OWNED, _ctx);
          }
          {
            kk_std_core_types__list x_4_10253;
            kk_function_t _brw_x606 = kk_sqlite_new_hc__sqlite__query__p_fun1257(_ctx); /*(10001) -> 10003 10002*/;
            kk_std_core_types__list _brw_x607 = kk_std_core_list_map(data__rows, _brw_x606, _ctx); /*list<10002>*/;
            kk_function_drop(_brw_x606, _ctx);
            x_4_10253 = _brw_x607; /*list<sqlite/row>*/
            if (kk_yielding(kk_context())) {
              kk_reuse_drop(_ru_x767,kk_context());
              kk_std_core_types__list_drop(x_4_10253, _ctx);
              kk_box_t _x_x1279 = kk_std_core_hnd_yield_extend(kk_sqlite_new_hc__sqlite__query__p_fun1280(x_3_10250, _ctx), _ctx); /*10001*/
              return kk_std_core_types__either_unbox(_x_x1279, KK_OWNED, _ctx);
            }
            {
              kk_box_t _x_x1282;
              kk_sqlite__queryresult _x_x1283 = kk_sqlite__new_Queryresult(_ru_x767, 0, x_3_10250, x_4_10253, _ctx); /*sqlite/queryresult*/
              _x_x1282 = kk_sqlite__queryresult_box(_x_x1283, _ctx); /*10015*/
              return kk_std_core_types__new_Right(_x_x1282, _ctx);
            }
          }
        }
      }
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_sqlite__mlift_hc__sqlite__query__one_10188_fun1286__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite__mlift_hc__sqlite__query__one_10188_fun1286(kk_function_t _fself, kk_box_t _b_x408, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__sqlite__query__one_10188_fun1286(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite__mlift_hc__sqlite__query__one_10188_fun1286, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite__mlift_hc__sqlite__query__one_10188_fun1286(kk_function_t _fself, kk_box_t _b_x408, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x1287;
  kk_sqlite__queryresult _match_x595 = kk_sqlite__queryresult_unbox(_b_x408, KK_OWNED, _ctx); /*sqlite/queryresult*/;
  {
    struct kk_sqlite_Queryresult* _con_x1288 = kk_sqlite__as_Queryresult(_match_x595, _ctx);
    kk_std_core_types__list _pat_0_1 = _con_x1288->columns;
    kk_std_core_types__list _x = _con_x1288->rows;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x595, _ctx)) {
      kk_std_core_types__list_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(_match_x595, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x595, _ctx);
    }
    _x_x1287 = _x; /*list<sqlite/row>*/
  }
  return kk_std_core_types__list_box(_x_x1287, _ctx);
}


// lift anonymous function
struct kk_sqlite__mlift_hc__sqlite__query__one_10188_fun1290__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite__mlift_hc__sqlite__query__one_10188_fun1290(kk_function_t _fself, kk_box_t _b_x416, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__sqlite__query__one_10188_fun1290(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite__mlift_hc__sqlite__query__one_10188_fun1290, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite__mlift_hc__sqlite__query__one_10188_fun1290(kk_function_t _fself, kk_box_t _b_x416, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list xs_423 = kk_std_core_types__list_unbox(_b_x416, KK_OWNED, _ctx); /*list<sqlite/row>*/;
  kk_std_core_types__maybe _x_x1291;
  if (kk_std_core_types__is_Cons(xs_423, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1292 = kk_std_core_types__as_Cons(xs_423, _ctx);
    kk_box_t _box_x412 = _con_x1292->head;
    kk_std_core_types__list _pat_0_0 = _con_x1292->tail;
    kk_sqlite__row x = kk_sqlite__row_unbox(_box_x412, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(xs_423, _ctx)) {
      kk_std_core_types__list_drop(_pat_0_0, _ctx);
      kk_sqlite__row_dup(x, _ctx);
      kk_box_drop(_box_x412, _ctx);
      kk_datatype_ptr_free(xs_423, _ctx);
    }
    else {
      kk_sqlite__row_dup(x, _ctx);
      kk_datatype_ptr_decref(xs_423, _ctx);
    }
    _x_x1291 = kk_std_core_types__new_Just(kk_sqlite__row_box(x, _ctx), _ctx); /*maybe<10024>*/
  }
  else {
    _x_x1291 = kk_std_core_types__new_Nothing(_ctx); /*maybe<10024>*/
  }
  return kk_std_core_types__maybe_box(_x_x1291, _ctx);
}

kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__query__one_10188(kk_std_core_types__either _y_x10117, kk_context_t* _ctx) { /* (either<string,queryresult>) -> io either<string,maybe<row>> */ 
  if (kk_std_core_types__is_Left(_y_x10117, _ctx)) {
    kk_box_t _box_x403 = _y_x10117._cons.Left.left;
    kk_string_t e = kk_string_unbox(_box_x403);
    kk_string_dup(e, _ctx);
    kk_std_core_types__either_drop(_y_x10117, _ctx);
    return kk_std_core_types__new_Left(kk_string_box(e), _ctx);
  }
  {
    kk_box_t _box_x405 = _y_x10117._cons.Right.right;
    kk_sqlite__queryresult r = kk_sqlite__queryresult_unbox(_box_x405, KK_BORROWED, _ctx);
    struct kk_sqlite_Queryresult* _con_x1284 = kk_sqlite__as_Queryresult(r, _ctx);
    kk_sqlite__queryresult_dup(r, _ctx);
    kk_std_core_types__either_drop(_y_x10117, _ctx);
    kk_std_core_types__list _x_x1_10165;
    kk_box_t _x_x1285 = kk_std_core_hnd__open_none1(kk_sqlite__new_mlift_hc__sqlite__query__one_10188_fun1286(_ctx), kk_sqlite__queryresult_box(r, _ctx), _ctx); /*10001*/
    _x_x1_10165 = kk_std_core_types__list_unbox(_x_x1285, KK_OWNED, _ctx); /*list<sqlite/row>*/
    kk_std_core_types__maybe _b_x417_419;
    kk_box_t _x_x1289 = kk_std_core_hnd__open_none1(kk_sqlite__new_mlift_hc__sqlite__query__one_10188_fun1290(_ctx), kk_std_core_types__list_box(_x_x1_10165, _ctx), _ctx); /*10001*/
    _b_x417_419 = kk_std_core_types__maybe_unbox(_x_x1289, KK_OWNED, _ctx); /*maybe<sqlite/row>*/
    return kk_std_core_types__new_Right(kk_std_core_types__maybe_box(_b_x417_419, _ctx), _ctx);
  }
}
 
// .hc:94


// lift anonymous function
struct kk_sqlite_hc__sqlite__query__one_fun1294__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__query__one_fun1294(kk_function_t _fself, kk_box_t _b_x425, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__query__one_fun1294(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__query__one_fun1294, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__query__one_fun1294(kk_function_t _fself, kk_box_t _b_x425, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__either _x_x1295;
  kk_std_core_types__either _x_x1296 = kk_std_core_types__either_unbox(_b_x425, KK_OWNED, _ctx); /*either<string,sqlite/queryresult>*/
  _x_x1295 = kk_sqlite__mlift_hc__sqlite__query__one_10188(_x_x1296, _ctx); /*either<string,maybe<sqlite/row>>*/
  return kk_std_core_types__either_box(_x_x1295, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__query__one_fun1299__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__query__one_fun1299(kk_function_t _fself, kk_box_t _b_x431, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__query__one_fun1299(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__query__one_fun1299, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__query__one_fun1299(kk_function_t _fself, kk_box_t _b_x431, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x1300;
  kk_sqlite__queryresult _match_x594 = kk_sqlite__queryresult_unbox(_b_x431, KK_OWNED, _ctx); /*sqlite/queryresult*/;
  {
    struct kk_sqlite_Queryresult* _con_x1301 = kk_sqlite__as_Queryresult(_match_x594, _ctx);
    kk_std_core_types__list _pat_0_1 = _con_x1301->columns;
    kk_std_core_types__list _x = _con_x1301->rows;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x594, _ctx)) {
      kk_std_core_types__list_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(_match_x594, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x594, _ctx);
    }
    _x_x1300 = _x; /*list<sqlite/row>*/
  }
  return kk_std_core_types__list_box(_x_x1300, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__query__one_fun1303__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__query__one_fun1303(kk_function_t _fself, kk_box_t _b_x439, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__query__one_fun1303(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__query__one_fun1303, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__query__one_fun1303(kk_function_t _fself, kk_box_t _b_x439, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list xs_447 = kk_std_core_types__list_unbox(_b_x439, KK_OWNED, _ctx); /*list<sqlite/row>*/;
  kk_std_core_types__maybe _x_x1304;
  if (kk_std_core_types__is_Cons(xs_447, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1305 = kk_std_core_types__as_Cons(xs_447, _ctx);
    kk_box_t _box_x435 = _con_x1305->head;
    kk_std_core_types__list _pat_0_0_0 = _con_x1305->tail;
    kk_sqlite__row x_0 = kk_sqlite__row_unbox(_box_x435, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(xs_447, _ctx)) {
      kk_std_core_types__list_drop(_pat_0_0_0, _ctx);
      kk_sqlite__row_dup(x_0, _ctx);
      kk_box_drop(_box_x435, _ctx);
      kk_datatype_ptr_free(xs_447, _ctx);
    }
    else {
      kk_sqlite__row_dup(x_0, _ctx);
      kk_datatype_ptr_decref(xs_447, _ctx);
    }
    _x_x1304 = kk_std_core_types__new_Just(kk_sqlite__row_box(x_0, _ctx), _ctx); /*maybe<10024>*/
  }
  else {
    _x_x1304 = kk_std_core_types__new_Nothing(_ctx); /*maybe<10024>*/
  }
  return kk_std_core_types__maybe_box(_x_x1304, _ctx);
}

kk_std_core_types__either kk_sqlite_hc__sqlite__query__one(kk_sqlite__db d, kk_string_t sql, kk_std_core_types__list params, kk_context_t* _ctx) { /* (d : db, sql : string, params : list<string>) -> io either<string,maybe<row>> */ 
  kk_std_core_types__either x_10260 = kk_sqlite_hc__sqlite__query__p(d, sql, params, _ctx); /*either<string,sqlite/queryresult>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__either_drop(x_10260, _ctx);
    kk_box_t _x_x1293 = kk_std_core_hnd_yield_extend(kk_sqlite_new_hc__sqlite__query__one_fun1294(_ctx), _ctx); /*10001*/
    return kk_std_core_types__either_unbox(_x_x1293, KK_OWNED, _ctx);
  }
  if (kk_std_core_types__is_Left(x_10260, _ctx)) {
    kk_box_t _box_x426 = x_10260._cons.Left.left;
    kk_string_t e = kk_string_unbox(_box_x426);
    kk_string_dup(e, _ctx);
    kk_std_core_types__either_drop(x_10260, _ctx);
    return kk_std_core_types__new_Left(kk_string_box(e), _ctx);
  }
  {
    kk_box_t _box_x428 = x_10260._cons.Right.right;
    kk_sqlite__queryresult r = kk_sqlite__queryresult_unbox(_box_x428, KK_BORROWED, _ctx);
    struct kk_sqlite_Queryresult* _con_x1297 = kk_sqlite__as_Queryresult(r, _ctx);
    kk_sqlite__queryresult_dup(r, _ctx);
    kk_std_core_types__either_drop(x_10260, _ctx);
    kk_std_core_types__list _x_x1_10165;
    kk_box_t _x_x1298 = kk_std_core_hnd__open_none1(kk_sqlite_new_hc__sqlite__query__one_fun1299(_ctx), kk_sqlite__queryresult_box(r, _ctx), _ctx); /*10001*/
    _x_x1_10165 = kk_std_core_types__list_unbox(_x_x1298, KK_OWNED, _ctx); /*list<sqlite/row>*/
    kk_std_core_types__maybe _b_x440_443;
    kk_box_t _x_x1302 = kk_std_core_hnd__open_none1(kk_sqlite_new_hc__sqlite__query__one_fun1303(_ctx), kk_std_core_types__list_box(_x_x1_10165, _ctx), _ctx); /*10001*/
    _b_x440_443 = kk_std_core_types__maybe_unbox(_x_x1302, KK_OWNED, _ctx); /*maybe<sqlite/row>*/
    return kk_std_core_types__new_Right(kk_std_core_types__maybe_box(_b_x440_443, _ctx), _ctx);
  }
}
 
// .hc:105


// lift anonymous function
struct kk_sqlite_hc__sqlite__last__insert__id_fun1308__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__last__insert__id_fun1308(kk_function_t _fself, kk_box_t _b_x450, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__last__insert__id_fun1308(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__last__insert__id_fun1308, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__last__insert__id_fun1308(kk_function_t _fself, kk_box_t _b_x450, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x1309;
  kk_sqlite__db db_453 = kk_sqlite__db_unbox(_b_x450, KK_OWNED, _ctx); /*sqlite/db*/;
  {
    kk_integer_t _x = db_453.h;
    _x_x1309 = _x; /*int*/
  }
  return kk_integer_box(_x_x1309, _ctx);
}

kk_integer_t kk_sqlite_hc__sqlite__last__insert__id(kk_sqlite__db d, kk_context_t* _ctx) { /* (d : db) -> io int */ 
  kk_integer_t _x_x1306;
  kk_box_t _x_x1307 = kk_std_core_hnd__open_none1(kk_sqlite_new_hc__sqlite__last__insert__id_fun1308(_ctx), kk_sqlite__db_box(d, _ctx), _ctx); /*10001*/
  _x_x1306 = kk_integer_unbox(_x_x1307, _ctx); /*int*/
  return kk_sqlite__ffi_sqlite__last__insert__id__raw(_x_x1306, _ctx);
}
 
// .hc:109


// lift anonymous function
struct kk_sqlite_hc__sqlite__changes_fun1312__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__changes_fun1312(kk_function_t _fself, kk_box_t _b_x456, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__changes_fun1312(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__changes_fun1312, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__changes_fun1312(kk_function_t _fself, kk_box_t _b_x456, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x1313;
  kk_sqlite__db db_459 = kk_sqlite__db_unbox(_b_x456, KK_OWNED, _ctx); /*sqlite/db*/;
  {
    kk_integer_t _x = db_459.h;
    _x_x1313 = _x; /*int*/
  }
  return kk_integer_box(_x_x1313, _ctx);
}

kk_integer_t kk_sqlite_hc__sqlite__changes(kk_sqlite__db d, kk_context_t* _ctx) { /* (d : db) -> io int */ 
  kk_integer_t _x_x1310;
  kk_box_t _x_x1311 = kk_std_core_hnd__open_none1(kk_sqlite_new_hc__sqlite__changes_fun1312(_ctx), kk_sqlite__db_box(d, _ctx), _ctx); /*10001*/
  _x_x1310 = kk_integer_unbox(_x_x1311, _ctx); /*int*/
  return kk_sqlite__ffi_sqlite__changes__raw(_x_x1310, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_sqlite__mlift_hc__sqlite__table__exists_10189_fun1316__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite__mlift_hc__sqlite__table__exists_10189_fun1316(kk_function_t _fself, kk_box_t _b_x465, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__sqlite__table__exists_10189_fun1316(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite__mlift_hc__sqlite__table__exists_10189_fun1316, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite__mlift_hc__sqlite__table__exists_10189_fun1316(kk_function_t _fself, kk_box_t _b_x465, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x1317;
  kk_sqlite__queryresult _match_x592 = kk_sqlite__queryresult_unbox(_b_x465, KK_OWNED, _ctx); /*sqlite/queryresult*/;
  {
    struct kk_sqlite_Queryresult* _con_x1318 = kk_sqlite__as_Queryresult(_match_x592, _ctx);
    kk_std_core_types__list _pat_0_0 = _con_x1318->columns;
    kk_std_core_types__list _x = _con_x1318->rows;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x592, _ctx)) {
      kk_std_core_types__list_drop(_pat_0_0, _ctx);
      kk_datatype_ptr_free(_match_x592, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x592, _ctx);
    }
    _x_x1317 = _x; /*list<sqlite/row>*/
  }
  return kk_std_core_types__list_box(_x_x1317, _ctx);
}

kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__table__exists_10189(kk_std_core_types__either _y_x10121, kk_context_t* _ctx) { /* (either<string,queryresult>) -> io either<string,bool> */ 
  if (kk_std_core_types__is_Left(_y_x10121, _ctx)) {
    kk_box_t _box_x460 = _y_x10121._cons.Left.left;
    kk_string_t e = kk_string_unbox(_box_x460);
    kk_string_dup(e, _ctx);
    kk_std_core_types__either_drop(_y_x10121, _ctx);
    return kk_std_core_types__new_Left(kk_string_box(e), _ctx);
  }
  {
    kk_box_t _box_x462 = _y_x10121._cons.Right.right;
    kk_sqlite__queryresult r = kk_sqlite__queryresult_unbox(_box_x462, KK_BORROWED, _ctx);
    struct kk_sqlite_Queryresult* _con_x1314 = kk_sqlite__as_Queryresult(r, _ctx);
    kk_sqlite__queryresult_dup(r, _ctx);
    kk_std_core_types__either_drop(_y_x10121, _ctx);
    kk_std_core_types__list xs_10146;
    kk_box_t _x_x1315 = kk_std_core_hnd__open_none1(kk_sqlite__new_mlift_hc__sqlite__table__exists_10189_fun1316(_ctx), kk_sqlite__queryresult_box(r, _ctx), _ctx); /*10001*/
    xs_10146 = kk_std_core_types__list_unbox(_x_x1315, KK_OWNED, _ctx); /*list<sqlite/row>*/
    bool _b_x469_471;
    kk_integer_t _brw_x590 = kk_std_core_list__lift_length_6003(xs_10146, kk_integer_from_small(0), _ctx); /*int*/;
    bool _brw_x591 = kk_integer_gt_borrow(_brw_x590,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(_brw_x590, _ctx);
    _b_x469_471 = _brw_x591; /*bool*/
    return kk_std_core_types__new_Right(kk_bool_box(_b_x469_471), _ctx);
  }
}
 
// .hc:114


// lift anonymous function
struct kk_sqlite_hc__sqlite__table__exists_fun1323__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__table__exists_fun1323(kk_function_t _fself, kk_box_t _b_x477, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__table__exists_fun1323(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__table__exists_fun1323, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__table__exists_fun1323(kk_function_t _fself, kk_box_t _b_x477, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__either _x_x1324;
  kk_std_core_types__either _x_x1325 = kk_std_core_types__either_unbox(_b_x477, KK_OWNED, _ctx); /*either<string,sqlite/queryresult>*/
  _x_x1324 = kk_sqlite__mlift_hc__sqlite__table__exists_10189(_x_x1325, _ctx); /*either<string,bool>*/
  return kk_std_core_types__either_box(_x_x1324, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__sqlite__table__exists_fun1328__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__sqlite__table__exists_fun1328(kk_function_t _fself, kk_box_t _b_x483, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__sqlite__table__exists_fun1328(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__sqlite__table__exists_fun1328, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__sqlite__table__exists_fun1328(kk_function_t _fself, kk_box_t _b_x483, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x1329;
  kk_sqlite__queryresult _match_x589 = kk_sqlite__queryresult_unbox(_b_x483, KK_OWNED, _ctx); /*sqlite/queryresult*/;
  {
    struct kk_sqlite_Queryresult* _con_x1330 = kk_sqlite__as_Queryresult(_match_x589, _ctx);
    kk_std_core_types__list _pat_0_0_0 = _con_x1330->columns;
    kk_std_core_types__list _x = _con_x1330->rows;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x589, _ctx)) {
      kk_std_core_types__list_drop(_pat_0_0_0, _ctx);
      kk_datatype_ptr_free(_match_x589, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x589, _ctx);
    }
    _x_x1329 = _x; /*list<sqlite/row>*/
  }
  return kk_std_core_types__list_box(_x_x1329, _ctx);
}

kk_std_core_types__either kk_sqlite_hc__sqlite__table__exists(kk_sqlite__db d, kk_string_t name, kk_context_t* _ctx) { /* (d : db, name : string) -> io either<string,bool> */ 
  kk_std_core_types__either x_10263;
  kk_string_t _x_x1319;
  kk_define_string_literal(static, _s_x1320, 57, "SELECT 1 FROM sqlite_master WHERE type=\'table\' AND name=\?", _ctx)
  _x_x1319 = kk_string_dup(_s_x1320, _ctx); /*string*/
  kk_std_core_types__list _x_x1321 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(name), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  x_10263 = kk_sqlite_hc__sqlite__query__p(d, _x_x1319, _x_x1321, _ctx); /*either<string,sqlite/queryresult>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__either_drop(x_10263, _ctx);
    kk_box_t _x_x1322 = kk_std_core_hnd_yield_extend(kk_sqlite_new_hc__sqlite__table__exists_fun1323(_ctx), _ctx); /*10001*/
    return kk_std_core_types__either_unbox(_x_x1322, KK_OWNED, _ctx);
  }
  if (kk_std_core_types__is_Left(x_10263, _ctx)) {
    kk_box_t _box_x478 = x_10263._cons.Left.left;
    kk_string_t e = kk_string_unbox(_box_x478);
    kk_string_dup(e, _ctx);
    kk_std_core_types__either_drop(x_10263, _ctx);
    return kk_std_core_types__new_Left(kk_string_box(e), _ctx);
  }
  {
    kk_box_t _box_x480 = x_10263._cons.Right.right;
    kk_sqlite__queryresult r = kk_sqlite__queryresult_unbox(_box_x480, KK_BORROWED, _ctx);
    struct kk_sqlite_Queryresult* _con_x1326 = kk_sqlite__as_Queryresult(r, _ctx);
    kk_sqlite__queryresult_dup(r, _ctx);
    kk_std_core_types__either_drop(x_10263, _ctx);
    kk_std_core_types__list xs_10146;
    kk_box_t _x_x1327 = kk_std_core_hnd__open_none1(kk_sqlite_new_hc__sqlite__table__exists_fun1328(_ctx), kk_sqlite__queryresult_box(r, _ctx), _ctx); /*10001*/
    xs_10146 = kk_std_core_types__list_unbox(_x_x1327, KK_OWNED, _ctx); /*list<sqlite/row>*/
    bool _b_x487_490;
    kk_integer_t _brw_x587 = kk_std_core_list__lift_length_6003(xs_10146, kk_integer_from_small(0), _ctx); /*int*/;
    bool _brw_x588 = kk_integer_gt_borrow(_brw_x587,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(_brw_x587, _ctx);
    _b_x487_490 = _brw_x588; /*bool*/
    return kk_std_core_types__new_Right(kk_bool_box(_b_x487_490), _ctx);
  }
}
 
// .hc:127

kk_std_core_types__maybe kk_sqlite_hc__row__str(kk_sqlite__row r, kk_integer_t idx, kk_context_t* _ctx) { /* (r : row, idx : int) -> maybe<string> */ 
  bool _match_x585 = kk_integer_lt_borrow(idx,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x585) {
    kk_sqlite__row_drop(r, _ctx);
    kk_integer_drop(idx, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
  {
    kk_std_core_types__list xs_10075;
    kk_std_core_types__list _x_x1331;
    {
      kk_std_core_types__list _x = r.values;
      _x_x1331 = _x; /*list<string>*/
    }
    xs_10075 = kk_std_core_list_drop(_x_x1331, idx, _ctx); /*list<string>*/
    if (kk_std_core_types__is_Cons(xs_10075, _ctx)) {
      struct kk_std_core_types_Cons* _con_x1332 = kk_std_core_types__as_Cons(xs_10075, _ctx);
      kk_box_t _box_x491 = _con_x1332->head;
      kk_std_core_types__list _pat_0_0 = _con_x1332->tail;
      kk_string_t x = kk_string_unbox(_box_x491);
      if kk_likely(kk_datatype_ptr_is_unique(xs_10075, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(xs_10075, _ctx);
      }
      else {
        kk_string_dup(x, _ctx);
        kk_datatype_ptr_decref(xs_10075, _ctx);
      }
      return kk_std_core_types__new_Just(kk_string_box(x), _ctx);
    }
    {
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
}
 
// .hc:131

kk_std_core_types__maybe kk_sqlite_hc__row__int(kk_sqlite__row r, kk_integer_t idx, kk_context_t* _ctx) { /* (r : row, idx : int) -> maybe<int> */ 
  kk_std_core_types__maybe _match_x583 = kk_sqlite_hc__row__str(r, idx, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Nothing(_match_x583, _ctx)) {
    return kk_std_core_types__new_Nothing(_ctx);
  }
  {
    kk_box_t _box_x494 = _match_x583._cons.Just.value;
    kk_string_t s = kk_string_unbox(_box_x494);
    kk_string_dup(s, _ctx);
    kk_std_core_types__maybe_drop(_match_x583, _ctx);
    bool _x_x1333;
    kk_std_core_types__optional _match_x584 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x584, _ctx)) {
      kk_box_t _box_x495 = _match_x584._cons._Optional.value;
      bool _uniq_hex_581 = kk_bool_unbox(_box_x495);
      kk_std_core_types__optional_drop(_match_x584, _ctx);
      _x_x1333 = _uniq_hex_581; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x584, _ctx);
      _x_x1333 = false; /*bool*/
    }
    return kk_std_core_int_xparse(s, _x_x1333, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_sqlite__mlift_hc__with__sqlite_10191_fun1336__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite__mlift_hc__with__sqlite_10191_fun1336(kk_function_t _fself, kk_box_t _b_x504, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__with__sqlite_10191_fun1336(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite__mlift_hc__with__sqlite_10191_fun1336, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_sqlite__mlift_hc__with__sqlite_10191_fun1340__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite__mlift_hc__with__sqlite_10191_fun1340(kk_function_t _fself, kk_box_t _b_x500, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__with__sqlite_10191_fun1340(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite__mlift_hc__with__sqlite_10191_fun1340, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite__mlift_hc__with__sqlite_10191_fun1340(kk_function_t _fself, kk_box_t _b_x500, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x1341;
  kk_sqlite__db _match_x582 = kk_sqlite__db_unbox(_b_x500, KK_OWNED, _ctx); /*sqlite/db*/;
  {
    kk_integer_t _x = _match_x582.h;
    _x_x1341 = _x; /*int*/
  }
  return kk_integer_box(_x_x1341, _ctx);
}
static kk_box_t kk_sqlite__mlift_hc__with__sqlite_10191_fun1336(kk_function_t _fself, kk_box_t _b_x504, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x1337 = kk_Unit;
  kk_integer_t _x_x1338;
  kk_box_t _x_x1339 = kk_std_core_hnd__open_none1(kk_sqlite__new_mlift_hc__with__sqlite_10191_fun1340(_ctx), _b_x504, _ctx); /*10001*/
  _x_x1338 = kk_integer_unbox(_x_x1339, _ctx); /*int*/
  kk_sqlite__ffi_sqlite__close__raw(_x_x1338, _ctx);
  return kk_unit_box(_x_x1337);
}


// lift anonymous function
struct kk_sqlite__mlift_hc__with__sqlite_10191_fun1343__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite__mlift_hc__with__sqlite_10191_fun1343(kk_function_t _fself, kk_box_t _b_x513, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__with__sqlite_10191_fun1343(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite__mlift_hc__with__sqlite_10191_fun1343, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite__mlift_hc__with__sqlite_10191_fun1343(kk_function_t _fself, kk_box_t _b_x513, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___0_519 = kk_Unit;
  kk_unit_unbox(_b_x513);
  bool _b_x511_517 = true; /*bool*/;
  kk_std_core_types__either _x_x1344 = kk_std_core_types__new_Right(kk_bool_box(_b_x511_517), _ctx); /*either<10014,10015>*/
  return kk_std_core_types__either_box(_x_x1344, _ctx);
}

kk_std_core_types__either kk_sqlite__mlift_hc__with__sqlite_10191(kk_sqlite__db d, kk_box_t wild__, kk_context_t* _ctx) { /* forall<a,e> (d : db, wild_ : a) -> <alloc<global>,console/console,div,exn,fsys,ndet,net,read<global>,ui,write<global>|e> either<string,bool> */ 
  kk_box_drop(wild__, _ctx);
  kk_ssize_t _b_x501_505;
  kk_std_core_hnd__htag _x_x1334 = kk_std_core_hnd__htag_dup(kk_std_core_exn_exn_fs__tag, _ctx); /*hnd/htag<exn>*/
  _b_x501_505 = kk_std_core_hnd__evv_index(_x_x1334, _ctx); /*hnd/ev-index*/
  kk_unit_t x_10266 = kk_Unit;
  kk_box_t _x_x1335 = kk_std_core_hnd__open_at1(_b_x501_505, kk_sqlite__new_mlift_hc__with__sqlite_10191_fun1336(_ctx), kk_sqlite__db_box(d, _ctx), _ctx); /*10001*/
  kk_unit_unbox(_x_x1335);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1342 = kk_std_core_hnd_yield_extend(kk_sqlite__new_mlift_hc__with__sqlite_10191_fun1343(_ctx), _ctx); /*10001*/
    return kk_std_core_types__either_unbox(_x_x1342, KK_OWNED, _ctx);
  }
  {
    return kk_std_core_types__new_Right(kk_bool_box(true), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_sqlite__mlift_hc__with__sqlite_10192_fun1347__t {
  struct kk_function_s _base;
  kk_sqlite__db d;
};
static kk_box_t kk_sqlite__mlift_hc__with__sqlite_10192_fun1347(kk_function_t _fself, kk_box_t _b_x524, kk_context_t* _ctx);
static kk_function_t kk_sqlite__new_mlift_hc__with__sqlite_10192_fun1347(kk_sqlite__db d, kk_context_t* _ctx) {
  struct kk_sqlite__mlift_hc__with__sqlite_10192_fun1347__t* _self = kk_function_alloc_as(struct kk_sqlite__mlift_hc__with__sqlite_10192_fun1347__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_sqlite__mlift_hc__with__sqlite_10192_fun1347, kk_context());
  _self->d = d;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_sqlite__mlift_hc__with__sqlite_10192_fun1347(kk_function_t _fself, kk_box_t _b_x524, kk_context_t* _ctx) {
  struct kk_sqlite__mlift_hc__with__sqlite_10192_fun1347__t* _self = kk_function_as(struct kk_sqlite__mlift_hc__with__sqlite_10192_fun1347__t*, _fself, _ctx);
  kk_sqlite__db d = _self->d; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(d, _ctx);}, {}, _ctx)
  kk_box_t wild___527 = _b_x524; /*7430*/;
  kk_std_core_types__either _x_x1348 = kk_sqlite__mlift_hc__with__sqlite_10191(d, wild___527, _ctx); /*either<string,bool>*/
  return kk_std_core_types__either_box(_x_x1348, _ctx);
}

kk_std_core_types__either kk_sqlite__mlift_hc__with__sqlite_10192(kk_function_t f, kk_std_core_types__either _y_x10123, kk_context_t* _ctx) { /* forall<a,e> (f : (db) -> <alloc<global>,console/console,div,exn,fsys,ndet,net,read<global>,ui,write<global>|e> a, either<string,db>) -> <alloc<global>,console/console,div,exn,fsys,ndet,net,read<global>,ui,write<global>|e> either<string,bool> */ 
  if (kk_std_core_types__is_Left(_y_x10123, _ctx)) {
    kk_box_t _box_x520 = _y_x10123._cons.Left.left;
    kk_string_t e = kk_string_unbox(_box_x520);
    kk_function_drop(f, _ctx);
    kk_string_dup(e, _ctx);
    kk_std_core_types__either_drop(_y_x10123, _ctx);
    return kk_std_core_types__new_Left(kk_string_box(e), _ctx);
  }
  {
    kk_box_t _box_x522 = _y_x10123._cons.Right.right;
    kk_sqlite__db d = kk_sqlite__db_unbox(_box_x522, KK_BORROWED, _ctx);
    kk_sqlite__db_dup(d, _ctx);
    kk_std_core_types__either_drop(_y_x10123, _ctx);
    kk_box_t x_10269;
    kk_sqlite__db _x_x1345 = kk_sqlite__db_dup(d, _ctx); /*sqlite/db*/
    x_10269 = kk_function_call(kk_box_t, (kk_function_t, kk_sqlite__db, kk_context_t*), f, (f, _x_x1345, _ctx), _ctx); /*7430*/
    if (kk_yielding(kk_context())) {
      kk_box_drop(x_10269, _ctx);
      kk_box_t _x_x1346 = kk_std_core_hnd_yield_extend(kk_sqlite__new_mlift_hc__with__sqlite_10192_fun1347(d, _ctx), _ctx); /*10001*/
      return kk_std_core_types__either_unbox(_x_x1346, KK_OWNED, _ctx);
    }
    {
      return kk_sqlite__mlift_hc__with__sqlite_10191(d, x_10269, _ctx);
    }
  }
}
 
// .hc:142


// lift anonymous function
struct kk_sqlite_hc__with__sqlite_fun1351__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__with__sqlite_fun1351(kk_function_t _fself, kk_box_t _b_x531, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__with__sqlite_fun1351(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__with__sqlite_fun1351, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__with__sqlite_fun1351(kk_function_t _fself, kk_box_t _b_x531, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__either _x_x1352;
  kk_string_t _x_x1353 = kk_string_unbox(_b_x531); /*string*/
  _x_x1352 = kk_sqlite_hc__sqlite__open(_x_x1353, _ctx); /*either<string,sqlite/db>*/
  return kk_std_core_types__either_box(_x_x1352, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__with__sqlite_fun1355__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_sqlite_hc__with__sqlite_fun1355(kk_function_t _fself, kk_box_t _b_x536, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__with__sqlite_fun1355(kk_function_t f, kk_context_t* _ctx) {
  struct kk_sqlite_hc__with__sqlite_fun1355__t* _self = kk_function_alloc_as(struct kk_sqlite_hc__with__sqlite_fun1355__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_sqlite_hc__with__sqlite_fun1355, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_sqlite_hc__with__sqlite_fun1355(kk_function_t _fself, kk_box_t _b_x536, kk_context_t* _ctx) {
  struct kk_sqlite_hc__with__sqlite_fun1355__t* _self = kk_function_as(struct kk_sqlite_hc__with__sqlite_fun1355__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (sqlite/db) -> <alloc<global>,console/console,div,exn,fsys,ndet,net,read<global>,ui,write<global>|7431> 7430 */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_std_core_types__either _y_x10123_566 = kk_std_core_types__either_unbox(_b_x536, KK_OWNED, _ctx); /*either<string,sqlite/db>*/;
  kk_std_core_types__either _x_x1356 = kk_sqlite__mlift_hc__with__sqlite_10192(f, _y_x10123_566, _ctx); /*either<string,bool>*/
  return kk_std_core_types__either_box(_x_x1356, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__with__sqlite_fun1359__t {
  struct kk_function_s _base;
  kk_sqlite__db d;
};
static kk_box_t kk_sqlite_hc__with__sqlite_fun1359(kk_function_t _fself, kk_box_t _b_x541, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__with__sqlite_fun1359(kk_sqlite__db d, kk_context_t* _ctx) {
  struct kk_sqlite_hc__with__sqlite_fun1359__t* _self = kk_function_alloc_as(struct kk_sqlite_hc__with__sqlite_fun1359__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_sqlite_hc__with__sqlite_fun1359, kk_context());
  _self->d = d;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_sqlite_hc__with__sqlite_fun1359(kk_function_t _fself, kk_box_t _b_x541, kk_context_t* _ctx) {
  struct kk_sqlite_hc__with__sqlite_fun1359__t* _self = kk_function_as(struct kk_sqlite_hc__with__sqlite_fun1359__t*, _fself, _ctx);
  kk_sqlite__db d = _self->d; /* sqlite/db */
  kk_drop_match(_self, {kk_sqlite__db_dup(d, _ctx);}, {}, _ctx)
  kk_box_t wild___567 = _b_x541; /*7430*/;
  kk_std_core_types__either _x_x1360 = kk_sqlite__mlift_hc__with__sqlite_10191(d, wild___567, _ctx); /*either<string,bool>*/
  return kk_std_core_types__either_box(_x_x1360, _ctx);
}


// lift anonymous function
struct kk_sqlite_hc__with__sqlite_fun1363__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__with__sqlite_fun1363(kk_function_t _fself, kk_box_t _b_x548, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__with__sqlite_fun1363(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__with__sqlite_fun1363, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_sqlite_hc__with__sqlite_fun1367__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__with__sqlite_fun1367(kk_function_t _fself, kk_box_t _b_x544, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__with__sqlite_fun1367(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__with__sqlite_fun1367, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__with__sqlite_fun1367(kk_function_t _fself, kk_box_t _b_x544, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x1368;
  kk_sqlite__db _match_x579 = kk_sqlite__db_unbox(_b_x544, KK_OWNED, _ctx); /*sqlite/db*/;
  {
    kk_integer_t _x = _match_x579.h;
    _x_x1368 = _x; /*int*/
  }
  return kk_integer_box(_x_x1368, _ctx);
}
static kk_box_t kk_sqlite_hc__with__sqlite_fun1363(kk_function_t _fself, kk_box_t _b_x548, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x1364 = kk_Unit;
  kk_integer_t _x_x1365;
  kk_box_t _x_x1366 = kk_std_core_hnd__open_none1(kk_sqlite_new_hc__with__sqlite_fun1367(_ctx), _b_x548, _ctx); /*10001*/
  _x_x1365 = kk_integer_unbox(_x_x1366, _ctx); /*int*/
  kk_sqlite__ffi_sqlite__close__raw(_x_x1365, _ctx);
  return kk_unit_box(_x_x1364);
}


// lift anonymous function
struct kk_sqlite_hc__with__sqlite_fun1370__t {
  struct kk_function_s _base;
};
static kk_box_t kk_sqlite_hc__with__sqlite_fun1370(kk_function_t _fself, kk_box_t _b_x557, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__with__sqlite_fun1370(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__with__sqlite_fun1370, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_sqlite_hc__with__sqlite_fun1370(kk_function_t _fself, kk_box_t _b_x557, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___0_568 = kk_Unit;
  kk_unit_unbox(_b_x557);
  bool _b_x555_564 = true; /*bool*/;
  kk_std_core_types__either _x_x1371 = kk_std_core_types__new_Right(kk_bool_box(_b_x555_564), _ctx); /*either<10014,10015>*/
  return kk_std_core_types__either_box(_x_x1371, _ctx);
}

kk_std_core_types__either kk_sqlite_hc__with__sqlite(kk_string_t hc__path, kk_function_t f, kk_context_t* _ctx) { /* forall<a,e> (hc_path : string, f : (db) -> <io|e> a) -> <io|e> either<string,bool> */ 
  kk_ssize_t _b_x528_532;
  kk_std_core_hnd__htag _x_x1349 = kk_std_core_hnd__htag_dup(kk_std_core_exn_exn_fs__tag, _ctx); /*hnd/htag<exn>*/
  _b_x528_532 = kk_std_core_hnd__evv_index(_x_x1349, _ctx); /*hnd/ev-index*/
  kk_std_core_types__either x_10271;
  kk_box_t _x_x1350 = kk_std_core_hnd__open_at1(_b_x528_532, kk_sqlite_new_hc__with__sqlite_fun1351(_ctx), kk_string_box(hc__path), _ctx); /*10001*/
  x_10271 = kk_std_core_types__either_unbox(_x_x1350, KK_OWNED, _ctx); /*either<string,sqlite/db>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__either_drop(x_10271, _ctx);
    kk_box_t _x_x1354 = kk_std_core_hnd_yield_extend(kk_sqlite_new_hc__with__sqlite_fun1355(f, _ctx), _ctx); /*10001*/
    return kk_std_core_types__either_unbox(_x_x1354, KK_OWNED, _ctx);
  }
  if (kk_std_core_types__is_Left(x_10271, _ctx)) {
    kk_box_t _box_x537 = x_10271._cons.Left.left;
    kk_string_t e = kk_string_unbox(_box_x537);
    kk_string_dup(e, _ctx);
    kk_std_core_types__either_drop(x_10271, _ctx);
    kk_function_drop(f, _ctx);
    return kk_std_core_types__new_Left(kk_string_box(e), _ctx);
  }
  {
    kk_box_t _box_x539 = x_10271._cons.Right.right;
    kk_sqlite__db d = kk_sqlite__db_unbox(_box_x539, KK_BORROWED, _ctx);
    kk_sqlite__db_dup(d, _ctx);
    kk_std_core_types__either_drop(x_10271, _ctx);
    kk_box_t x_0_10274;
    kk_sqlite__db _x_x1357 = kk_sqlite__db_dup(d, _ctx); /*sqlite/db*/
    x_0_10274 = kk_function_call(kk_box_t, (kk_function_t, kk_sqlite__db, kk_context_t*), f, (f, _x_x1357, _ctx), _ctx); /*7430*/
    kk_box_drop(x_0_10274, _ctx);
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x1358 = kk_std_core_hnd_yield_extend(kk_sqlite_new_hc__with__sqlite_fun1359(d, _ctx), _ctx); /*10001*/
      return kk_std_core_types__either_unbox(_x_x1358, KK_OWNED, _ctx);
    }
    {
      kk_ssize_t _b_x545_549;
      kk_std_core_hnd__htag _x_x1361 = kk_std_core_hnd__htag_dup(kk_std_core_exn_exn_fs__tag, _ctx); /*hnd/htag<exn>*/
      _b_x545_549 = kk_std_core_hnd__evv_index(_x_x1361, _ctx); /*hnd/ev-index*/
      kk_unit_t x_1_10277 = kk_Unit;
      kk_box_t _x_x1362 = kk_std_core_hnd__open_at1(_b_x545_549, kk_sqlite_new_hc__with__sqlite_fun1363(_ctx), kk_sqlite__db_box(d, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x1362);
      if (kk_yielding(kk_context())) {
        kk_box_t _x_x1369 = kk_std_core_hnd_yield_extend(kk_sqlite_new_hc__with__sqlite_fun1370(_ctx), _ctx); /*10001*/
        return kk_std_core_types__either_unbox(_x_x1369, KK_OWNED, _ctx);
      }
      {
        return kk_std_core_types__new_Right(kk_bool_box(true), _ctx);
      }
    }
  }
}
 
// .hc:159


// lift anonymous function
struct kk_sqlite_hc__print__rows_fun1378__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_sqlite_hc__print__rows_fun1378(kk_function_t _fself, kk_box_t _b_x571, kk_context_t* _ctx);
static kk_function_t kk_sqlite_new_hc__print__rows_fun1378(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_sqlite_hc__print__rows_fun1378, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_unit_t kk_sqlite_hc__print__rows_fun1378(kk_function_t _fself, kk_box_t _b_x571, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t s_0_10084;
  kk_std_core_types__list _x_x1379;
  kk_sqlite__row _match_x575 = kk_sqlite__row_unbox(_b_x571, KK_OWNED, _ctx); /*sqlite/row*/;
  {
    kk_std_core_types__list _x_1 = _match_x575.values;
    _x_x1379 = _x_1; /*list<string>*/
  }
  kk_string_t _x_x1380;
  kk_define_string_literal(static, _s_x1381, 3, " | ", _ctx)
  _x_x1380 = kk_string_dup(_s_x1381, _ctx); /*string*/
  s_0_10084 = kk_std_core_list_joinsep(_x_x1379, _x_x1380, _ctx); /*string*/
  kk_std_core_console_printsln(s_0_10084, _ctx); return kk_Unit;
}

kk_unit_t kk_sqlite_hc__print__rows(kk_sqlite__queryresult r, kk_context_t* _ctx) { /* (r : queryresult) -> console/console () */ 
  kk_string_t s_10079;
  kk_std_core_types__list _x_x1372;
  {
    struct kk_sqlite_Queryresult* _con_x1373 = kk_sqlite__as_Queryresult(r, _ctx);
    kk_std_core_types__list _x = _con_x1373->columns;
    kk_std_core_types__list_dup(_x, _ctx);
    _x_x1372 = _x; /*list<string>*/
  }
  kk_string_t _x_x1374;
  kk_define_string_literal(static, _s_x1375, 3, " | ", _ctx)
  _x_x1374 = kk_string_dup(_s_x1375, _ctx); /*string*/
  s_10079 = kk_std_core_list_joinsep(_x_x1372, _x_x1374, _ctx); /*string*/
  kk_unit_t __ = kk_Unit;
  kk_std_core_console_printsln(s_10079, _ctx);
  kk_std_core_types__list _x_x1376;
  {
    struct kk_sqlite_Queryresult* _con_x1377 = kk_sqlite__as_Queryresult(r, _ctx);
    kk_std_core_types__list _pat_0_0 = _con_x1377->columns;
    kk_std_core_types__list _x_0 = _con_x1377->rows;
    if kk_likely(kk_datatype_ptr_is_unique(r, _ctx)) {
      kk_std_core_types__list_drop(_pat_0_0, _ctx);
      kk_datatype_ptr_free(r, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(r, _ctx);
    }
    _x_x1376 = _x_0; /*list<sqlite/row>*/
  }
  kk_std_core_list_foreach(_x_x1376, kk_sqlite_new_hc__print__rows_fun1378(_ctx), _ctx); return kk_Unit;
}

// initialization
void kk_sqlite__init(kk_context_t* _ctx){
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
  kk_sqlite__ffi__init(_ctx);
  kk_list__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_sqlite__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_list__done(_ctx);
  kk_sqlite__ffi__done(_ctx);
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
