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

  namespace detail {

  using fmt::detail::int_checker;

  using fmt::detail::printf_precision_handler;

  using fmt::detail::is_zero_int;

  using fmt::detail::make_unsigned_or_bool;

  using fmt::detail::arg_converter;

  using fmt::detail::convert_arg;

  using fmt::detail::char_converter;

  using fmt::detail::get_cstring;

  using fmt::detail::printf_width_handler;

  using fmt::detail::make_arg_formatter;

  using fmt::detail::printf_arg_formatter;

  using fmt::detail::parse_flags;

  using fmt::detail::parse_header;

  using fmt::detail::parse_printf_presentation_type;

  using fmt::detail::vprintf;
  }  // namespace detail

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
