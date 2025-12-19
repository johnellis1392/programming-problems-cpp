#ifndef PROGRAMMING_PROBLEMS_CPP_UTIL_H
#define PROGRAMMING_PROBLEMS_CPP_UTIL_H
#include <vector>

struct ListNode {
  int val;
  ListNode *next;

  ListNode() : val(0), next(nullptr) {
  }

  ListNode(int x) : val(x), next(nullptr) {
  }

  ListNode(int x, ListNode *next) : val(x), next(next) {
  }

  ~ListNode() {
    if (this->next != nullptr) {
      delete this->next;
    }
  }
};

ListNode* make_list(std::vector<int> values);

std::vector<int> unmake_list(ListNode* head);

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
  ~TreeNode() {
    if (left != nullptr) delete left;
    if (right != nullptr) delete right;
  }
};

#endif //PROGRAMMING_PROBLEMS_CPP_UTIL_H