// Formatting library for C++ - optional wchar_t and exotic character support
//
// Copyright (c) 2012 - present, Victor Zverovich
// All rights reserved.
//
// For the license information refer to format.h.
module;

#include <fmt/xchar.h>

export module fmt.xchar;

export namespace fmt {

using fmt::wformat_args;

using fmt::wformat_context;

using fmt::wformat_parse_context;

using fmt::wmemory_buffer;

using fmt::wstring_view;

using fmt::wformat_string;

using fmt::runtime;

using fmt::is_char;

using fmt::make_wformat_args;

inline namespace literals {
#if FMT_USE_USER_DEFINED_LITERALS && !FMT_USE_NONTYPE_TEMPLATE_ARGS
using fmt::literals::operator""_a;
#endif
}  // namespace literals

using fmt::join;

using fmt::vformat;

using fmt::format;

using fmt::format_to;

using fmt::vformat_to;

using fmt::vformat_to_n;

using fmt::format_to_n;

using fmt::formatted_size;

using fmt::vprint;

using fmt::print;

using fmt::println;

}  // namespace fmt
