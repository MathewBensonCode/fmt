cmake_minimum_required(VERSION 3.28)

if(${FMT_MASTER_PROJECT})
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

endif()

add_library(fmt)

target_include_directories(fmt PUBLIC ${PROJECT_DIR}/include)

get_target_property(modulelocation fmt BINARY_DIR)

if(${CMAKE_CXX_COMPILER_ID} MATCHES "Clang")
target_compile_options(
    fmt PUBLIC -fprebuilt-module-path=${modulelocation}/CMakeFiles/fmt.dir
  )
endif()

if(${CMAKE_CXX_COMPILER_ID} MATCHES "MSVC")
target_compile_options(
    fmt PUBLIC /reference ifcSearchDir=${modulelocation}/CMakeFiles/fmt.dir
  )
endif()

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
