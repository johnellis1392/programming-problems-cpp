#include <gtest/gtest.h>
#include "leetcode/ReverseLinkedList.h"
#include "leetcode/util.h"

std::vector<int> run_test(const std::vector<int>& input) {
  auto list = make_list(input);
  Solution s;
  auto output = s.reverseList(list);
  auto actual = unmake_list(output);
  delete output;
  return actual;
}

TEST(ReverseLinkedListTests, Test1) {
  std::vector input{1, 2, 3, 4, 5};
  std::vector exp{5, 4, 3, 2, 1};
  auto actual = run_test(input);
  EXPECT_EQ(actual, exp);
}

TEST(ReverseLinkedListTests, Test2) {
  std::vector input{1, 2};
  std::vector exp{2, 1};
  auto actual = run_test(input);
  EXPECT_EQ(actual, exp);
}

TEST(ReverseLinkedListTests, Test3) {
  std::vector input{1};
  std::vector exp{1};
  auto actual = run_test(input);
  EXPECT_EQ(actual, exp);
}
