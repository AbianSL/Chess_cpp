/**
 * @file Board.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef BOARD_H
#define BOARD_H

#pragma once

#include "Pieces.h"

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