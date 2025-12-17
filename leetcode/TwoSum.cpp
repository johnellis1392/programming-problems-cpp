#include<vector>
#include<unordered_map>
#include "TwoSum.h"

using namespace std;

vector<int> twoSum(const vector<int>& nums, const int target) {
  unordered_map<int, int> m;
  for (int i = 0; i < nums.size(); i++) {
    if (m.count(nums[i])) {
      return {m[nums[i]], i};
    } else {
      m[target - nums[i]] = i;
    }
  }
  return {};
}
