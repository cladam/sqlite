#pragma once
#ifndef kk_sqlite_H
#define kk_sqlite_H
// Koka generated module: sqlite, koka version: 3.2.3, platform: 64-bit
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
#include "sqlite__ffi.h"

// type declarations

// value type sqlite/db
struct kk_sqlite_Db {
  kk_integer_t h;
};
typedef struct kk_sqlite_Db kk_sqlite__db;
static inline kk_sqlite__db kk_sqlite__new_Db(kk_integer_t h, kk_context_t* _ctx) {
  kk_sqlite__db _con = { h };
  return _con;
}
static inline bool kk_sqlite__is_Db(kk_sqlite__db x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_sqlite__db kk_sqlite__db_dup(kk_sqlite__db _x, kk_context_t* _ctx) {
  kk_integer_dup(_x.h, _ctx);
  return _x;
}
static inline void kk_sqlite__db_drop(kk_sqlite__db _x, kk_context_t* _ctx) {
  kk_integer_drop(_x.h, _ctx);
}
static inline kk_box_t kk_sqlite__db_box(kk_sqlite__db _x, kk_context_t* _ctx) {
  return kk_integer_box(_x.h, _ctx);
}
static inline kk_sqlite__db kk_sqlite__db_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_sqlite__new_Db(kk_integer_unbox(_x, _ctx), _ctx);
}

// value type sqlite/row
struct kk_sqlite_Row {
  kk_std_core_types__list values;
};
typedef struct kk_sqlite_Row kk_sqlite__row;
static inline kk_sqlite__row kk_sqlite__new_Row(kk_std_core_types__list values, kk_context_t* _ctx) {
  kk_sqlite__row _con = { values };
  return _con;
}
static inline bool kk_sqlite__is_Row(kk_sqlite__row x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_sqlite__row kk_sqlite__row_dup(kk_sqlite__row _x, kk_context_t* _ctx) {
  kk_std_core_types__list_dup(_x.values, _ctx);
  return _x;
}
static inline void kk_sqlite__row_drop(kk_sqlite__row _x, kk_context_t* _ctx) {
  kk_std_core_types__list_drop(_x.values, _ctx);
}
static inline kk_box_t kk_sqlite__row_box(kk_sqlite__row _x, kk_context_t* _ctx) {
  return kk_std_core_types__list_box(_x.values, _ctx);
}
static inline kk_sqlite__row kk_sqlite__row_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_sqlite__new_Row(kk_std_core_types__list_unbox(_x, _borrow, _ctx), _ctx);
}

// type sqlite/queryresult
struct kk_sqlite__queryresult_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_sqlite__queryresult;
struct kk_sqlite_Queryresult {
  struct kk_sqlite__queryresult_s _base;
  kk_std_core_types__list columns;
  kk_std_core_types__list rows;
};
static inline kk_sqlite__queryresult kk_sqlite__base_Queryresult(struct kk_sqlite_Queryresult* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_sqlite__queryresult kk_sqlite__new_Queryresult(kk_reuse_t _at, int32_t _cpath, kk_std_core_types__list columns, kk_std_core_types__list rows, kk_context_t* _ctx) {
  struct kk_sqlite_Queryresult* _con = kk_block_alloc_at_as(struct kk_sqlite_Queryresult, _at, 2 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->columns = columns;
  _con->rows = rows;
  return kk_sqlite__base_Queryresult(_con, _ctx);
}
static inline struct kk_sqlite_Queryresult* kk_sqlite__as_Queryresult(kk_sqlite__queryresult x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_sqlite_Queryresult*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_sqlite__is_Queryresult(kk_sqlite__queryresult x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_sqlite__queryresult kk_sqlite__queryresult_dup(kk_sqlite__queryresult _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_sqlite__queryresult_drop(kk_sqlite__queryresult _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_sqlite__queryresult_box(kk_sqlite__queryresult _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_sqlite__queryresult kk_sqlite__queryresult_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// value declarations

kk_unit_t kk_sqlite_hc_assert(bool b, kk_context_t* _ctx); /* (b : bool) -> exn () */ 
 
// monadic lift

static inline kk_string_t kk_sqlite__mlift_hc_show_maybe_10174(kk_string_t _y_x10090, kk_context_t* _ctx) { /* forall<e> (string) -> e string */ 
  kk_string_t _x_x786;
  kk_define_string_literal(static, _s_x787, 5, "Some(", _ctx)
  _x_x786 = kk_string_dup(_s_x787, _ctx); /*string*/
  kk_string_t _x_x788;
  kk_string_t _x_x789;
  kk_define_string_literal(static, _s_x790, 1, ")", _ctx)
  _x_x789 = kk_string_dup(_s_x790, _ctx); /*string*/
  _x_x788 = kk_std_core_types__lp__plus__plus__rp_(_y_x10090, _x_x789, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x786, _x_x788, _ctx);
}

kk_string_t kk_sqlite_hc_show_maybe(kk_std_core_types__maybe m, kk_function_t show_a, kk_context_t* _ctx); /* forall<a,e> (m : maybe<a>, show-a : (a) -> e string) -> e string */ 
 
// monadic lift

static inline kk_string_t kk_sqlite__mlift_hc_show_result_10175(kk_string_t _y_x10092, kk_context_t* _ctx) { /* forall<e> (string) -> e string */ 
  kk_string_t _x_x805;
  kk_define_string_literal(static, _s_x806, 3, "Ok(", _ctx)
  _x_x805 = kk_string_dup(_s_x806, _ctx); /*string*/
  kk_string_t _x_x807;
  kk_string_t _x_x808;
  kk_define_string_literal(static, _s_x809, 1, ")", _ctx)
  _x_x808 = kk_string_dup(_s_x809, _ctx); /*string*/
  _x_x807 = kk_std_core_types__lp__plus__plus__rp_(_y_x10092, _x_x808, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x805, _x_x807, _ctx);
}
 
// monadic lift

static inline kk_string_t kk_sqlite__mlift_hc_show_result_10176(kk_string_t _y_x10093, kk_context_t* _ctx) { /* forall<e> (string) -> e string */ 
  kk_string_t _x_x810;
  kk_define_string_literal(static, _s_x811, 4, "Err(", _ctx)
  _x_x810 = kk_string_dup(_s_x811, _ctx); /*string*/
  kk_string_t _x_x812;
  kk_string_t _x_x813;
  kk_define_string_literal(static, _s_x814, 1, ")", _ctx)
  _x_x813 = kk_string_dup(_s_x814, _ctx); /*string*/
  _x_x812 = kk_std_core_types__lp__plus__plus__rp_(_y_x10093, _x_x813, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x810, _x_x812, _ctx);
}

kk_string_t kk_sqlite_hc_show_result(kk_std_core_types__either r, kk_function_t show_a, kk_function_t show_e, kk_context_t* _ctx); /* forall<a,b,e> (r : either<a,b>, show-a : (b) -> e string, show-e : (a) -> e string) -> e string */ 
 
// Automatically generated. Retrieves the `h` constructor field of the `:db` type.

static inline kk_integer_t kk_sqlite_db_fs_h(kk_sqlite__db db, kk_context_t* _ctx) { /* (db : db) -> int */ 
  {
    kk_integer_t _x = db.h;
    return kk_integer_dup(_x, _ctx);
  }
}

kk_sqlite__db kk_sqlite_db_fs__copy(kk_sqlite__db _this, kk_std_core_types__optional h, kk_context_t* _ctx); /* (db, h : ? int) -> db */ 
 
// Automatically generated. Retrieves the `values` constructor field of the `:row` type.

static inline kk_std_core_types__list kk_sqlite_row_fs_values(kk_sqlite__row row, kk_context_t* _ctx) { /* (row : row) -> list<string> */ 
  {
    kk_std_core_types__list _x = row.values;
    return kk_std_core_types__list_dup(_x, _ctx);
  }
}

kk_sqlite__row kk_sqlite_row_fs__copy(kk_sqlite__row _this, kk_std_core_types__optional values, kk_context_t* _ctx); /* (row, values : ? (list<string>)) -> row */ 
 
// Automatically generated. Retrieves the `columns` constructor field of the `:queryresult` type.

static inline kk_std_core_types__list kk_sqlite_queryresult_fs_columns(kk_sqlite__queryresult queryresult, kk_context_t* _ctx) { /* (queryresult : queryresult) -> list<string> */ 
  {
    struct kk_sqlite_Queryresult* _con_x843 = kk_sqlite__as_Queryresult(queryresult, _ctx);
    kk_std_core_types__list _x = _con_x843->columns;
    return kk_std_core_types__list_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `rows` constructor field of the `:queryresult` type.

static inline kk_std_core_types__list kk_sqlite_queryresult_fs_rows(kk_sqlite__queryresult queryresult, kk_context_t* _ctx) { /* (queryresult : queryresult) -> list<row> */ 
  {
    struct kk_sqlite_Queryresult* _con_x844 = kk_sqlite__as_Queryresult(queryresult, _ctx);
    kk_std_core_types__list _x = _con_x844->rows;
    return kk_std_core_types__list_dup(_x, _ctx);
  }
}

static inline kk_string_t kk_sqlite_db_fs_show(kk_sqlite__db p, kk_context_t* _ctx) { /* (p : db) -> string */ 
  kk_string_t _x_x845;
  kk_define_string_literal(static, _s_x846, 3, "Db(", _ctx)
  _x_x845 = kk_string_dup(_s_x846, _ctx); /*string*/
  kk_string_t _x_x847;
  kk_string_t _x_x848;
  kk_define_string_literal(static, _s_x849, 3, "h: ", _ctx)
  _x_x848 = kk_string_dup(_s_x849, _ctx); /*string*/
  kk_string_t _x_x850;
  kk_string_t _x_x851;
  kk_integer_t _x_x852;
  {
    kk_integer_t _x = p.h;
    _x_x852 = _x; /*int*/
  }
  _x_x851 = kk_std_core_int_show(_x_x852, _ctx); /*string*/
  kk_string_t _x_x853;
  kk_define_string_literal(static, _s_x854, 1, ")", _ctx)
  _x_x853 = kk_string_dup(_s_x854, _ctx); /*string*/
  _x_x850 = kk_std_core_types__lp__plus__plus__rp_(_x_x851, _x_x853, _ctx); /*string*/
  _x_x847 = kk_std_core_types__lp__plus__plus__rp_(_x_x848, _x_x850, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x845, _x_x847, _ctx);
}

kk_string_t kk_sqlite_row_fs_show(kk_sqlite__row p, kk_context_t* _ctx); /* (p : row) -> string */ 

kk_string_t kk_sqlite_queryresult_fs_show(kk_sqlite__queryresult p, kk_context_t* _ctx); /* (p : queryresult) -> string */ 

kk_sqlite__queryresult kk_sqlite_queryresult_fs__copy(kk_sqlite__queryresult _this, kk_std_core_types__optional columns, kk_std_core_types__optional rows, kk_context_t* _ctx); /* (queryresult, columns : ? (list<string>), rows : ? (list<row>)) -> queryresult */ 

static inline kk_integer_t kk_sqlite_hc__abs(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> int */ 
  bool _match_x755 = kk_integer_lt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x755) {
    return kk_integer_sub((kk_integer_from_small(0)),n,kk_context());
  }
  {
    return n;
  }
}

static inline kk_integer_t kk_sqlite_hc__min(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> int */ 
  bool _match_x754 = kk_integer_lt_borrow(a,b,kk_context()); /*bool*/;
  if (_match_x754) {
    kk_integer_drop(b, _ctx);
    return a;
  }
  {
    kk_integer_drop(a, _ctx);
    return b;
  }
}

static inline kk_integer_t kk_sqlite_hc__max(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> int */ 
  bool _match_x753 = kk_integer_gt_borrow(a,b,kk_context()); /*bool*/;
  if (_match_x753) {
    kk_integer_drop(b, _ctx);
    return a;
  }
  {
    kk_integer_drop(a, _ctx);
    return b;
  }
}

kk_integer_t kk_sqlite_hc__clamp(kk_integer_t v, kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx); /* (v : int, lo : int, hi : int) -> int */ 

kk_integer_t kk_sqlite_hc__gcd(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx); /* (a : int, b : int) -> div int */ 

kk_integer_t kk_sqlite_hc__lcm(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx); /* (a : int, b : int) -> div int */ 

kk_integer_t kk_sqlite_hc__pow(kk_integer_t base, kk_integer_t exp, kk_context_t* _ctx); /* (base : int, exp : int) -> div int */ 

kk_integer_t kk_sqlite_hc__sign(kk_integer_t n, kk_context_t* _ctx); /* (n : int) -> int */ 

kk_std_core_types__list kk_sqlite_hc__range(kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx); /* (lo : int, hi : int) -> div list<int> */ 

kk_std_core_types__list kk_sqlite_hc__range__inc(kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx); /* (lo : int, hi : int) -> div list<int> */ 

kk_integer_t kk_sqlite_hc__isqrt__loop(kk_integer_t n, kk_integer_t x0, kk_integer_t x1, kk_context_t* _ctx); /* (n : int, x0 : int, x1 : int) -> div int */ 

kk_integer_t kk_sqlite_hc__isqrt(kk_integer_t n, kk_context_t* _ctx); /* (n : int) -> div int */ 

bool kk_sqlite_hc__is__digit(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_sqlite_hc__is__upper(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_sqlite_hc__is__lower(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_sqlite_hc__is__alpha(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_sqlite_hc__is__alnum(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_sqlite_hc__is__space(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_sqlite_hc__is__punct(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> bool */ 

bool kk_sqlite_hc__all__digits(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_sqlite_hc__all__alpha(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_sqlite_hc__all__upper(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_sqlite_hc__all__lower(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_sqlite_hc__all__alnum(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_sqlite_hc__glob__match__chars(kk_std_core_types__list pat, kk_std_core_types__list input, kk_context_t* _ctx); /* (pat : list<char>, input : list<char>) -> div bool */ 

bool kk_sqlite_hc__glob__star(kk_std_core_types__list prest_0, kk_std_core_types__list input_0, kk_context_t* _ctx); /* (prest : list<char>, input : list<char>) -> div bool */ 

static inline bool kk_sqlite_hc__glob__match(kk_string_t pattern, kk_string_t s, kk_context_t* _ctx) { /* (pattern : string, s : string) -> div bool */ 
  kk_std_core_types__list _x_x954 = kk_std_core_string_list(pattern, _ctx); /*list<char>*/
  kk_std_core_types__list _x_x955 = kk_std_core_string_list(s, _ctx); /*list<char>*/
  return kk_sqlite_hc__glob__match__chars(_x_x954, _x_x955, _ctx);
}

bool kk_sqlite_hc__glob__doublestar(kk_std_core_types__list prest, kk_std_core_types__list paths, kk_context_t* _ctx); /* (prest : list<string>, paths : list<string>) -> div bool */ 

bool kk_sqlite_hc__glob__match__segments(kk_std_core_types__list pats, kk_std_core_types__list paths_0, kk_context_t* _ctx); /* (pats : list<string>, paths : list<string>) -> div bool */ 

bool kk_sqlite_hc__glob__match__path(kk_string_t pattern, kk_string_t hc__path, kk_context_t* _ctx); /* (pattern : string, hc_path : string) -> div bool */ 

static inline bool kk_sqlite_hc__is__empty(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  kk_integer_t _brw_x677 = kk_std_core_string_chars_fs_count(s, _ctx); /*int*/;
  bool _brw_x678 = kk_integer_eq_borrow(_brw_x677,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x677, _ctx);
  return _brw_x678;
}

static inline bool kk_sqlite_hc__is__blank(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  kk_string_t s_0_10044;
  kk_string_t _x_x984 = kk_string_trim_left(s,kk_context()); /*string*/
  s_0_10044 = kk_string_trim_right(_x_x984,kk_context()); /*string*/
  kk_integer_t _brw_x675 = kk_std_core_string_chars_fs_count(s_0_10044, _ctx); /*int*/;
  bool _brw_x676 = kk_integer_eq_borrow(_brw_x675,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x675, _ctx);
  return _brw_x676;
}

kk_std_core_types__list kk_sqlite_hc__words(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> list<string> */ 

kk_std_core_types__list kk_sqlite_hc__lines(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> list<string> */ 

static inline kk_string_t kk_sqlite_hc__unwords(kk_std_core_types__list ws, kk_context_t* _ctx) { /* (ws : list<string>) -> string */ 
  kk_string_t _x_x1005;
  kk_define_string_literal(static, _s_x1006, 1, " ", _ctx)
  _x_x1005 = kk_string_dup(_s_x1006, _ctx); /*string*/
  return kk_std_core_list_joinsep(ws, _x_x1005, _ctx);
}

static inline kk_string_t kk_sqlite_hc__unlines(kk_std_core_types__list ls, kk_context_t* _ctx) { /* (ls : list<string>) -> string */ 
  kk_string_t _x_x1007;
  kk_define_string_literal(static, _s_x1008, 1, "\n", _ctx)
  _x_x1007 = kk_string_dup(_s_x1008, _ctx); /*string*/
  return kk_std_core_list_joinsep(ls, _x_x1007, _ctx);
}

kk_string_t kk_sqlite_hc__repeat__str(kk_string_t s, kk_integer_t n, kk_context_t* _ctx); /* (s : string, n : int) -> div string */ 

kk_string_t kk_sqlite_hc__pad__left(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx); /* (s : string, width : int, ch : string) -> div string */ 

kk_string_t kk_sqlite_hc__pad__right(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx); /* (s : string, width : int, ch : string) -> div string */ 

kk_string_t kk_sqlite_hc__center(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx); /* (s : string, width : int, ch : string) -> div string */ 

kk_string_t kk_sqlite_hc__removeprefix(kk_string_t s, kk_string_t pre, kk_context_t* _ctx); /* (s : string, pre : string) -> string */ 

kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__open_10177(kk_string_t hc__path, kk_integer_t h, kk_context_t* _ctx); /* (hc_path : string, h : int) -> io either<string,db> */ 

kk_std_core_types__either kk_sqlite_hc__sqlite__open(kk_string_t hc__path, kk_context_t* _ctx); /* (hc_path : string) -> io either<string,db> */ 

kk_unit_t kk_sqlite_hc__sqlite__close(kk_sqlite__db d, kk_context_t* _ctx); /* (d : db) -> io () */ 
 
// monadic lift

static inline kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__exec_10178(kk_string_t _y_x10099, kk_context_t* _ctx) { /* (string) -> io either<string,bool> */ 
  return kk_std_core_types__new_Left(kk_string_box(_y_x10099), _ctx);
}

kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__exec_10179(kk_sqlite__db d, kk_integer_t rc, kk_context_t* _ctx); /* (d : db, rc : int) -> io either<string,bool> */ 

kk_std_core_types__either kk_sqlite_hc__sqlite__exec(kk_sqlite__db d, kk_string_t sql, kk_context_t* _ctx); /* (d : db, sql : string) -> io either<string,bool> */ 
 
// monadic lift

static inline kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__exec__p_10180(kk_string_t _y_x10102, kk_context_t* _ctx) { /* (string) -> io either<string,bool> */ 
  return kk_std_core_types__new_Left(kk_string_box(_y_x10102), _ctx);
}

kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__exec__p_10181(kk_sqlite__db d, kk_integer_t rc, kk_context_t* _ctx); /* (d : db, rc : int) -> io either<string,bool> */ 

kk_std_core_types__either kk_sqlite_hc__sqlite__exec__p(kk_sqlite__db d, kk_string_t sql, kk_std_core_types__list params, kk_context_t* _ctx); /* (d : db, sql : string, params : list<string>) -> io either<string,bool> */ 
 
// monadic lift

static inline kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__query__p_10182(kk_string_t _y_x10105, kk_context_t* _ctx) { /* (string) -> io either<string,queryresult> */ 
  return kk_std_core_types__new_Left(kk_string_box(_y_x10105), _ctx);
}
 
// monadic lift

static inline kk_sqlite__row kk_sqlite__mlift_hc__sqlite__query__p_10183(kk_std_core_types__list _c_x10112, kk_context_t* _ctx) { /* (list<string>) -> row */ 
  return kk_sqlite__new_Row(_c_x10112, _ctx);
}
 
// monadic lift

static inline kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__query__p_10184(kk_std_core_types__list _c_x10110, kk_std_core_types__list _y_x10113, kk_context_t* _ctx) { /* (list<string>, list<row>) -> <alloc<global>,console/console,div,exn,fsys,ndet,net,read<global>,ui,write<global>> either<string,queryresult> */ 
  kk_box_t _x_x1100;
  kk_sqlite__queryresult _x_x1101 = kk_sqlite__new_Queryresult(kk_reuse_null, 0, _c_x10110, _y_x10113, _ctx); /*sqlite/queryresult*/
  _x_x1100 = kk_sqlite__queryresult_box(_x_x1101, _ctx); /*10015*/
  return kk_std_core_types__new_Right(_x_x1100, _ctx);
}

kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__query__p_10185(kk_std_core_types__list data__rows, kk_std_core_types__list _c_x10110, kk_context_t* _ctx); /* (data_rows : list<string>, list<string>) -> either<string,queryresult> */ 

kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__query__p_10186(kk_std_core_types__list row__strs, kk_context_t* _ctx); /* (row_strs : list<string>) -> <alloc<global>,console/console,div,exn,fsys,ndet,net,read<global>,ui,write<global>> either<string,queryresult> */ 

kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__query__p_10187(kk_std_core_types__list _c_x10107, kk_context_t* _ctx); /* (list<string>) -> either<string,queryresult> */ 

kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__query__p_10188(kk_sqlite__db d, kk_string_t hc__raw, kk_context_t* _ctx); /* (d : db, hc_raw : string) -> io either<string,queryresult> */ 

kk_std_core_types__either kk_sqlite_hc__sqlite__query__p(kk_sqlite__db d, kk_string_t sql, kk_std_core_types__list params, kk_context_t* _ctx); /* (d : db, sql : string, params : list<string>) -> io either<string,queryresult> */ 
 
// .hc:83

static inline kk_std_core_types__either kk_sqlite_hc__sqlite__query(kk_sqlite__db d, kk_string_t sql, kk_context_t* _ctx) { /* (d : db, sql : string) -> io either<string,queryresult> */ 
  return kk_sqlite_hc__sqlite__query__p(d, sql, kk_std_core_types__new_Nil(_ctx), _ctx);
}

kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__query__one_10189(kk_std_core_types__either _y_x10117, kk_context_t* _ctx); /* (either<string,queryresult>) -> io either<string,maybe<row>> */ 

kk_std_core_types__either kk_sqlite_hc__sqlite__query__one(kk_sqlite__db d, kk_string_t sql, kk_std_core_types__list params, kk_context_t* _ctx); /* (d : db, sql : string, params : list<string>) -> io either<string,maybe<row>> */ 

kk_integer_t kk_sqlite_hc__sqlite__last__insert__id(kk_sqlite__db d, kk_context_t* _ctx); /* (d : db) -> io int */ 

kk_integer_t kk_sqlite_hc__sqlite__changes(kk_sqlite__db d, kk_context_t* _ctx); /* (d : db) -> io int */ 

kk_std_core_types__either kk_sqlite__mlift_hc__sqlite__table__exists_10190(kk_std_core_types__either _y_x10121, kk_context_t* _ctx); /* (either<string,queryresult>) -> io either<string,bool> */ 

kk_std_core_types__either kk_sqlite_hc__sqlite__table__exists(kk_sqlite__db d, kk_string_t name, kk_context_t* _ctx); /* (d : db, name : string) -> io either<string,bool> */ 

kk_std_core_types__maybe kk_sqlite_hc__row__str(kk_sqlite__row r, kk_integer_t idx, kk_context_t* _ctx); /* (r : row, idx : int) -> maybe<string> */ 

kk_std_core_types__maybe kk_sqlite_hc__row__int(kk_sqlite__row r, kk_integer_t idx, kk_context_t* _ctx); /* (r : row, idx : int) -> maybe<int> */ 
 
// monadic lift

static inline kk_std_core_types__either kk_sqlite__mlift_hc__with__sqlite_10191(kk_unit_t wild___0, kk_context_t* _ctx) { /* forall<e> (wild_@0 : ()) -> <alloc<global>,console/console,div,exn,fsys,ndet,net,read<global>,ui,write<global>|e> either<string,bool> */ 
  return kk_std_core_types__new_Right(kk_bool_box(true), _ctx);
}

kk_std_core_types__either kk_sqlite__mlift_hc__with__sqlite_10192(kk_sqlite__db d, kk_box_t wild__, kk_context_t* _ctx); /* forall<a,e> (d : db, wild_ : a) -> <alloc<global>,console/console,div,exn,fsys,ndet,net,read<global>,ui,write<global>|e> either<string,bool> */ 

kk_std_core_types__either kk_sqlite__mlift_hc__with__sqlite_10193(kk_function_t f, kk_std_core_types__either _y_x10123, kk_context_t* _ctx); /* forall<a,e> (f : (db) -> <alloc<global>,console/console,div,exn,fsys,ndet,net,read<global>,ui,write<global>|e> a, either<string,db>) -> <alloc<global>,console/console,div,exn,fsys,ndet,net,read<global>,ui,write<global>|e> either<string,bool> */ 

kk_std_core_types__either kk_sqlite_hc__with__sqlite(kk_string_t hc__path, kk_function_t f, kk_context_t* _ctx); /* forall<a,e> (hc_path : string, f : (db) -> <io|e> a) -> <io|e> either<string,bool> */ 

kk_unit_t kk_sqlite_hc__print__rows(kk_sqlite__queryresult r, kk_context_t* _ctx); /* (r : queryresult) -> console/console () */ 

void kk_sqlite__init(kk_context_t* _ctx);


void kk_sqlite__done(kk_context_t* _ctx);

#endif // header
