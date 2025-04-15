#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(SwapByPointerTest, Basic){
    float a = 15, b = 10;
    SwapByPointer(&a, &b);
    EXPECT_FLOAT_EQ(a, 10);
    EXPECT_FLOAT_EQ(b, 15);
}

TEST(SwapByPointerTest, Same){
    float a = 15, b = 15;
    SwapByPointer(&a, &b);
    EXPECT_FLOAT_EQ(a, 15);
    EXPECT_FLOAT_EQ(b, 15);
}

TEST(SwapByPointerTest, Zero){
    float a = 0, b = 10;
    SwapByPointer(&a, &b);
    EXPECT_FLOAT_EQ(a, 10);
    EXPECT_FLOAT_EQ(b, 0);
}

TEST(SwapByPointerTest, Negative){
    float a = -15, b = -10;
    SwapByPointer(&a, &b);
    EXPECT_FLOAT_EQ(a, -10);
    EXPECT_FLOAT_EQ(b, -15);
}

TEST(SwapByPointerTest, Nullptr){
    float a = 15;
    SwapByPointer(&a, nullptr);
    EXPECT_FLOAT_EQ(a, 15);
}

TEST(SwapByReferenceTest, Basic){
    float a = 15, b = 10;
    SwapByReference(a, b);
    EXPECT_FLOAT_EQ(a, 10);
    EXPECT_FLOAT_EQ(b, 15);
}

TEST(SwapByReferenceTest, Same){
    float a = 15, b = 15;
    SwapByReference(a, b);
    EXPECT_FLOAT_EQ(a, 15);
    EXPECT_FLOAT_EQ(b, 15);
}

TEST(SwapByReferenceTest, Zero){
    float a = 0, b = 15;
    SwapByReference(a, b);
    EXPECT_FLOAT_EQ(a, 15);
    EXPECT_FLOAT_EQ(b, 0);
}

TEST(SwapByReferenceTest, Negative){
    float a = -10, b = -15;
    SwapByReference(a, b);
    EXPECT_FLOAT_EQ(a, -15);
    EXPECT_FLOAT_EQ(b, -10);
}