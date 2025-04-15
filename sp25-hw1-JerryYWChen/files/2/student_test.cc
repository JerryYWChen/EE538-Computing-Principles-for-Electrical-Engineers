#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(IsPrime, Primes) {
  std::vector<int> primes{2,  3,  5,  7,  11, 13, 17, 19, 23, 29, 31, 37, 41,
                          43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

  for (auto e : primes) {
    std::cout << "e: " << e << std::endl;
    int determination = IsPrime(e);
    EXPECT_EQ(1, determination);
  }
}

TEST(IsPrime, One) { 
  int determination = IsPrime(1);
  EXPECT_EQ(0, determination); 
}

TEST(IsPrime, NonPrimes) {

  int determination = IsPrime(20);
  EXPECT_EQ(0, determination);

  determination = IsPrime(4);
  EXPECT_EQ(0, determination);

  determination = IsPrime(400);
  EXPECT_EQ(0, determination);

  determination = IsPrime(-1);
  EXPECT_EQ(0, determination);
}
