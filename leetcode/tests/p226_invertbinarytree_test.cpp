#include<gtest/gtest.h>
#include "leetcode/p226_invertbinarytree.h"

TEST(InvertBinaryTreeTests, Test1) {
  auto input = new TreeNode(
    4,
    new TreeNode(2, new TreeNode(1), new TreeNode(3)),
    new TreeNode(7, new TreeNode(6), new TreeNode(9))
  );

  Solution s;
  auto actual = s.invertTree(input);
  ASSERT_EQ(actual->val, 4);
  ASSERT_EQ(actual->left->val, 7);
  ASSERT_EQ(actual->left->left->val, 9);
  ASSERT_EQ(actual->left->right->val, 6);
  ASSERT_EQ(actual->right->val, 2);
  ASSERT_EQ(actual->right->left->val, 3);
  ASSERT_EQ(actual->right->right->val, 1);
}
