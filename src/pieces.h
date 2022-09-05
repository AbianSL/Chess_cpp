#ifndef PIECES_H
#define PIECES_H 

#include <vector>
namespace Characteristics {
  enum Colour {
    white,
    black,
  };

  enum NamePieces {
    king,
    queen,
    pawn,
  };

  struct Pair{
    NamePieces name;
    bool alive;
  };
}

/**
 * @brief that struct is for clasificate if the pieces are death or alive
 * 
 */
struct PiecesHealthy{
  std::vector<Characteristics::Pair> white_pieces_healthy;
  std::vector<Characteristics::Pair> black_pieces_healthy;
};

class King : PiecesHealthy{
 public:
  King(const Characteristics::Colour& kCoulor, const Characteristics::NamePieces& kName) {
    colour_king_ = kCoulor;
    if (kCoulor == Characteristics::white) {

    } else if (kCoulor == Characteristics::black) {
      white_pieces_healthy.push_back();
    } else {

    }
  }
 private:
  Characteristics::Colour colour_king_;
  const Characteristics::NamePieces name_king {Characteristics::king};
};

#endif PIECES_H