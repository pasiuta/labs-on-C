cmake_minimum_required(VERSION 3.8)
project(HW2)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c dk_triangle.c dk_triangle.h)
add_executable(HW2 ${SOURCE_FILES} dk_triangle.c dk_triangle.h)