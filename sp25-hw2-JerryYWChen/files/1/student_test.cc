#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(CountCharactersTest, Basic){
    std::string input = "This is a test";
    std::map<char, int> expected = {
        {'T', 1}, {'h', 1}, {'i', 2}, {'s', 3},
        {' ', 3}, {'a', 1}, {'t', 2}, {'e', 1}
    };
    
    EXPECT_EQ(CountCharacters(input), expected);
}

TEST(CountCharactersTest, Empty){
    std::string input = "";
    std::map<char, int> expected = {};
    EXPECT_EQ(CountCharacters(input), expected);
}

TEST(CountCharactersTest, Helloworld){
    std::string input = "Hello world!";
    std::map<char, int> expected = {
        {'H', 1}, {'e', 1}, {'l', 3}, {'o', 2},
        {' ', 1}, {'w', 1}, {'r', 1}, {'d', 1}, {'!', 1} 
    };
    EXPECT_EQ(CountCharacters(input), expected);
}