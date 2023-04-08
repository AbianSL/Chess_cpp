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

#include "../../src/Pieces/Pieces_H/Bishop.h"
#include "../../src/Pieces/Pieces.h"

// Test if the Bishop can move right
TEST(BishopTestMove, BishopMoveRight) {
  Coordinates Position;
  position.column = 0;
  position.row = 0;
  Bishop bishop(1, Position);
  EXPECT_EQ(bishop.move(1, 1), true);
}
