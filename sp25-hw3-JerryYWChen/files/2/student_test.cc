#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(MyVectorTest, DefaultConstructor) {
    MyVector v;
    EXPECT_EQ(v.size(), 0);
    EXPECT_EQ(v.get_error(), ErrorCode::kNoError);
}

TEST(MyVectorTest, ParameterizedConstructorBasic){
    MyVector v(10);
    EXPECT_EQ(v.size(), 10);
    EXPECT_EQ(v.get_error(), ErrorCode::kNoError);
}

TEST(MyVectorTest, ParameterizedConstructorInvalidSize){
    MyVector v(-1);
    EXPECT_EQ(v.size(), 0);
    EXPECT_EQ(v.get_error(), ErrorCode::kIndexError);
}

TEST(MyVectorTest, CopyConstructor) {
    MyVector v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    MyVector copyV(v);

    EXPECT_EQ(copyV.size(), 3);
    EXPECT_EQ(copyV.at(0), 10);
    EXPECT_EQ(copyV.at(1), 20);
    EXPECT_EQ(copyV.at(2), 30);

    v.push_back(40);
    EXPECT_EQ(v.size(), 4);      
    EXPECT_EQ(copyV.size(), 3);  

    EXPECT_EQ(copyV.get_error(), v.get_error());
}

TEST(MyVectorTest, PushBack) {
    MyVector v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    EXPECT_EQ(v.size(), 3);
    EXPECT_EQ(v.at(0), 1);
    EXPECT_EQ(v.at(1), 2);
    EXPECT_EQ(v.at(2), 3);
}

TEST(MyVectorTest, PopBack) {
    MyVector v;
    v.push_back(1);
    v.push_back(2);
    EXPECT_EQ(v.pop_back(), 2);
    EXPECT_EQ(v.size(), 1);
    EXPECT_EQ(v.pop_back(), 1);
    EXPECT_EQ(v.size(), 0);
    EXPECT_EQ(v.pop_back(), -1);
    EXPECT_EQ(v.get_error(), ErrorCode::kPopFromEmptyVector);
}

TEST(MyVectorTest, PushFront) {
    MyVector v;
    v.push_front(1);
    v.push_front(2);
    v.push_front(3);
    EXPECT_EQ(v.size(), 3);
    EXPECT_EQ(v.at(0), 3);
    EXPECT_EQ(v.at(1), 2);
    EXPECT_EQ(v.at(2), 1);
}

TEST(MyVectorTest, PopFront) {
    MyVector v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    EXPECT_EQ(v.pop_front(), 1);
    EXPECT_EQ(v.size(), 2);
    EXPECT_EQ(v.at(0), 2);
}

TEST(MyVectorTest, Insert) {
    MyVector v;
    v.push_back(1);
    v.push_back(3);
    v.insert(2, 1); 
    EXPECT_EQ(v.size(), 3);
    EXPECT_EQ(v.at(1), 3);
}

TEST(MyVectorTest, At) {
    MyVector v;
    v.push_back(1);
    v.push_back(2);
    EXPECT_EQ(v.at(0), 1);
    EXPECT_EQ(v.at(1), 2);
    EXPECT_EQ(v.at(2), -1);
    EXPECT_EQ(v.get_error(), ErrorCode::kIndexError);
}

TEST(MyVectorTest, Find) {
    MyVector v;
    
    EXPECT_EQ(v.find(1), -1);
    EXPECT_EQ(v.get_error(), ErrorCode::kNotFound);

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    EXPECT_EQ(v.find(1), 0); 
    EXPECT_EQ(v.find(2), 1);
    EXPECT_EQ(v.find(4), 3);

    
    EXPECT_EQ(v.find(10), -1);
    EXPECT_EQ(v.get_error(), ErrorCode::kNotFound);
}

TEST(MyVectorTest, GetError) {
    MyVector v;
    EXPECT_EQ(v.get_error(), ErrorCode::kNoError);

    EXPECT_EQ(v.pop_back(), -1);
    EXPECT_EQ(v.get_error(), ErrorCode::kPopFromEmptyVector);

    EXPECT_EQ(v.at(1), -1);
    EXPECT_EQ(v.get_error(), ErrorCode::kIndexError);

    EXPECT_EQ(v.find(1), -1);
    EXPECT_EQ(v.get_error(), ErrorCode::kNotFound);

    v.push_back(1);
    EXPECT_EQ(v.get_error(), ErrorCode::kNoError);
}

TEST(MyVectorTest, SizeFunction) {
    MyVector v;

    EXPECT_EQ(v.size(), 0);

    v.push_back(1);
    EXPECT_EQ(v.size(), 1);

    v.push_back(2);
    EXPECT_EQ(v.size(), 2);

    v.pop_back();
    EXPECT_EQ(v.size(), 1);

    v.pop_back();
    EXPECT_EQ(v.size(), 0);
}

TEST(MyVectorTest, ConvertToStdVector) {
    MyVector v;

    std::vector<int> emptyVec = v.ConvertToStdVector();
    EXPECT_EQ(emptyVec.size(), 0);

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    std::vector<int> stdVec = v.ConvertToStdVector();
    EXPECT_EQ(stdVec.size(), 3);
    EXPECT_EQ(stdVec[0], 1);
    EXPECT_EQ(stdVec[1], 2);
    EXPECT_EQ(stdVec[2], 3);
}