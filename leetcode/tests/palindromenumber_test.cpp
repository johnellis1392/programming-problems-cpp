#include <gtest/gtest.h>
#include "leetcode/PalindromeNumber.h"

using namespace std;

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
