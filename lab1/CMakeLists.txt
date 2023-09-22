cmake_minimum_required(VERSION 3.24)
project(oop_lab1)

set(CMAKE_CXX_STANDARD 17)
enable_testing()

add_subdirectory(googletest)
include_directories(include)

add_executable(oop_lab1 main.cpp src/Solution.cpp)
add_executable(oop_lab1_test test/tests.cpp src/Solution.cpp)

target_link_libraries(oop_lab1_test gtest_main)
add_test(NAME BASIC COMMAND oop_lab1_test)
