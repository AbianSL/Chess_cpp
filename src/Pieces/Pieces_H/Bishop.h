/**
 * @file Bishop.h
 * @author AbianSL
 * @brief That File declare the class "Bishop"
 * @version 0.1
 * @date 2023-04-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef BISHOP_H_
#define BISHOP_H_

#include "../Pieces.h"

class Bishop : protected Piece {
 public:
  Bishop(const uint8_t piece_color, const Coordinates actual_position);

  std::string GetPieceName() const override;
  unsigned char GetPieceColor() const override;
  Coordinates GetActualPosition() const override;

  bool Attack(const Coordinates to_move) override;
  bool Move(const Coordinates to_move) override;

  bool ValidMove(const Coordinates to_move) const override;
};

#endif  // BISHOP_H_
