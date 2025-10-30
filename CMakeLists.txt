cmake_minimum_required(VERSION 3.10)
project(lab1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror=maybe-uninitialized")

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.15.0
)

FetchContent_MakeAvailable(googletest)

add_library(lab_lib 
    src/function.cpp
)

add_executable(main main.cpp)
target_link_libraries(main lab_lib)

enable_testing()
add_executable(tests test/tests.cpp)
target_link_libraries(tests lab_lib gtest gtest_main)

add_test(NAME UnitTests COMMAND tests)

target_include_directories(lab_lib PUBLIC include)
