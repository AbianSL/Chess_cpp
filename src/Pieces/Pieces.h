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

#include <string> // std::string
#include <cstdint> // int8_t

class Piece {
 public:
  virtual std::string GetPieceName() const = 0;
  virtual unsigned char GetPieceColor() const = 0;

  // virtual bool IsBeingAttacked() const = 0;
  // virtual bool IsBeingMoved() const = 0;

  // virtual bool Attack() const = 0;
  //  virtual bool Move() const = 0;
 protected:
  uint8_t piece_color_; // 0 = white, 1 = black
  std::string piece_name_;
};
