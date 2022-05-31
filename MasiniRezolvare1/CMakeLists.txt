cmake_minimum_required(VERSION 3.22)
project(Masini)

set(CMAKE_CXX_STANDARD 14)

add_executable(Masini main.cpp Masina.h MasinaOras.h Dacia.cpp Dacia.h Opel.cpp Opel.h SUV.h RangeRover.cpp RangeRover.h)
