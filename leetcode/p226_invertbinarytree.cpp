#include "p226_invertbinarytree.h"

TreeNode *Solution::invertTree(TreeNode *root) {
  if (root == nullptr) return nullptr;
  auto left = root->left;
  root->left = invertTree(root->right);
  root->right = invertTree(left);
  return root;
}
