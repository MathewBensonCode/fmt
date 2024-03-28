// Formatting library for C++ - chrono support
//
// Copyright (c) 2012 - present, Victor Zverovich
// All rights reserved.
//
// For the license information refer to format.h.

module;

#include <fmt/chrono.h>

export module fmt.chrono;

export namespace fmt {

using fmt::localtime;

using fmt::gmtime;

using fmt::weekday;

using fmt::formatter;

}  // namespace fmt
