#ifndef PIECES_H
#define PIECES_H 

#include <vector>
#include <pair_t.h>

enum Colour {
  white,
  black,
};

enum NamePieces {
  king,
  queen,
  pawn,
};

struct PiecesHealthy{
  std::vector<pair_t<int>> white_pieces_healthy;
  std::vector<pair_t<int>> black_pieces_healthy;
};

class King {
 public:
  King(const Colour& kCoulor, const NamePieces kName) {
    colour_king_ = kCoulor;
    if (kCoulor == white) {
      white_pieces_healthy.
    } else if () {

    } else {

    }
  }
 private:
  Colour colour_king_;
  const NamePieces name_king {king};
};

#endif PIECES_H