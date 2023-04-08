/**
 * @file Pieces.cc
 * @author AbianSL
 * @brief That File define the struct "Coordinates" 
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
 * @param x 
 * @param y 
 */
Coordinates::Coordinates(const uint8_t row, const uint8_t column) : row_{row}, column_{column} {}
