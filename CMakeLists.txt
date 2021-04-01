#cmake_minimum_required(VERSION 3.17)
cmake_minimum_required(VERSION 3.16)


project(squareMan LANGUAGES CXX VERSION 1.1.0)

set(CMAKE_CXX_STANDARD 14)

add_executable(squareMan main.cpp Game.hpp Game.cpp Ball.cpp Ball.hpp Player.cpp Player.hpp)

target_compile_options(squareMan
        PUBLIC
        -W -Wextra
        # Debug option
        -g
        )

find_package(SFML 2 COMPONENTS system audio network window graphics QUIET)


target_link_libraries(squareMan
        PUBLIC
        sfml-system sfml-graphics sfml-window
        )

install(TARGETS squareMan DESTINATION ${CMAKE_SOURCE_DIR})