#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(UniqueVectorNotBySetTest, Basic){
    std::vector<int> v={1, 2, 2, 4};
    UniqueVectorNotBySet(v);
    std::vector<int> expected = {1, 2, 4};
    EXPECT_EQ(v, expected);
}

TEST(UniqueVectorNotBySetTest, Unique){
    std::vector<int> v={1, 2, 3, 4};
    UniqueVectorNotBySet(v);
    std::vector<int> expected = {1, 2, 3, 4};
    EXPECT_EQ(v, expected);
}

TEST(UniqueVectorNotBySetTest, Same){
    std::vector<int> v={3, 3, 3, 3};
    UniqueVectorNotBySet(v);
    std::vector<int> expected = {3};
    EXPECT_EQ(v, expected);
}

TEST(UniqueVectorNotBySetTest, Empty){
    std::vector<int> v={};
    UniqueVectorNotBySet(v);
    std::vector<int> expected = {};
    EXPECT_EQ(v, expected);
}

TEST(UniqueVectorBySetTest, Basic){
    std::vector<int> v={1,2,2,4};
    UniqueVectorBySet(v);
    std::vector<int> expected = {1,2,4};
    EXPECT_EQ(v, expected);
}

TEST(UniqueVectorBySetTest, Unique){
    std::vector<int> v={1, 2, 3, 4};
    UniqueVectorBySet(v);
    std::vector<int> expected = {1, 2, 3, 4};
    EXPECT_EQ(v, expected);
}

TEST(UniqueVectorBySetTest, Same){
    std::vector<int> v={3, 3, 3, 3};
    UniqueVectorBySet(v);
    std::vector<int> expected = {3};
    EXPECT_EQ(v, expected);
}

TEST(UniqueVectorBySetTest, Empty){
    std::vector<int> v={};
    UniqueVectorBySet(v);
    std::vector<int> expected = {};
    EXPECT_EQ(v, expected);
}

TEST(IntersectVectorsTest, Basic){
    std::vector<int> v1 = {1,2,2,3};
    std::vector<int> v2 = {3,4,4,5};

    std::vector<int> expected = {3};
    EXPECT_EQ(IntersectVectors(v1, v2), expected);
}

TEST(IntersectVectorsTest, NoCommon){
    std::vector<int> v1 = {1,2,3};
    std::vector<int> v2 = {4,5,6};

    std::vector<int> expected = {};
    EXPECT_EQ(IntersectVectors(v1, v2), expected);
}

TEST(IntersectVectorsTest, AllCommon){
    std::vector<int> v1 = {1,2,3};
    std::vector<int> v2 = {1,2,3};

    std::vector<int> expected = {1,2,3};
    EXPECT_EQ(IntersectVectors(v1, v2), expected);
}

TEST(IntersectVectorsTest, EmptyVector){
    std::vector<int> v1 = {};
    std::vector<int> v2 = {1,2,3};

    std::vector<int> expected = {};
    EXPECT_EQ(IntersectVectors(v1, v2), expected);
}

TEST(DiffVectorsTest, Basic){
    std::vector<int> v1 = {1,2,2,3};
    std::vector<int> v2 = {3,4,4,5};

    std::set<int> expected = {1,2};
    EXPECT_EQ(DiffVectors(v1, v2), expected);
}

TEST(DiffVectorsTest, Same){
    std::vector<int> v1 = {1,2,3};
    std::vector<int> v2 = {1,2,3};

    std::vector<int> expected = {};
    EXPECT_EQ(DiffVectors(v1, v2), expected);
}

TEST(DiffVectorsTest, Empty){
    std::vector<int> v1 = {1,2,3};
    std::vector<int> v2 = {};

    std::vector<int> expected = {1,2,3};
    EXPECT_EQ(DiffVectors(v1, v2), expected);
}
