/**
 * @file Pieces.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef PIECES_H
#define PIECES_H 

#pragma once

#include <vector>
namespace Characteristics {
  /**
   * @brief the list of colour that exist
   */
  enum Colour {
    white,
    black,
  };

  /**
   * @brief name of all piece in chess
   */
  enum NamePieces {
    king,
    queen,
    pawn,
  };

  /**
   * @brief the structure basic to know if the piece exist and the name of it
   */
  struct Pair{
    NamePieces name;
    bool alive;
  };
}

class Pieces {
 public:
  Pieces(const Characteristics::Colour& kCoulor, const Characteristics::NamePieces& kName);
  void Print();

 private:
  std::vector<Characteristics::Pair> white_pieces_healthy;
  std::vector<Characteristics::Pair> black_pieces_healthy;
}


#endif