// Formatting library for C++ - the base API for char/UTF-8
//
// Copyright (c) 2012 - present, Victor Zverovich
// All rights reserved.
//
// For the license information refer to format.h.
module;

#include <fmt/base.h>

export module fmt.base;

export namespace fmt {

using fmt::basic_format_arg;

using fmt::visit_format_arg;

using fmt::context;

using fmt::generic_context;

using fmt::basic_format_context;

using fmt::basic_format_parse_context;

using fmt::format_context;

using fmt::format_parse_context;

using fmt::buffered_context;

using fmt::is_formattable;

using fmt::make_format_args;

using fmt::arg;

using fmt::format_as;

using fmt::formatter;

using fmt::basic_string_view;

using fmt::string_view;

using fmt::is_char;

using fmt::runtime_format_string;

using fmt::basic_format_string;

using fmt::format_string;

using fmt::basic_format_arg;

using fmt::basic_format_args;

using fmt::dynamic_format_arg_store;

using fmt::vformat_to;

using fmt::format_to;

using fmt::format_to_n_result;

using fmt::vformat_to_n;

using fmt::format_to_n;

using fmt::format_to_result;

using fmt::vformat_to;

using fmt::formatted_size;

using fmt::vprint;
using fmt::vprint_locked;
using fmt::vprintln;

using fmt::print;

using fmt::println;
}  // namespace fmt
