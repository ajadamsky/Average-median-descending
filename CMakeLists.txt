cmake_minimum_required(VERSION 3.8)
project(hand_in_2_1)

set(CMAKE_CXX_STANDARD 14)
set (CMAKE_CXX_FLAGS " -Wall -pedantic")

set(SOURCE_FILES main.cpp)
add_executable(hand_in_2_1 ${SOURCE_FILES})