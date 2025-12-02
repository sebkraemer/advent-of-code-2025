cmake_minimum_required(VERSION 4.0)

add_library(day01helper readfile.cpp
        Dialer.cpp
        Dialer.h)

add_executable(day01 day01.cpp)
target_link_libraries(day01 day01helper)
