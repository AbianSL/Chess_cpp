/**
  * @file Position.h
  * @author AbianSL
  * @brief That file hav the delcaration fo the class
  *        "Position"
  * @version 0.1
  * @date 2023-04-05
  * 
  * @copyright Copyright (c) 2023
  *
  */ 

#ifndef POSITION_H
#define POSITION_H

#pragma once

#include <cstdint>  // uint8_t
#include <vector>   // std::vector
#include <utility>  // std::pair

#include "../../Pieces/Pieces.h"

struct ActualPosition {
  uint8_t row_;
  uint8_t colum_;
};

class Position {
 public:
  std::vector<std::pair<*Piece, ActualPosition>> GetPositions() const;
 private:
  std::vector<std::pair<*Piece, ActualPosition>> positions_;
};

#endif    //POSITION_H
