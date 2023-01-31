# @author Abian Santana Ledesma
# @date JAN 31 2022
# @brief CMakeLists.txt for the Chess program
# CMakeLists.txt defines the whole build
# CMake reads CMakeLists.txt sequentially
#
# Build process:
#   1. cd <project_folder>
#   2. mkdir build
#   3. cd build
#   4. cmake ..
#   5. make


cmake_minimum_required(VERSION 3.1)  # Mandatory

# set the project name 
project(Chess                # Mandatory
    VERSION 1.0
    DESCRIPTION "A simple CMake project for the Fibonacci Sum application"
    LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17) 						# Use c++14
set(CMAKE_CXX_STANDARD_REQUIRED True)

# tell cmake to output binaries here:
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# Debug and release flags
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# tell cmake where to look for *.h files
include_directories(${PROJECT_SOURCE_DIR}/src)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Adds an executable target called "main" to be built from the source files listed in the command invocation.
add_executable(Chess
    src/Basement/Board.cc
    src/Basement/Board.h
    src/Basement/Pieces.cc
    src/Basement/Pieces.h
    src/Pieces/Bishop.cc
    src/Pieces/Bishop.h
    src/Pieces/King.cc
    src/Pieces/King.h
    src/Pieces/Knight.cc
    src/Pieces/Knight.h
    src/Pieces/Pawn.cc
    src/Pieces/Pawn.h
    src/Pieces/Queen.cc
    src/Pieces/Queen.h
    src/Pieces/Rook.cc
    src/Pieces/Rook.cc
    src/Main/Main.cc
    )

add_executable(runTest
    src/Basement/Board.cc
    src/Basement/Board.h
    src/Basement/Pieces.cc
    src/Basement/Pieces.h
    src/Pieces/Bishop.cc
    src/Pieces/Bishop.h
    src/Pieces/King.cc
    src/Pieces/King.h
    src/Pieces/Knight.cc
    src/Pieces/Knight.h
    src/Pieces/Pawn.cc
    src/Pieces/Pawn.h
    src/Pieces/Queen.cc
    src/Pieces/Queen.h
    src/Pieces/Rook.cc
    src/Pieces/Rook.cc
    test/Main/Main_test.cc
)


target_link_libraries(runTest ${GTEST_LIBRARIES} pthread)

# Add expected compiler features to a target.
target_compile_features(Chess PRIVATE cxx_std_17)

# Add compile options to a target.
target_compile_options(Chess PRIVATE -Wall -Wextra -Wpedantic)