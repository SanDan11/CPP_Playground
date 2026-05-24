cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(main src/main.cpp src/item.cpp src/player.cpp src/game.cpp)

target_include_directories(main PRIVATE include)