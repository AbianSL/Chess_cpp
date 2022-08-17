#include <iostream>

#include "board.h"

void Board::Print() {
  for(unsigned colum{0}; colum < GetSize(); ++colum) {
    for(unsigned row{0}; row < GetSize(); ++row) {
      std::cout << "x ";
    }
    std::cout << std::endl;
  }
  return;
}