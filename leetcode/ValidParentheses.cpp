#include<stack>
#include<string>

using namespace std;

bool isValid(const string& s) {
  stack<char> _stack;
  for (char i : s) {
    if (i == '(' || i == '[' || i == '{') {
      _stack.push(i);
    } else if (_stack.empty()) {
      return false;
    } else if (
      (i == ')' && _stack.top() == '(') ||
      (i == ']' && _stack.top() == '[') ||
      (i == '}' && _stack.top() == '{')
    ) {
      _stack.pop();
    } else {
      return false;
    }
  }
  return _stack.empty();
}
