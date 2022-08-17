#ifndef BOARD_H
#define BOARD_H

#include "pieces.h"

class Board{
 public:
  Board(const unsigned kSize) {};
  Board() {}:
  void Print();
  unsigned GetSize() const {return size_;}
 private:
  const unsigned size_{7};
};

#endif