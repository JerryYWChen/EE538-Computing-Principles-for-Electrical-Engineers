#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(DoubleStackTest, Constructor) {
    DoubleStack DS;
    EXPECT_TRUE(DS.empty());
    EXPECT_EQ(DS.size(), 0);
}

TEST(DoubleStackTest, Push) {
    DoubleStack DS;
    DS.push(1);
    EXPECT_FALSE(DS.empty());
    EXPECT_EQ(DS.size(), 1);
    EXPECT_EQ(DS.top(), 1);

    DS.push(2);
    EXPECT_EQ(DS.size(), 2);
    EXPECT_EQ(DS.top(), 2);

    DS.push(3);
    EXPECT_EQ(DS.size(), 3);
    EXPECT_EQ(DS.top(), 3);
}

TEST(DoubleStackTest, Pop) {
    DoubleStack DS;
    DS.pop();
    EXPECT_EQ(DS.size(), 0);
    
    DS.push(1);
    DS.push(4);
    DS.push(5);
    DS.pop();
    EXPECT_EQ(DS.top(), 4);

    DS.pop();
    EXPECT_EQ(DS.top(), 1);

    DS.pop(); 
    EXPECT_TRUE(DS.empty());
}

TEST(DoubleStackTest, Top) {
    DoubleStack DS;
    EXPECT_EQ(DS.top(), -1);

    DS.push(1);
    EXPECT_EQ(DS.top(), 1);

    DS.push(2);
    EXPECT_EQ(DS.top(), 2);
}

TEST(DoubleStackTest, Size) {
    DoubleStack DS;
    EXPECT_EQ(DS.size(), 0);

    DS.push(1);
    EXPECT_EQ(DS.size(), 1);

    DS.push(2);
    EXPECT_EQ(DS.size(), 2);

    DS.pop();
    EXPECT_EQ(DS.size(), 1);

    DS.pop();
    EXPECT_EQ(DS.size(), 0);
}

TEST(DoubleStackTest, Empty) {
    DoubleStack DS;
    EXPECT_TRUE(DS.empty());

    DS.push(1);
    EXPECT_FALSE(DS.empty());

    DS.pop();
    EXPECT_TRUE(DS.empty());
}
