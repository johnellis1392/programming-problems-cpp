#include <gtest/gtest.h>
#include <string>

#include "leetcode/LengthOfLastWord.h"

using namespace std;


TEST(LengthOfLastWordTests, Test1) {
  const string input("Hello World");
  const auto output = lengthOfLastWord(input);
  EXPECT_EQ(output, 5);
}

TEST(LengthOfLastWordTests, Test2) {
  const string input("   fly me   to   the moon  ");
  const auto output = lengthOfLastWord(input);
  EXPECT_EQ(output, 4);
}

TEST(LengthOfLastWordTests, Test3) {
  const string input("luffy is still joyboy");
  const auto output = lengthOfLastWord(input);
  EXPECT_EQ(output, 6);
}
