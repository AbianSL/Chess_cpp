/**
 * @file Bishop.cc
 * @author AbianSL
 * @brief That File definition of the class "Bishop"
 * @version 0.1
 * @date 2023-04-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "../Pieces_H/Bishop.h"

Bishop::Bishop(const uint8_t piece_color, const Coordinates actual_position) {
  piece_color_ = piece_color;
  actual_position_ = actual_position;
  piece_name_ = "Bishop";
}

std::string Bishop::GetPieceName() const {
  return piece_name_;
}

unsigned char Bishop::GetPieceColor() const {
  return piece_color_;
}

Coordinates Bishop::GetActualPosition() const {
  return actual_position_;
}


