cmake_minimum_required(VERSION 3.25)
project(instagramfollowers)

set(CMAKE_CXX_STANDARD 17)

add_executable(instagramfollowers src/main.cpp src/Reader.cpp src/Reader.h src/Storer.cpp src/Storer.h src/Operations.cpp src/Operations.h src/Display.cpp src/Display.h src/Menu.cpp src/Menu.h)
