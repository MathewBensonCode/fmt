// Formatting library for C++ - legacy printf implementation
//
// Copyright (c) 2012 - 2016, Victor Zverovich
// All rights reserved.
//
// For the license information refer to format.h.

module;

#include <fmt/printf.h>

export module fmt.printf;

export {
  namespace fmt {

  using fmt::printf_formatter;

  using fmt::basic_printf_context;

  using fmt::printf_context;
  using fmt::wprintf_context;

  using fmt::printf_args;
  using fmt::wprintf_args;

  using fmt::make_printf_args;

  using fmt::vprintf_args;

  using fmt::vsprintf;

  using fmt::sprintf;

  using fmt::vfprintf;

  using fmt::fprintf;

  using fmt::vprintf;

  using fmt::printf;
  }  // namespace fmt
}
