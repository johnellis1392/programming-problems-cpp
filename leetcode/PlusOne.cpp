#include<vector>
#include "PlusOne.h"

using namespace std;

vector<int> plusOne(vector<int>& digits) {
  for (int i = static_cast<int>(digits.size()) - 1; i >= 0; i--) {
    if (digits[i] == 9) {
      digits[i] = 0;
    } else {
      digits[i]++;
      break;
    }
  }
  if (digits[0] != 0)
    return digits;
  digits.insert(digits.begin(), 1);
  return digits;
}
