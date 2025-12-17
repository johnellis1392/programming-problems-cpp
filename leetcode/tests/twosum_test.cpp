#include <vector>
#include <gtest/gtest.h>
#include "leetcode/TwoSum.h"

using namespace std;

TEST(TwoSumTests, Test1) {
  vector nums{2, 7, 11, 15};
  int target = 9;
  vector output{0, 1};
  EXPECT_EQ(twoSum(nums, target), output);
}

TEST(TwoSumTests, Test2) {
  vector nums{3, 2, 4};
  int target = 6;
  vector output{1, 2};
  EXPECT_EQ(twoSum(nums, target), output);
}

TEST(TwoSumTests, Test3) {
  vector nums{3, 3};
  int target = 6;
  vector output{0, 1};
  EXPECT_EQ(twoSum(nums, target), output);
}
