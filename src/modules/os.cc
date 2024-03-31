// Formatting library for C++ - optional OS-specific functionality
//
// Copyright (c) 2012 - present, Victor Zverovich
// All rights reserved.
//
// For the license information refer to format.h.

module;

#include <fmt/os.h>

export module fmt.os;

export namespace fmt {

using fmt::basic_cstring_view;

using fmt::cstring_view;

using fmt::wcstring_view;

#ifdef _WIN32
using fmt::system_category;

using fmt::vwindows_error;

using fmt::windows_error;

using fmt::report_windows_error;

#else
using fmt::system_category;

#endif  // _WIN32

#ifdef __OSX__
using fmt::say;
#endif

// A buffered file.
using fmt::buffered_file;

#if FMT_USE_FCNTL

using fmt::file;

using fmt::pipe;

using fmt::getpagesize;

using fmt::ostream;

using fmt::output_file;

#endif  // FMT_USE_FCNTL

}  // namespace fmt
