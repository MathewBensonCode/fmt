// Formatting library for C++ - color support
//
// Copyright (c) 2018 - present, Victor Zverovich and fmt contributors
// All rights reserved.
//
// For the license information refer to format.h

module;

#include <fmt/color.h>

export module fmt.color;

export {
  namespace fmt {

  using fmt::color;

  using fmt::terminal_color;

  using fmt::emphasis;

  using fmt::rgb;

  namespace detail {

  using fmt::detail::color_type;

  }  // namespace detail

  using fmt::text_style;

  using fmt::fg;

  using fmt::bg;

  namespace detail {

  using fmt::detail::ansi_color_escape;

  using fmt::detail::make_foreground_color;

  using fmt::detail::make_background_color;

  using fmt::detail::make_emphasis;

  using fmt::detail::reset_color;

  using fmt::detail::styled_arg;

  using fmt::detail::vformat_to;

  }  // namespace detail

  using fmt::vprint;

  using fmt::print;

  using fmt::vformat;

  using fmt::format;

  using fmt::format_to;

  using fmt::formatter;

  using fmt::styled;
  }  // namespace fmt
}  // namespace fmt
