#include <gtest/gtest.h>
#include <vector>
#include "leetcode/RemoveDuplicates.h"

using namespace std;


TEST(RemoveDuplicatesTests, Test1) {
  vector nums{3,2,2,3};
  int val = 3;
  int k = 2;
  vector exp{2, 2};
  EXPECT_EQ(removeElement(nums, val), k);
  EXPECT_EQ(nums, exp);
}

TEST(RemoveDuplicatesTests, Test2) {
  vector nums{0,1,2,2,3,0,4,2};
  int val = 2;
  int k = 5;
  vector exp{0,1,4,0,3};
  EXPECT_EQ(removeElement(nums, val), k);
  EXPECT_EQ(nums, exp);
}
