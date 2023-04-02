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
set(CMAKE_CXX_STANDARD 17) 						# Use c++17
set(CMAKE_CXX_STANDARD_REQUIRED True)

# tell cmake to output binaries here:
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# Debug and release flags
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# tell cmake where to look for *.h files
include_directories(${PROJECT_SOURCE_DIR}/src)

# Adds an executable target called "main" to be built from the source files listed in the command invocation.
add_executable(Chess
    src/Basement/Board/Board.cc
    src/Basement/Board/Board.h
    src/Basement/Final/Score.cc
    src/Basement/Final/Score.h
    src/Basement/Menu/GameMenu.cc
    src/Basement/Menu/GameMenu.h
    src/Basement/Operations/Operations.cc
    src/Basement/Operations/Operations.h
    
    src/Pieces/Pieces.cc
    src/Pieces/Pieces.h
    src/Pieces/Pieces_CC/Bishop.cc
    src/Pieces/Pieces_CC/King.cc
    src/Pieces/Pieces_CC/Knight.cc
    src/Pieces/Pieces_CC/Pawn.cc
    src/Pieces/Pieces_CC/Rook.cc
    src/Pieces/Pieces_CC/Queen.cc
    src/Pieces/Pieces_H/Bishop.h
    src/Pieces/Pieces_H/King.h
    src/Pieces/Pieces_H/Knight.h
    src/Pieces/Pieces_H/Pawn.h
    src/Pieces/Pieces_H/Queen.h
    src/Pieces/Pieces_H/Rook.h

    src/States/StatesPieces.cc
    src/States/StatesPieces.h
    src/States/Dead/DeadPieces.h
    src/States/Dead/DeadPieces.cc
    src/States/Alive/AlivePieces.h
    src/States/Alive/AlivePieces.cc
    src/States/Position/Position.h
    src/States/Position/Position.cc

    src/Main.cc
    )

# Locate GTest
find_package(GTest)
if (GTEST_FOUND)
  include_directories(${GTEST_INCLUDE_DIRS})

  add_executable(runTest
      src/Basement/Board/Board.cc
      src/Basement/Board/Board.h
      src/Basement/Final/Score.cc
      src/Basement/Final/Score.h
      src/Basement/Menu/GameMenu.cc
      src/Basement/Menu/GameMenu.h
      src/Basement/Operations/Operations.cc
      src/Basement/Operations/Operations.h

      src/Pieces/Pieces.cc
      src/Pieces/Pieces.h
      src/Pieces/Pieces_CC/Bishop.cc
      src/Pieces/Pieces_CC/King.cc
      src/Pieces/Pieces_CC/Knight.cc
      src/Pieces/Pieces_CC/Pawn.cc
      src/Pieces/Pieces_CC/Rook.cc
      src/Pieces/Pieces_CC/Queen.cc
      src/Pieces/Pieces_H/Bishop.h
      src/Pieces/Pieces_H/King.h
      src/Pieces/Pieces_H/Knight.h
      src/Pieces/Pieces_H/Pawn.h
      src/Pieces/Pieces_H/Queen.h
      src/Pieces/Pieces_H/Rook.h

      src/States/StatesPieces.cc
      src/States/StatesPieces.h
      src/States/Dead/DeadPieces.h
      src/States/Dead/DeadPieces.cc
      src/States/Alive/AlivePieces.h
      src/States/Alive/AlivePieces.cc
      src/States/Position/Position.h
      src/States/Position/Position.cc

      test/Main/Main_test.cc
  )
  target_link_libraries(runTest ${GTEST_LIBRARIES} pthread)
else()
  # if the user don't have gtest installed
  message(WARNING "To Execute the unit test you should install gtest")
endif()

# Add expected compiler features to a target.
target_compile_features(Chess PRIVATE cxx_std_17)

# Add compile options to a target.
target_compile_options(Chess PRIVATE -Wall -Wextra -Wpedantic)