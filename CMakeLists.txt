cmake_minimum_required(VERSION 3.7)
project(timeToLunch)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)
add_executable(timeToLunch ${SOURCE_FILES})
install(TARGETS timeToLunch
        RUNTIME DESTINATION $ENV{HOME}/bin)
