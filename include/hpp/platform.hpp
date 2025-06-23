#pragma once

//Define platform
#if defined(_WIN32) || defined(__MINGW32__)
  #define HPP_WIN_IMPL 1
  #define HPP_POSIX_IMPL 0
#else
  #define HPP_WIN_IMPL 0
  #define HPP_POSIX_IMPL 1
#endif
