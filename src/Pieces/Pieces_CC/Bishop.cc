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

/**
 * @brief Construct a new Bishop:: Bishop object
 * 
 * @param piece_color 
 * @param actual_position 
 */
Bishop::Bishop(const uint8_t piece_color, const Coordinates actual_position) {
  piece_color_ = piece_color;
  actual_position_ = actual_position;
  piece_name_ = "Bishop";
}

/**
  * @brief Getter to get the name of the piece 
  * @return std::string
  */
std::string Bishop::GetPieceName() const {
  return piece_name_;
}


/**
  * @brief Getter to get the color of the piece 
  * @return unsigned char
  */
unsigned char Bishop::GetPieceColor() const {
  return piece_color_;
}

/**
  * @brief Getter to get the actual position of the piece 
  * @return Coordinates
  */ 
Coordinates Bishop::GetActualPosition() const {
  return actual_position_;
}

bool Bishop::Attack(const Coordinates to_move) {
  if (ValidMove(to_move)) {
    return true;
  }
  return false;
}

/**
  * @brief Method to move the piece 
  * @param move_position 
  * @return bool
  */
bool Bishop::Move(const Coordinates to_move) {
  if (ValidMove(to_move)) {
    actual_position_ = to_move;
    return true;
  }
  return false;
}

/**
  * @brief Method to check if the move is valid 
  * @param move_position 
  * @return bool
  */
bool Bishop::ValidMove(const Coordinates to_move) const {
  if (actual_position_.column_ - to_move.column_ == actual_position_.row_ - to_move.row_) {
    return true;
  } 
  return false;
}

