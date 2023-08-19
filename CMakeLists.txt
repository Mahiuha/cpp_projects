cmake_minimum_required(VERSION 3.24)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 20)

add_executable(HelloWorld main.cpp random.cpp dice.cpp algorithms/bubble_sort.cpp algorithms/sort.h
        vuln.cpp
        login.cpp)
