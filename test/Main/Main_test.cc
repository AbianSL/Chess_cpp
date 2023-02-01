/**
 * @file main_test.cc
 * @author Abian Santana Ledesma
 * @brief 
 * @version 0.1
 * @date 2023-01-31
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <gtest/gtest.h>
#include <iostream>

GTEST_API_ int main(int argc, char **argv) {
        std::cout << "Executing main() from program gtest_main.cc\n";
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}