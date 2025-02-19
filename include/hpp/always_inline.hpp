#pragma once

#ifdef _MSC_VER
#define HPP_ALWAYS_INLINE __forceinline
#else
#define HPP_ALWAYS_INLINE [[gnu::always_inline]] inline
#endif
