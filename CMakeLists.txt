cmake_minimum_required(VERSION 3.6)
project(fistz)
add_definitions(-std=c++1z)

add_subdirectory(src)

enable_testing()
add_subdirectory(test)
