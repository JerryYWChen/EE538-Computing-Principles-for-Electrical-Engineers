#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(PushBackTest, Basic){
    int size = 3;
    int *arr = new int[size]{1,2,3};

    push_back(arr, size, 4);

    std::vector<int> expected = {1,2,3,4};
    std::vector<int> result(arr, arr + size);

    EXPECT_EQ(size, 4);
    EXPECT_EQ(result, expected);

    delete[] arr;
}

TEST(PushBackTest, Empty){
    int size = 0;
    int *arr = nullptr;

    push_back(arr, size, 1);

    std::vector<int> expected = {1};
    std::vector<int> result(arr, arr + size);

    EXPECT_EQ(size, 1);
    EXPECT_EQ(result, expected);

    delete[] arr;
}

TEST(PushBackTest, MultiplePushBack){
    int size = 3;
    int *arr = new int[size]{1,2,3};

    push_back(arr, size, 4);
    push_back(arr, size, 5);
    push_back(arr, size, 6);

    std::vector<int> expected = {1,2,3,4,5,6};
    std::vector<int> result(arr, arr + size);

    EXPECT_EQ(size, 6);
    EXPECT_EQ(result, expected);

    delete[] arr;
}

TEST(PopBackTest, Basic){
    int size = 4;
    int *arr = new int[size]{1,2,3,4};
    
    pop_back(arr, size);

    // ASSERT_NE(arr, nullptr);
    std::vector<int> result(arr, arr + size);
    std::vector<int> expected = {1,2,3};


    EXPECT_EQ(result, expected);
    EXPECT_EQ(size, 3);

    delete[] arr;

}

TEST(PopBackTest, Empty){
    int size = 0;
    int *arr = nullptr;
    
    pop_back(arr, size);
    std::vector<int> result(arr, arr + size);
    std::vector<int> expected = {1,2,3};

    EXPECT_EQ(size, 0);
    EXPECT_EQ(arr, nullptr);
}

TEST(InsertTest, Middle) {
    int size = 4;
    int *arr = new int[size]{1, 2, 4, 5};

    insert(arr, size, 3, 2);

    std::vector<int> result(arr, arr + size);
    std::vector<int> expected = {1, 2, 3, 4, 5};

    EXPECT_EQ(result, expected);
    EXPECT_EQ(size, 5);

    delete[] arr;
}

TEST(InsertTest, First) {
    int size = 3;
    int *arr = new int[size]{2, 3, 4};

    insert(arr, size, 1, 0);

    std::vector<int> result(arr, arr + size);
    std::vector<int> expected = {1, 2, 3, 4};

    EXPECT_EQ(result, expected);
    EXPECT_EQ(size, 4);

    delete[] arr;
}

TEST(InsertTest, Last) {
    int size = 3;
    int *arr = new int[size]{1, 2, 3};

    insert(arr, size, 4, size);

    std::vector<int> result(arr, arr + size);
    std::vector<int> expected = {1, 2, 3, 4};

    EXPECT_EQ(result, expected);
    EXPECT_EQ(size, 4);

    delete[] arr;
}

TEST(InsertTest, InvalidIndex) {
    int size = 3;
    int *arr = new int[size]{1, 2, 3};

    insert(arr, size, 4, 5);

    std::vector<int> result(arr, arr + size);
    std::vector<int> expected = {1, 2, 3};

    EXPECT_EQ(result, expected);
    EXPECT_EQ(size, 3);

    delete[] arr;
}

TEST(EraseTest, Middle) {
    int size = 5;
    int *arr = new int[size]{1, 2, 3, 4, 5};

    int result = erase(arr, size, 2);

    std::vector<int> output(arr, arr + size);
    std::vector<int> expected = {1, 2, 4, 5};

    EXPECT_EQ(result, 0);
    EXPECT_EQ(output, expected);
    EXPECT_EQ(size, 4);

    delete[] arr;
}

TEST(EraseTest, First) {
    int size = 5;
    int *arr = new int[size]{1, 2, 3, 4, 5};

    int result = erase(arr, size, 0);

    std::vector<int> output(arr, arr + size);
    std::vector<int> expected = {2, 3, 4, 5};

    EXPECT_EQ(result, 0);
    EXPECT_EQ(output, expected);
    EXPECT_EQ(size, 4);

    delete[] arr;
}

TEST(EraseTest, Last) {
    int size = 5;
    int *arr = new int[size]{1, 2, 3, 4, 5};

    int result = erase(arr, size, 4);

    std::vector<int> output(arr, arr + size);
    std::vector<int> expected = {1, 2, 3, 4};

    EXPECT_EQ(result, 0);
    EXPECT_EQ(output, expected);
    EXPECT_EQ(size, 4);

    delete[] arr;
}

TEST(EraseTest, InvalidIndex) {
    int size = 3;
    int *arr = new int[size]{1, 2, 3};

    int result = erase(arr, size, 5);

    std::vector<int> output(arr, arr + size);
    std::vector<int> expected = {1, 2, 3};

    EXPECT_EQ(result, -1);
    EXPECT_EQ(output, expected);
    EXPECT_EQ(size, 3);

    delete[] arr;
}

TEST(FindTest, Basic) {
    int arr[] = {1, 2, 3, 4, 5};
    EXPECT_EQ(find(arr, 5, 3), 2);
}

TEST(FindTest, First) {
    int arr[] = {1, 2, 3, 4};
    EXPECT_EQ(find(arr, 4, 1), 0);
}

TEST(FindTest, Last) {
    int arr[] = {1, 2, 3, 4, 5};
    EXPECT_EQ(find(arr, 5, 5), 4);
}

TEST(FindTest, NoElement) {
    int arr[] = {1, 2, 3, 4};
    EXPECT_EQ(find(arr, 4, 10), -1);
}

TEST(FindTest, EmptyArray) {
    int arr[] = {};
    EXPECT_EQ(find(arr, 0, 1), -1);
}

