#include<vector>
#include "RemoveDuplicates.h"

using namespace std;

int removeElement(vector<int>& nums, const int val) {
  int k = static_cast<int>(nums.size());
  int i = 0;
  while (i < k) {
    if (nums[i] == val) {
      const auto temp = nums[i];
      nums[i] = nums[k-1];
      nums[k-1] = temp;
      k--;
    } else {
      i++;
    }
  }
  return k;
}

int removeElement2(vector<int>& nums, const int val) {
  nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
  return static_cast<int>(nums.size());
}

int removeElement3(vector<int>& nums, const int val) {
  int i = 0;
  for (const int n : nums)
    if (n != val)
      nums[i++] = n;
  return i;
}
