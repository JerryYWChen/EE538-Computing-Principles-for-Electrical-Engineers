#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------

TEST(CheckValidExpressionTest, TEST) {
    CPPLib cpp;
    EXPECT_TRUE(cpp.CheckValidExpression("(a+b)"));
    EXPECT_TRUE(cpp.CheckValidExpression("(a+b)[c*d]{5g+h}"));
    EXPECT_FALSE(cpp.CheckValidExpression("(a+b]"));
    EXPECT_FALSE(cpp.CheckValidExpression("(7h+[5c)+7]"));
    EXPECT_TRUE(cpp.CheckValidExpression("{2k+[5j]}"));
    EXPECT_TRUE(cpp.CheckValidExpression("{2k++[5--*j]}"));
    EXPECT_TRUE(cpp.CheckValidExpression(""));
}

TEST(IsPalindromeTest, Empty) {
    CPPLib lib;
    EXPECT_TRUE(lib.IsPalindrome(""));
}

TEST(IsPalindromeTest, Single) {
    CPPLib lib;
    EXPECT_TRUE(lib.IsPalindrome("c"));
    EXPECT_TRUE(lib.IsPalindrome("C"));
}

TEST(IsPalindromeTest, Basic) {
    CPPLib lib;
    EXPECT_TRUE(lib.IsPalindrome("aba"));
    EXPECT_TRUE(lib.IsPalindrome("abba"));
}

TEST(IsPalindromeTest, NotPalindrome) {
    CPPLib lib;
    EXPECT_FALSE(lib.IsPalindrome("hello"));
    EXPECT_FALSE(lib.IsPalindrome("word"));
}

TEST(CPPLibTest, OddChar) {
    CPPLib lib;

    EXPECT_EQ(lib.OddChar("a"), 'a');
    EXPECT_EQ(lib.OddChar("abcdcba"), 'd');
    EXPECT_EQ(lib.OddChar("112334425"), '5');
    EXPECT_EQ(lib.OddChar(""), 0);
    EXPECT_EQ(lib.OddChar("1122334455"), 0);
}
