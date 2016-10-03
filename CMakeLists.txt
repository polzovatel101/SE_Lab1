cmake_minimum_required(VERSION 3.6)
project(yanovoy01)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp  CViewWindowInfo.cpp CWindow.cpp)
add_executable(yanovoy01 ${SOURCE_FILES})