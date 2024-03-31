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

export namespace fmt {

using fmt::basic_memory_buffer;

using fmt::memory_buffer;

using fmt::is_contiguous;

using fmt::format_error;

using fmt::generic_context;

using fmt::loc_value;

using fmt::format_facet;

using fmt::report_error;

using fmt::vsystem_error;

using fmt::system_error;

using fmt::format_system_error;

using fmt::report_system_error;

using fmt::format_int;

using fmt::formatter;

using fmt::ptr;

using fmt::underlying;

using fmt::bytes;

using fmt::group_digits_view;

using fmt::group_digits;

using fmt::nested_view;

using fmt::nested_formatter;

using fmt::to_string;

using fmt::vformat;

using fmt::format;

using fmt::format_to;

using fmt::formatted_size;
}  // namespace fmt
