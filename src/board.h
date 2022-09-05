#ifndef BOARD_H
#define BOARD_H

#include "pieces.h"

class Board{
 public:
  Board(const unsigned kSize) {size_ = kSize;}
  Board() {size_ = 7;}
  void Print();
  unsigned GetSize() const {return size_;}
 private:
  
  unsigned size_;
};

#endif