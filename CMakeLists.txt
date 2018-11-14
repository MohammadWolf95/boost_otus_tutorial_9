cmake_minimum_required (VERSION 2.8)
project (RandomAccessIt VERSION 0.0.$ENV{TRAVIS_BUILD_NUMBER})

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

include_directories("${PROJECT_SOURCE_DIR}")

enable_testing()

find_package(Boost REQUIRED)

add_subdirectory (src build/src) 
add_subdirectory (tests build/tests) 
