cmake_minimum_required(VERSION 3.20)
project(pluralsight)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(pluralsight
        Account.cpp
        Account.h
        class.cpp
        Transaction.cpp
        Transaction.h)
