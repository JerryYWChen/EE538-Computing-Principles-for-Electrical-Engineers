#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(QueueTest, CopyConstructorBasic) {
    Queue v;
    v.Enqueue(1);
    v.Enqueue(2);
    v.Enqueue(3);

    Queue copy(v);

    std::vector<int> expected = {1, 2, 3};
    EXPECT_EQ(copy.GetData(), expected);
}

TEST(QueueTest, CopyConstructorEmpty) {
    Queue v;
    Queue copy(v);

    EXPECT_TRUE(copy.IsEmpty());
}

TEST(QueueTest, CopyConstructorDeepCopy) {
    Queue v;
    v.Enqueue(1);
    v.Enqueue(2);

    Queue copy(v);

    v.Enqueue(3);
    v.Dequeue(); 


    std::vector<int> expected = {1, 2};
    EXPECT_EQ(copy.GetData(), expected);

    std::vector<int> modifiedExpected = {2, 3};
    EXPECT_EQ(v.GetData(), modifiedExpected);
}

TEST(QueueTest, CopyAssignmentBasic) {
    Queue q1, q2;

    q1.Enqueue(1);
    q1.Enqueue(2);
    q1.Enqueue(3);

    q2 = q1;

    std::vector<int> expected = {1, 2, 3};
    EXPECT_EQ(q2.GetData(), expected);
}

TEST(QueueTest, CopyAssignmentDeepCopy) {
    Queue q1, q2;
    q1.Enqueue(1);
    q1.Enqueue(2);
    q1.Enqueue(3);

    q2 = q1;

    q1.Enqueue(4);
    q1.Dequeue();

    std::vector<int> expected_q2 = {1, 2, 3};
    EXPECT_EQ(q2.GetData(), expected_q2);

    std::vector<int> modified_q1 = {2, 3, 4};
    EXPECT_EQ(q1.GetData(), modified_q1);
}

TEST(QueueTest, OperatorPlusBasic) {
    Queue q1, q2;

    q1.Enqueue(1);
    q1.Enqueue(2);
    q1.Enqueue(3);

    q2.Enqueue(4);
    q2.Enqueue(5);

    Queue q3 = q1 + q2;

    std::vector<int> expected = {4, 5, 1, 2, 3};
    EXPECT_EQ(q3.GetData(), expected);
}

TEST(QueueTest, OperatorPlusEmpty) {
    Queue q1, q2;
    Queue q3 = q1 + q2;

    EXPECT_TRUE(q3.IsEmpty());
}

TEST(QueueTest, EnqueueBasic) {
    Queue q;
    bool result = q.Enqueue(1);

    EXPECT_TRUE(result);
    std::vector<int> expected = {1};
    EXPECT_EQ(q.GetData(), expected);
}

TEST(QueueTest, DequeueBasic) {
    Queue q;
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);

    EXPECT_TRUE(q.Dequeue());

    std::vector<int> expected = {2, 3};
    EXPECT_EQ(q.GetData(), expected);
}

TEST(QueueTest, DequeueEmpty) {
    Queue q;

    EXPECT_FALSE(q.Dequeue());
    EXPECT_TRUE(q.IsEmpty());
}

TEST(QueueTest, Empty) {
    Queue q;
    EXPECT_TRUE(q.IsEmpty());
}

TEST(QueueTest, NotEmpty) {
    Queue q;
    q.Enqueue(1);
    EXPECT_FALSE(q.IsEmpty());
}

TEST(QueueTest, FrontEmpty) {
    Queue q;
    EXPECT_EQ(q.Front(), -1);
}

TEST(QueueTest, FrontBasic) {
    Queue q;
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    EXPECT_EQ(q.Front(), 1);
}