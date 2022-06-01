cmake_minimum_required(VERSION 3.22)
project(FormeGeometrice)

set(CMAKE_CXX_STANDARD 14)

add_executable(FormeGeometrice main.cpp Forma.h Forme.cpp Forme.h Cerc.cpp Cerc.h Oval.cpp Oval.h Dreptunghi.cpp Dreptunghi.h DreptunghiRotit.cpp DreptunghiRotit.h)
