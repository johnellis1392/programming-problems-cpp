#include "p217_containsduplicate.h"
#include<unordered_set>

bool Solution::containsDuplicate(std::vector<int> &nums) {
  std::unordered_set<int> set;
  for (auto it = nums.begin(); it != nums.end(); ++it) {
    if (set.find(*it) != set.end()) {
      return true;
    }
    set.insert(*it);
  }
  return false;
}
