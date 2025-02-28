/**
 * @file Position.h
 * @brief Defines the structure and functions for representing a position in a grid.
 */

export module Position;

#include <cstdint>  ///< For uint8_t data type

/**
 * @struct Position
 * @brief Structure representing a position in a grid with a row and a column.
 *
 * This structure is used to store the coordinates of a cell in a grid,
 * specifying the row (row) and the column (column) where it is located.
 */
export struct Position {
  /**
   * @brief Default constructor that initializes the position to (0, 0).
   */
  Position() : row_(0), column_(0) {}

  /**
   * @brief Constructor that initializes the position with the specified row and column values.
   * 
   * @param row The row of the position.
   * @param column The column of the position.
   */
  Position(uint8_t row, uint8_t column) : row_(row), column_(column) {}

  uint8_t row_;
  uint8_t column_;  
};
