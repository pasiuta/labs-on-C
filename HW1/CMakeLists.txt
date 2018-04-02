cmake_minimum_required(VERSION 3.8)
project(HW1)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c dk_tool.h dk_tool.c)
add_executable(HW1 ${SOURCE_FILES} dk_tool.h dk_tool.c)