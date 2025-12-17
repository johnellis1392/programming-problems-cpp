#include <gtest/gtest.h>
#include "leetcode/PlusOne.h"

using namespace std;


TEST(PlusOneTests, Test1) {
  vector input{1,2,3};
  const vector exp{1,2,4};
  EXPECT_EQ(plusOne(input), exp);
}

TEST(PlusOneTests, Test2) {
  vector input{4,3,2,1};
  const vector exp{4,3,2,2};
  EXPECT_EQ(plusOne(input), exp);
}

TEST(PlusOneTests, Test3) {
  vector input{9};
  const vector exp{1,0};
  EXPECT_EQ(plusOne(input), exp);
}
