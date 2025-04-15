#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------

TEST(SetDifferenceTest, Basic) {
    std::set<int> set1 = {1, 2, 3, 4};
    std::set<int> set2 = {3, 4, 5, 6};

    std::set<int> result = setDifference(set1, set2);
    std::set<int> expected = {1, 2};

    EXPECT_EQ(result, expected);
}

TEST(SetDifferenceTest, Difference) {
    std::set<int> set1 = {1, 2, 3};
    std::set<int> set2 = {4, 5, 6};

    std::set<int> result = setDifference(set1, set2);
    EXPECT_EQ(result, set1);
}

TEST(SetDifferenceTest, Empty) {
    std::set<int> set1 = {1, 2, 3};
    std::set<int> set2 = {};

    std::set<int> result = setDifference(set1, set2);
    EXPECT_EQ(result, set1);
}

TEST(SetOperationsTest, True) {
    std::set<int> set1 = {1, 2, 3};
    std::set<int> set2 = {4, 5, 6};

    EXPECT_TRUE(areDisjoint(set1, set2));
}

TEST(SetOperationsTest, DisjointFalse) {
    std::set<int> set1 = {1, 2, 3};
    std::set<int> set2 = {3, 4, 5};

    EXPECT_FALSE(areDisjoint(set1, set2));
}

TEST(SetOperationsTest, Empty) {
    std::set<int> set1 = {};
    std::set<int> set2 = {};

    EXPECT_TRUE(areDisjoint(set1, set2));
}
