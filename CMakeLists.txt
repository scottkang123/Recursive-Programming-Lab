cmake_minimum_required(VERSION 3.14)
project(project4)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Werror -Wextra -pedantic -pedantic-errors -D_GLIBCXX_DEBUG")
include_directories(project4)

add_executable(project4
        project4/lab04-driver.cpp
        project4/lab04.h project4/lab04.cpp)
