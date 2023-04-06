/**
  * @file Position.h
  * @author AbianSL
  * @brief That file have the definition of the method from
  *        class "Position"
  * @version 0.1
  * @date 2023-04-05
  * 
  * @copyright Copyright (c) 2023
  *
  */ 

#include "Position.h"

/**
 * @brief Get the Positions object
 * 
 */
std::vector<std::pair<*Piece, ActualPosition>> Position::GetPositions() const {
  return positions_;
}