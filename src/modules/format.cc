/*
  Formatting library for C++

  Copyright (c) 2012 - present, Victor Zverovich

  Permission is hereby granted, free of charge, to any person obtaining
  a copy of this software and associated documentation files (the
  "Software"), to deal in the Software without restriction, including
  without limitation the rights to use, copy, modify, merge, publish,
  distribute, sublicense, and/or sell copies of the Software, and to
  permit persons to whom the Software is furnished to do so, subject to
  the following conditions:

  The above copyright notice and this permission notice shall be
  included in all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
  LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
  OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
  WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

  --- Optional exception to the license ---

  As an exception, if, as a result of your compiling your source code, portions
  of this Software are embedded into a machine-executable object form of such
  source code, you may redistribute such embedded portions in such object form
  without including the above copyright and permission notices.
 */

module;

#include <fmt/format.h>

export module fmt.format;

export {
  namespace fmt {

  using fmt::basic_memory_buffer;

  using fmt::memory_buffer;

  using fmt::is_contiguous;

  using fmt::format_error;

  namespace detail_exported {
#if FMT_USE_NONTYPE_TEMPLATE_ARGS
  using fmt::detail_exported::data;
  using fmt::detail_exported::fixed_string;
#endif

  using fmt::detail_exported::compile_string_to_view;

  }  // namespace detail_exported

  using fmt::generic_context;

  using fmt::loc_value;

  using fmt::format_facet;

  namespace detail {
  using fmt::detail::is_negative;

  using fmt::detail::is_supported_floating_point;

  using fmt::detail::uint32_or_64_or_128_t;

  using fmt::detail::uint64_or_128_t;

  using fmt::detail::digits2;

  using fmt::detail::sign;

  using fmt::detail::count_digits_fallback;

  using fmt::detail::count_digits;

  using fmt::detail::do_count_digits;

  using fmt::detail::digits10;

  using fmt::detail::thousands_sep_result;

  using fmt::detail::thousands_sep_impl;

  using fmt::detail::thousands_sep;

  using fmt::detail::decimal_point_impl;

  using fmt::detail::decimal_point;

  using fmt::detail::equal2;

  using fmt::detail::copy2;

  using fmt::detail::format_decimal_result;

  using fmt::detail::format_decimal;

  using fmt::detail::format_uint;

  using fmt::detail::utf8_to_utf16;

  using fmt::detail::to_utf8_error_policy;

  using fmt::detail::to_utf8;

  using fmt::detail::umul128;

  namespace dragonbox {

  using fmt::detail::dragonbox::floor_log10_pow2;

  using fmt::detail::dragonbox::floor_log2_pow10;

  using fmt::detail::dragonbox::umul128_upper64;

  using fmt::detail::dragonbox::umul192_upper128;

  using fmt::detail::dragonbox::get_cached_power;

  using fmt::detail::dragonbox::float_info;

  using fmt::detail::dragonbox::decimal_fp;

  using fmt::detail::dragonbox::to_decimal;

  }  // namespace dragonbox

  using fmt::detail::has_implicit_bit;

  using fmt::detail::num_significand_bits;

  using fmt::detail::exponent_mask;

  using fmt::detail::exponent_bias;

  using fmt::detail::write_exponent;

  using fmt::detail::basic_fp;

  using fmt::detail::fp;

  using fmt::detail::normalize;

  using fmt::detail::multiply;

  using fmt::detail::convert_float_result;

  using fmt::detail::convert_float;

  using fmt::detail::fill;

  using fmt::detail::write_padded;

  using fmt::detail::write_bytes;

  using fmt::detail::write_ptr;

  using fmt::detail::is_printable;

  using fmt::detail::needs_escape;

  using fmt::detail::find_escape_result;

  using fmt::detail::find_escape;

  using fmt::detail::write_codepoint;

  using fmt::detail::write_escaped_cp;

  using fmt::detail::write_escaped_string;

  using fmt::detail::write_escaped_char;

  using fmt::detail::write_char;

  using fmt::detail::write;

  using fmt::detail::write_int_data;

  using fmt::detail::write_int;

  using fmt::detail::digit_grouping;

  using fmt::detail::prefix_append;

  using fmt::detail::write_int;

  using fmt::detail::write_loc;

  using fmt::detail::write_int_arg;

  using fmt::detail::make_write_int_arg;

  using fmt::detail::loc_writer;

  using fmt::detail::write_int_noinline;

  using fmt::detail::write;

  using fmt::detail::counting_iterator;

  // DEPRECATED!
  using fmt::detail::parse_align;

  using fmt::detail::float_format;

  using fmt::detail::float_specs;

  using fmt::detail::parse_float_type_spec;

  using fmt::detail::write_nonfinite;

  using fmt::detail::big_decimal_fp;

  using fmt::detail::get_significand_size;

  using fmt::detail::write_significand;

  using fmt::detail::do_write_float;

  using fmt::detail::fallback_digit_grouping;

  using fmt::detail::write_float;

  using fmt::detail::isnan;

  using fmt::detail::has_isfinite;

  using fmt::detail::isfinite;

  using fmt::detail::signbit;

  using fmt::detail::adjust_precision;

  using fmt::detail::bigint;

  using fmt::detail::dragon;

  using fmt::detail::format_dragon;

  using fmt::detail::format_hexfloat;

  using fmt::detail::fractional_part_rounding_thresholds;

  using fmt::detail::format_float;

  using fmt::detail::default_arg_formatter;

  using fmt::detail::arg_formatter;

  using fmt::detail::width_checker;

  using fmt::detail::precision_checker;

  using fmt::detail::get_dynamic_spec;

  using fmt::detail::get_arg;

  using fmt::detail::handle_dynamic_spec;

#if FMT_USE_USER_DEFINED_LITERALS
#  if FMT_USE_NONTYPE_TEMPLATE_ARGS
  using fmt::detail::statically_named_arg;

  using fmt::detail::is_named_arg;

  using fmt::detail::udl_arg;

#  else
  using fmt::detail::udl_arg;
#  endif
#endif  // FMT_USE_USER_DEFINED_LITERALS

  using fmt::detail::vformat;

  using fmt::detail::format_func;

  using fmt::detail::format_error_code;
  }  // namespace detail

  using fmt::report_error;

  namespace detail {
  using fmt::detail::report_error;
  }
  using fmt::vsystem_error;

  using fmt::system_error;

  using fmt::format_system_error;

  using fmt::report_system_error;

  using fmt::format_int;

  using fmt::formatter;

  using fmt::ptr;

  using fmt::underlying;

  namespace enums {
  using fmt::enums::format_as;
  }

  using fmt::bytes;

  using fmt::group_digits_view;

  using fmt::group_digits;

  using fmt::nested_view;

  using fmt::nested_formatter;

  using fmt::to_string;

#ifndef FMT_HEADER_ONLY
  namespace detail {
  using fmt::detail::vformat_to;

  using fmt::detail::decimal_point_impl;
  using fmt::detail::thousands_sep_impl;
  }  // namespace detail

#endif  // FMT_HEADER_ONLY

  inline namespace literals {
#if FMT_USE_USER_DEFINED_LITERALS
  using fmt::literals::operator""_a;
#endif  // FMT_USE_USER_DEFINED_LITERALS
  }  // namespace literals

  using fmt::vformat;

  using fmt::format;

  using fmt::format_to;

  using fmt::formatted_size;
  }  // namespace fmt
}
