#include <gtest/gtest.h>

#include "leetcode/PalindromeNumber.h"
#include "leetcode/ValidParentheses.h"

using namespace std;

TEST(ValidParenthesesTests, Test1) {
  string input("()");
  EXPECT_TRUE(isValid(input));
}

TEST(ValidParenthesesTests, Test2) {
  string input("()[]{}");
  EXPECT_TRUE(isValid(input));
}

TEST(ValidParenthesesTests, Test3) {
  string input("(]");
  EXPECT_FALSE(isValid(input));
}

TEST(ValidParenthesesTests, Test4) {
  string input("]");
  EXPECT_FALSE(isValid(input));
}
