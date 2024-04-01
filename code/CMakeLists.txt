cmake_minimum_required(VERSION 3.0)  # Minimum CMake version required

project(game_of_hex)  # Name your project

# Add the executable target
add_executable(game_of_hex game_of_hex.cpp classes.cpp)

# Optionally, if classes.h is included in main.cpp or classes.cpp, you can add the directory to include
# target_include_directories(MyProject PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
