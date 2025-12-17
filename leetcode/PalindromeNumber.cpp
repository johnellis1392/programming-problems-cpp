#include<string>
#include "PalindromeNumber.h"

using namespace std;

bool isPalindrome(const int x) {
  if (x < 0) {
    return false;
  }
  const string s = to_string(x);
  for (int i = 0; i < s.size() / 2; i++) {
    if (s[i] != s[s.size() - i - 1]) {
      return false;
    }
  }
  return true;
}
