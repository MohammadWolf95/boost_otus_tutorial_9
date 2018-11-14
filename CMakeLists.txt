cmake_minimum_required (VERSION 3.2)
project (RandomAccessIt VERSION 0.0.$ENV{TRAVIS_BUILD_NUMBER})

#set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
#set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
#set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

#include_directories("${PROJECT_SOURCE_DIR}")

find_package(Boost REQUIRED)

configure_file(version.h.in version.h)

#install(TARGETS RandomAccessIt RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT abdulvadudovmagomed@mail.ru)

include(CPack)

enable_testing()

add_subdirectory (src) 
add_subdirectory (tests) 
