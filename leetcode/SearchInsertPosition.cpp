#include<vector>
#include "SearchInsertPosition.h"

using namespace std;

int searchInsert(const vector<int>& nums, const int target) {
  int i = 0, j = static_cast<int>(nums.size());
  while (i < j) {
    if (const int mid = (i + j) / 2; nums[mid] == target) {
      return mid;
    } else if (nums[mid] < target) {
      i = mid + 1;
    } else {
      j = mid;
    }
  }
  return i;
}
