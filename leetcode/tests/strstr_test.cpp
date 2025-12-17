#include <string>
#include <gtest/gtest.h>
#include "leetcode/StrStr.h"

using namespace std;

TEST(StrStrTests, Test1) {
  string haystack("sadbutsad");
  string needle("sad");
  int exp = 0;
  EXPECT_EQ(strStr(haystack, needle), exp);
}

TEST(StrStrTests, Test2) {
  string haystack("leetcode");
  string needle("leeto");
  int exp = -1;
  EXPECT_EQ(strStr(haystack, needle), exp);
}

TEST(StrStrTests, Test3) {
  string haystack("a");
  string needle("a");
  int exp = 0;
  EXPECT_EQ(strStr(haystack, needle), exp);
}

TEST(StrStrTests, Test4) {
  string haystack("ba");
  string needle("a");
  int exp = 1;
  EXPECT_EQ(strStr(haystack, needle), exp);
}
