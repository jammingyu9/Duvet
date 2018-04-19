cmake_minimum_required(VERSION 3.5.1)
project(Duvet)

set(CMAKE_CXX_STANDARD 11)

file(GLOB SOURCES "src/*.cpp")

add_executable(duvet ${SOURCES})
