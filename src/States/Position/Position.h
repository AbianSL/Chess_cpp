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

class Position {
 public:
  std::vector<Piece> GetPositions() const;
 private:
  std::vector<Piece> positions_;
};

#endif    //POSITION_H
