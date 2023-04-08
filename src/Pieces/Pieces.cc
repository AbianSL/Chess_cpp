/**
 * @file Pieces.cc
 * @author AbianSL
 * @brief That File define the struct "Coordinates" and class Pieces 
 * @version 0.1
 * @date 2023-04-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "Pieces.h"

/**
 * @brief Construct a new Coodinates:: Coodinates object
 * 
 */
Coordinates::Coordinates() : row_{0}, column_{0} {}

/**
 * @brief Construct a new Coodinates:: Coodinates object
 * 
 * @param x 
 * @param y 
 */
Coordinates::Coordinates(const uint8_t row, const uint8_t column) : row_{row}, column_{column} {}

/**
 * @brief Construct a new Piece:: Piece object
 * 
 */
Piece::Piece() : piece_color_{0}, piece_name_{""}, actual_position_{0, 0} {}
