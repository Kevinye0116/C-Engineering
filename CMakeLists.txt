cmake_minimum_required(VERSION 3.25)
project(C-Engineering C)

set(CMAKE_C_STANDARD 17)

add_subdirectory(week3)
add_subdirectory(week4)
add_subdirectory(week5)
add_subdirectory(week6)
add_subdirectory(week7)
add_subdirectory(week8)

add_executable(escape escape.c)
add_executable(test test.c)
