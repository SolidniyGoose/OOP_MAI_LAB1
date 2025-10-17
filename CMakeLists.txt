cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(lab1)

find_package(GTest REQUIRED)


add_executable(main
    src/function.cpp
    main.cpp
)

add_executable(tests
    src/function.cpp
    test/tests.cpp
)

target_link_libraries(tests PRIVATE gtest gtest_main)


target_include_directories(main PRIVATE include)
target_include_directories(tests PRIVATE include)