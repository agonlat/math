cmake_minimum_required(VERSION 3.26)
project(JP)

set(CMAKE_CXX_STANDARD 17)
add_subdirectory(Test)
add_subdirectory(Headers)
add_subdirectory(Example)

include_directories(Headers)
add_library(lib method.cpp)


