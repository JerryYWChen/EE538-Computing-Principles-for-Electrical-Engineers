#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(Flatten3DVector, Empty) {
  std::vector<std::vector<std::vector<int>>> in = {};
  auto out = Flatten3DVector(in);
  std::vector<int> expected = {};
  EXPECT_EQ(out, expected);
}

TEST(Flatten3DVector, Test1) {
  std::vector<std::vector<std::vector<int>>> in = {
      {{1, 2}, {3, 4}}, {{5}, {6}, {}}, {{7, 8}}};
  auto out = Flatten3DVector(in);
  std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8};
  EXPECT_EQ(out, expected);
}
