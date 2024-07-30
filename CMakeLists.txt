cmake_minimum_required(VERSION 3.22)
project(Schedule_sifter)

set(CMAKE_CXX_STANDARD 14)

add_executable(Schedule_sifter main.cpp
        object.h
        object.cpp
        list.h
        list.cpp
        person.h
        person.cpp
        comparable.h
        comparable.cpp
        schedule.h
        schedule.cpp
        timeInterval.cpp
        timeInterval.cpp
        timeInterval.h
        test.cpp
)
