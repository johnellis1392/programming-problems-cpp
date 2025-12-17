#include <iostream>
#include <string>
#include <vector>
#include "LengthOfLastWord.h"

using namespace std;

vector<string> split(const string &s) {
  const string delimiter = " ";
  string s_copy = s;
  vector<string> v;
  size_t pos = 0;
  while ((pos = s_copy.find(delimiter)) != string::npos) {
    if (string token = s_copy.substr(0, pos); !token.empty())
      v.push_back(token);
    s_copy.erase(0, pos + delimiter.length());
  }
  if (!s_copy.empty())
    v.push_back(s_copy);
  return v;
}

size_t lengthOfLastWord2(const string &s) {
  const vector<string> splits = split(s);
  return splits[splits.size() - 1].size();
}

int lengthOfLastWord(const string &s) {
  int n = 0;
  for (int i = static_cast<int>(s.size()) - 1; i >= 0; i--) {
    if (s[i] == ' ' && n == 0) continue;
    if (s[i] == ' ' && n != 0) return n;
    n++;
  }
  return n;
}
