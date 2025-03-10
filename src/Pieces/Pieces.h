/**
 * @file Pieces.h
 * @author AbianSL
 * @brief That File declare the generic class "Piece"
 * @version 0.1
 * @date 2023-04-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef PIECES_H_
#define PIECES_H_

#include <string> // std::string

import Position;

class Piece {
 public:
  Piece();
  virtual std::string GetPieceName() const = 0;
  virtual unsigned char GetPieceColor() const = 0;
  virtual Coordinates GetActualPosition() const = 0;

  // virtual bool IsBeingAttacked() const = 0;
  // virtual bool IsBeingMoved() const = 0;

  virtual bool Attack(const Coordinates to_move) = 0;
  virtual bool Move(const Coordinates to_move) = 0;
  
  virtual bool ValidMove(const Coordinates to_move) const = 0;
protected:
  uint8_t piece_color_; // 0 = white, 1 = black
  std::string piece_name_;
  Coordinates actual_position_;
};

#endif  // PIECES_H_
