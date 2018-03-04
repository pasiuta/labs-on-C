cmake_minimum_required(VERSION 3.8)
project(lab_1)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c dk_tool.c dk_tool.h)
add_executable(lab_1 ${SOURCE_FILES} dk_tool.c dk_tool.h)