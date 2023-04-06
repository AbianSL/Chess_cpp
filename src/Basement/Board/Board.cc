/**
 * @file Board.cc
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>

#include "Board.h"


// -------------------
// Constructors
// -------------------

/**
 * @brief Construct a new Board:: Board object
 * 
 * @param kBoard is the other board object to copy
 */
Board::Board(const Board& kBoard) {
  size_ = kBoard.size_;
  rows_ = kBoard.rows_;
  colums_ = kBoard.colums_;
}


/**
 * @brief Construct a new Board:: Board object
 * 
 * @param kRows The number of rows
 * @param kColums The number of colums
 */
Board::Board(const unsigned short& kRows, const unsigned short& kColums) {
  size_ = kRows * kColums;
  rows_ = kRows;
  colums_ = kColums;
}

// -------------------
// Getters and Setters
// -------------------

/**
 * @brief Get the Size of the board
 * 
 * @return unsigned short it returns the size of the board 
 */
unsigned short Board::GetSize() const {
  return size_;
}

/**
 * @brief Get the Rows of the board
 * 
 * @return unsigned short it returns the number of rows of the board 
 */
unsigned short Board::GetRows() const {
  return rows_;
}

/**
 * @brief Get the Colums of the board
 * 
 * @return unsigned short it returns the number of colums of the board 
 */
unsigned short Board::GetColums() const {
  return colums_;
}

void Board::Print() {
  for(unsigned colum{0}; colum < GetSize(); ++colum) {
    for(unsigned row{0}; row < GetSize(); ++row) {
      std::cout << "x ";
    }
    std::cout << std::endl;
  }
  return;
}
