/**
 * @file King.h
 * @author AbianSL (you@domain.com)
 * @brief Declaration of the class "King"
 * @version 0.1
 * @date 2023-04-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef KING_H
#define KING_H

#include "../Pieces.h"

class King : protected Piece {
 public:
  King(uint8_t piece_color);

  std::string GetPieceName() const override;
  unsigned char GetPieceColor() const override;   
  Coordinates GetActualPosition() const override;

  bool Attack(const Coordinates to_move) override;
  bool Move(const Coordinates to_move) override;
};

#endif  // KING_H
