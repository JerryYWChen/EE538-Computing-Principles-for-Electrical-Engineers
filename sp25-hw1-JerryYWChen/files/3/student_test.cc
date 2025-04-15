#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(CountNumberOfSpaces, Empty) { EXPECT_EQ(CountNumberOfSpaces(""), 0); }

TEST(CountNumberOfSpaces, OneSpace) {
  EXPECT_EQ(CountNumberOfSpaces("this is"), 1);
}

TEST(CountNumberOfSpaces, TwoSpaces) {
  EXPECT_EQ(CountNumberOfSpaces("this is a"), 2);
}

TEST(CountNumberOfSpaces, ThreeSpaces) {
  EXPECT_EQ(CountNumberOfSpaces("this is a test"), 3);
}

TEST(CountNumberOfSpaces, MultipleSpaces) {
  EXPECT_EQ(CountNumberOfSpaces("this    is a"), 5);
}