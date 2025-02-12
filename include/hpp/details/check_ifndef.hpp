#if                                  \
  defined(PP_WIN_IMPL)          ||   \
  defined(HPP_POSIX_IMPL)       ||   \
                                     \
	defined(DETAIL_HPP_IF0)       ||   \
	defined(DETAIL_HPP_IF1)       ||   \
	defined(DETAIL_HPP_IF)        ||   \
	defined(HPP_IF)               ||   \
                                     \
	defined(DETAIL_HPP_EMPTY)     ||   \
	defined(DETAIL_HPP_NON_EMPTY) ||   \
	defined(DETAIL_HPP_IFE0)      ||   \
	defined(DETAIL_HPP_IFE1)      ||   \
	defined(DETAIL_HPP_IFE)       ||   \
	defined(HPP_IFE)

#error "Some of previous file did not include <hpp/undef.hpp> at the end"
#endif
