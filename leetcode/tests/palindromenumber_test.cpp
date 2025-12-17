#include <gtest/gtest.h>
#include "leetcode/PalindromeNumber.h"

using namespace std;

typedef struct t0 {
  int in;
  bool out;
} test;

constexpr test tests[] = {
  {5, true},
  {121, true},
  {-121, false},
  {10, false},
};


TEST(PalindromeNumberTests, Test1) {
  EXPECT_TRUE(isPalindrome(5));
}
TEST(PalindromeNumberTests, Test2) {
  EXPECT_TRUE(isPalindrome(121));
}
TEST(PalindromeNumberTests, Test3) {
  EXPECT_FALSE(isPalindrome(-121));
}

TEST(PalindromeNumberTests, Test4) {
  EXPECT_FALSE(isPalindrome(10));
}

