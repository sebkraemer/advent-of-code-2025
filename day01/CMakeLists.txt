add_library(day01helper
        ReadFile.cpp
        Dialer.cpp
        Dialer.h)

add_executable(day01 day01.cpp)
target_link_libraries(day01 day01helper)
