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

void Board::Print() {
  for(unsigned colum{0}; colum < GetSize(); ++colum) {
    for(unsigned row{0}; row < GetSize(); ++row) {
      std::cout << "x ";
    }
    std::cout << std::endl;
  }
  return;
}