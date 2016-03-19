cmake_minimum_required(VERSION 3.4)
project(cpp_experiments)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(cpp_experiments ${SOURCE_FILES})