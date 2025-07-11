cmake_minimum_required(VERSION 3.31)
project(myDSAlibrary)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)
add_executable(myDSAlibrary
        test/main.cpp
        src/LinkedList.cpp)
