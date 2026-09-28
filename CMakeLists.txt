cmake_minimum_required(VERSION 3.21)
project(ArtartirMobileMod)

find_package(geode REQUIRED)

file(GLOB_RECURSE SOURCES src/*.cpp)

add_geode_mod(
    ${PROJECT_NAME}
    ${SOURCES}
)
