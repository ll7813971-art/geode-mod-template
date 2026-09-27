cmake_minimum_required(VERSION 3.21)
project(ArtartirMobileMod VERSION 1.0.0)

find_package geode REQUIRED

file(GLOB_RECURSE SOURCES src/*.cpp)
add_geode_mod(${PROJECT_NAME} ${SOURCES})
