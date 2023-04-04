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
King::King(uint8_t piece_color) {
  piece_color_ = piece_color;
  piece_name_ = "King";
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

