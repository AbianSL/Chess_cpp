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
  Board(const Board& kBoard);
  Board(const unsigned short& kRows = 7, const unsigned short& kColums = 7);
  void Print();
  unsigned short GetSize() const;
  unsigned short GetRows() const;
  unsigned short GetColums() const;
 
 private:
  unsigned short size_;
  unsigned short rows_;
  unsigned short colums_;
};

#endif