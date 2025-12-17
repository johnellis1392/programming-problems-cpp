#include<iostream>
#include<string>
#include "StrStr.h"

using namespace std;

int strStr(const string &haystack, const string &needle) {
  if (needle.empty() || needle.size() > haystack.size())
    return -1;
  const auto n = haystack.size(), m = needle.size();
  for (int i = 0; i < n - m + 1; i++)
    if (haystack.substr(i, m) == needle)
      return i;
  return -1;
}

// Much easier solution
size_t strStr2(const string &haystack, const string &needle) {
  return haystack.find(needle);
}
