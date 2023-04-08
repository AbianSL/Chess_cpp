/**
 * @file Bishop_test.cc
 * @author AbianSL
 * @brief Test file for Possible Moves of Bishop
 * @version 0.1
 * @date 2023-04-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "gtest/gtest.h"

#include "../../src/Pieces/Pieces_H/Bishop.h" // Bishop
#include "../../src/Pieces/Pieces.h"          // Coordinates

// Test if the Bishop can move right
TEST(BishopTestMove, BishopMoveRight) {
  Coordinates Position(0, 0);
  Bishop bishop(1, Position);
  Coordinates Destination(1, 1);
  EXPECT_EQ(bishop.Move(Destination), true);
}
