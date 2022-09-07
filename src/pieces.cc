#include <iostream>

#include "pieces.h"

/**
 * @brief that function is for construct the concept basic from pieces 
 * 
 * @param kCoulor is the colour of the piece
 * @param kName is the name of the piece
 */
void Constructor(const Characteristics::Colour& kCoulor, const Characteristics::NamePieces& kName) {
    Characteristics::Pair new_pair;
    new_pair.alive = true;
    new_pair.name = kName;
  if (kCoulor == Characteristics::white) {
    white_pieces_healthy.push_back(new_pair);
  } else if (kCoulor == Characteristics::black) {
    black_pieces_healthy.push_back(new_pair);
  } else {
    std::cout << "happend a Fatal error, the piece is not white or black" << std::endl;
    exit(EXIT_SUCCESS);
  }
}

King::King(const Characteristics::Colour& kCoulor, Characteristics::NamePieces& name) {
  colour_king_ = kCoulor;
  name = name_king;
  Constructor(colour_king_, name_king);
}