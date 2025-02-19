#pragma once

#include "separators.hpp"

//Inspired by this article:
//https://www.scs.stanford.edu/~dm/blog/va-opt.html

//Rescan macro 256 times
#define DETAIL_HPP_RESCAN(...)  DETAIL_HPP_RESCAN1(DETAIL_HPP_RESCAN1(__VA_ARGS__))
#define DETAIL_HPP_RESCAN1(...) DETAIL_HPP_RESCAN2(DETAIL_HPP_RESCAN2(__VA_ARGS__))
#define DETAIL_HPP_RESCAN2(...) DETAIL_HPP_RESCAN3(DETAIL_HPP_RESCAN3(__VA_ARGS__))
#define DETAIL_HPP_RESCAN3(...) DETAIL_HPP_RESCAN4(DETAIL_HPP_RESCAN4(__VA_ARGS__))
#define DETAIL_HPP_RESCAN4(...) DETAIL_HPP_RESCAN5(DETAIL_HPP_RESCAN5(__VA_ARGS__))
#define DETAIL_HPP_RESCAN5(...) DETAIL_HPP_RESCAN6(DETAIL_HPP_RESCAN6(__VA_ARGS__))
#define DETAIL_HPP_RESCAN6(...) DETAIL_HPP_RESCAN7(DETAIL_HPP_RESCAN7(__VA_ARGS__))
#define DETAIL_HPP_RESCAN7(...) DETAIL_HPP_RESCAN8(DETAIL_HPP_RESCAN8(__VA_ARGS__))
#define DETAIL_HPP_RESCAN8(...) __VA_ARGS__

#define DETAIL_HPP_FOREACH_EXEC_MACRO_EXPAND_EXTRA_ARGS(...) __VA_ARGS__ __VA_OPT__(,)
#define DETAIL_HPP_FOREACH_EXEC_MACRO_EXPAND(macro, ...) macro(__VA_ARGS__)
#define DETAIL_HPP_FOREACH_EXEC_MACRO(macro, extra_args, var) DETAIL_HPP_FOREACH_EXEC_MACRO_EXPAND(macro, DETAIL_HPP_FOREACH_EXEC_MACRO_EXPAND_EXTRA_ARGS extra_args var)

#define DETAIL_HPP_FOREACH_PARENS ()
#define DETAIL_HPP_FOREACH_F_AGAIN() DETAIL_HPP_FOREACH_F
#define DETAIL_HPP_FOREACH_F(macro, sep_macro, extra_args, var, ...) \
  DETAIL_HPP_FOREACH_EXEC_MACRO(macro, extra_args, var) __VA_OPT__(sep_macro() DETAIL_HPP_FOREACH_F_AGAIN DETAIL_HPP_FOREACH_PARENS(macro, sep_macro, extra_args, __VA_ARGS__))
#define HPP_FOREACH(macro_func_name_or_callable, separator_macro_func_name, extra_args_in_parens, ...) __VA_OPT__(DETAIL_HPP_RESCAN(DETAIL_HPP_FOREACH_F(macro_func_name_or_callable, separator_macro_func_name, extra_args_in_parens, __VA_ARGS__)))
