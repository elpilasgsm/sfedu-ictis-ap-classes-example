cmake_minimum_required(VERSION 3.21)
project(classes)

set(CMAKE_CXX_STANDARD 14)

add_executable(classes main.cpp Point.cpp Point.h PerimeterAware.h Figure.cpp Figure.h Rectangle.cpp Rectangle.h Square.cpp Square.h AreaAware.h)
