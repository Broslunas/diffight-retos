#include <iostream>
#include <string>
#include <vector>

bool CheckParentesis(const std::string& phrase) {
  std::vector<char> stack;

  for (char c : phrase) {
    switch (c) {
      case '(':
      case '[':
      case '{':
        stack.push_back(c);
        break;
      case ')':
      case ']':
      case '}': {
        if (stack.empty()) {
          return false;
        }
        char open{stack.back()};
        stack.pop_back();
        if ((c == ')' && open != '(') || (c == ']' && open != '[') ||
            (c == '}' && open != '{')) {
          return false;
        }
        break;
      }
      default:
        break;  // otros caracteres: se ignoran
    }
  }
  return stack.empty();
}

int main() {
  std::string phrase;
  std::getline(std::cin, phrase);

  std::cout << (CheckParentesis(phrase) ? "YES" : "NO") << std::endl;
  return 0;
}
