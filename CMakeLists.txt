cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g" CACHE STRING "Default CXX options" FORCE)
project(classes)

set(CMAKE_CXX_STANDARD 14)

add_executable(classes main.cpp Point.cpp Point.h PerimeterAware.h Figure.cpp Figure.h Rectangle.cpp Rectangle.h Square.cpp Square.h AreaAware.h Circle.cpp Circle.h Triangle.cpp Triangle.h)
