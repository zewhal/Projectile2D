cmake_minimum_required(VERSION 4.2.0)

set(CMAKE_CXX_COMPILER "clang++")

project(Projectile2D
    VERSION 1.0
    DESCRIPTION "Simple physics simulation with Raylib"
    LANGUAGES CXX
)

find_library(RAYLIB_LIBRARY NAMES raylib)

if(NOT RAYLIB_LIBRARY)
    message(FATAL_ERROR "Raylib not found. Make sure it's installed and accessible.")
endif()

add_executable(Projectile2D src/main.cpp)

target_link_libraries(Projectile2D PRIVATE
    ${RAYLIB_LIBRARY}
    GL
    m
    pthread
    dl
    rt
    X11
)

target_compile_options(Projectile2D PRIVATE -Wall -Wextra -Wpedantic)
