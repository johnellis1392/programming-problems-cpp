#include "util.h"

ListNode* make_list(std::vector<int> values) {
  if (values.empty()) {
    return nullptr;
  }
  ListNode *head = new ListNode(values.at(0));
  ListNode *prev = head;
  for (std::vector<int>::const_iterator it = values.begin()+1; it != values.end(); ++it) {
    const auto curr = new ListNode(*it);
    prev->next = curr;
    prev = curr;
  }
  return head;
}

std::vector<int> unmake_list(ListNode* head) {
  std::vector<int> result;
  if (head == nullptr) {
    return result;
  }
  ListNode* node = head;
  while (node != nullptr) {
    result.push_back(node->val);
    node = node->next;
  }
  return result;
}
