#include <vector>
#include <gtest/gtest.h>
#include "leetcode/SearchInsertPosition.h"

using namespace std;

typedef struct Test {
  const vector<int> nums;
  const int target;
  const int exp;
} Test;

const Test tests[] = {
  {vector{1,3,5,6}, 5, 2},
  {vector{1,3,5,6}, 2, 1},
  {vector{1,3,5,6}, 7, 4},
};


TEST(SearchInsertPositionTests, Test1) {
  vector nums{1,3,5,6};
  int target = 5;
  int exp = 2;
  EXPECT_EQ(searchInsert(nums, target), exp);
}

TEST(SearchInsertPositionTests, Test2) {
  vector nums{1,3,5,6};
  int target = 2;
  int exp = 1;
  EXPECT_EQ(searchInsert(nums, target), exp);
}

TEST(SearchInsertPositionTests, Test3) {
  vector nums{1,3,5,6};
  int target = 7;
  int exp = 4;
  EXPECT_EQ(searchInsert(nums, target), exp);
}
