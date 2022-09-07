#ifndef PIECES_H
#define PIECES_H 

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

// that global vector is to store the white and black pieces that live
std::vector<Characteristics::Pair> white_pieces_healthy;
std::vector<Characteristics::Pair> black_pieces_healthy;

void Constructor(const Characteristics::Colour& kCoulor, const Characteristics::NamePieces& kName);

class King {
 public:
  King(const Characteristics::Colour& kCoulor, Characteristics::NamePieces& name);
 private:
  Characteristics::Colour colour_king_;
  const Characteristics::NamePieces name_king {Characteristics::king};
};


#endif PIECES_H