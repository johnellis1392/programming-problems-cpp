#include<gtest/gtest.h>

#include "leetcode/p217_containsduplicate.h"

TEST(ContainsDuplicateTests, Test1) {
  std::vector input{1,2,3,1};
  Solution s;
  ASSERT_TRUE(s.containsDuplicate(input));
}

TEST(ContainsDuplicateTests, Test2) {
  std::vector input{1,2,3,4};
  Solution s;
  ASSERT_FALSE(s.containsDuplicate(input));
}
