cmake_minimum_required(VERSION 3.5.1)
project(Duvet)

include_directories(include)

# add manually
# set(SOURCES src/main.cpp src/cell.cpp)

file(GLOB SOURCES "src/*.cpp")

add_executable(duvet ${SOURCES})
