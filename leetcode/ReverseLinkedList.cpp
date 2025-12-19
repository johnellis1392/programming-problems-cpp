#include <stack>
#include "ReverseLinkedList.h"

ListNode *reverseList2(ListNode *head) {
  if (head == nullptr) return nullptr;
  std::stack<ListNode *> st;
  auto node = head;
  while (node != nullptr) {
    st.push(node);
    node = node->next;
  }
  head = st.top();
  st.pop();
  node = head;
  while (!st.empty()) {
    auto next = st.top();
    node->next = next;
    node = next;
    st.pop();
  }
  node->next = nullptr;
  return head;
}

ListNode *Solution::reverseList(ListNode *head) {
  if (head == nullptr) return nullptr;
  ListNode *curr = head, *prev = nullptr;
  while (curr != nullptr) {
    auto next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}
