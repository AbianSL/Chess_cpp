/**
 * @file King.cc
 * @author AbianSL (you@domain.com)
 * @brief Definition of the class "King"
 * @version 0.1
 * @date 2023-04-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "../Pieces_H/King.h"

/**
 * @brief Construct a new King:: King object
 * 
 * @param piece_color That parameter determinate the 
 *                    color of the piece
 */
King::King(uint8_t piece_color, Coordinates first_position) {
  piece_color_ = piece_color;
  piece_name_ = "King";
  actual_position_ = first_position;
}

/**
 * @brief Get the Piece Name object
 * 
 * @return std::string the name of the piece 
 */
std::string King::GetPieceName() const {
  return piece_name_;
}

/**
 * @brief Get the Piece Color object
 * 
 * @return unsigned char the color of the piece
 *
 * @note 0 = white, 1 = black
 */
unsigned char King::GetPieceColor() const {
  return piece_color_;
}

/**
 * @brief Get the Actual Position object
 * 
 * @return ActualPosition the actual position of the piece
 */
Coordinates King::GetActualPosition() const {
  return actual_position_;
}

/**
 * @brief Attack the piece
 * 
 * @return true 
 * @return false 
 */
bool King::Attack(const Coordinates to_move) {
  if (ValidMove(to_move)) {
    actual_position_ = to_move; 
    return true;
  } 
  return false;
}

/**
  * @brief Move the piece
  * 
  * @return true 
  * @return false 
  */
bool King::Move(const Coordinates to_move) {
  if (ValidMove(to_move)) {
    actual_position_ = to_move; 
    return true;
  } 
  return false;
}

/**
 * @brief Check if the move is valid
 * 
 * @return true 
 * @return false 
 */
bool King::ValidMove(const Coordinates to_move) const {
  if (to_move.row_ == actual_position_.row_ + 1 ||
      to_move.row_ == actual_position_.row_ - 1) {
    if (to_move.column_ == actual_position_.column_ + 1 ||
        to_move.column_ == actual_position_.column_ - 1) {
      return true;
    }
  }
  return false;
}
