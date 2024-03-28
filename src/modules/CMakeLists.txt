cmake_minimum_required(VERSION 3.28)

if(${FMT_MASTER_PROJECT})
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

endif()

add_library(fmt)

get_target_property(modulelocation fmt BINARY_DIR)

target_sources(
  fmt
  PUBLIC FILE_SET
         fmt
         TYPE
         CXX_MODULES
         FILES
         fmt.cc
         format.cc
         base.cc
         chrono.cc
         os.cc
         ostream.cc
         compile.cc
         color.cc
         printf.cc
         ranges.cc
         xchar.cc
         )
