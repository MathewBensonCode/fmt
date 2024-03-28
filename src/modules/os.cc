// Formatting library for C++ - optional OS-specific functionality
//
// Copyright (c) 2012 - present, Victor Zverovich
// All rights reserved.
//
// For the license information refer to format.h.

module;

#include <fmt/os.h>

export module fmt.os;

export {
  namespace fmt {

  using fmt::basic_cstring_view;

  using fmt::cstring_view;
  using fmt::wcstring_view;

#ifdef _WIN32
  using fmt::system_category;

  namespace detail {
  using fmt::detail::format_windows_error;
  }

  using fmt::vwindows_error;

  /**
   \rst
   Constructs a :class:`std::system_error` object with the description
   of the form

   .. parsed-literal::
     *<message>*: *<system-message>*

   where *<message>* is the formatted message and *<system-message>* is the
   system message corresponding to the error code.
   *error_code* is a Windows error code as given by ``GetLastError``.
   If *error_code* is not a valid error code such as -1, the system message
   will look like "error -1".

   **Example**::

     // This throws a system_error with the description
     //   cannot open file 'madeup': The system cannot find the file specified.
     // or similar (system message may vary).
     const char *filename = "madeup";
     LPOFSTRUCT of = LPOFSTRUCT();
     HFILE file = OpenFile(filename, &of, OF_READ);
     if (file == HFILE_ERROR) {
       throw fmt::windows_error(GetLastError(),
                                "cannot open file '{}'", filename);
     }
   \endrst
  */

  using fmt::windows_error;

  // Reports a Windows error without throwing an exception.
  // Can be used to report errors from destructors.
  using fmt::report_windows_error;

#else
  using fmt::system_category;

#endif  // _WIN32

// std::system is not available on some platforms such as iOS (#2248).
#ifdef __OSX__
  using fmt::say;
#endif

  // A buffered file.
  using fmt::buffered_file;

#if FMT_USE_FCNTL

  // A file. Closed file is represented by a file object with descriptor -1.
  // Methods that are not declared with noexcept may throw
  // fmt::system_error in case of failure. Note that some errors such as
  // closing the file multiple times will cause a crash on Windows rather
  // than an exception. You can get standard behavior by overriding the
  // invalid parameter handler with _set_invalid_parameter_handler.
  using fmt::file;

  using fmt::pipe;

  // Returns the memory page size.
  using fmt::getpagesize;

  namespace detail {

  using fmt::detail::buffer_size;

  using fmt::detail::ostream_params;

  using fmt::detail::file_buffer;

  }  // namespace detail

  using fmt::ostream;

  using fmt::output_file;

#endif  // FMT_USE_FCNTL

  }  // namespace fmt
}
