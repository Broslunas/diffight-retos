#include <iostream>
#include <vector>
#include <string>

int main() {
  std::vector<std::string> words;
  std::string word{""};
  while(std::cin >> word) {
    words.push_back(word);
  }

  for (size_t i{words.size()}; i > 0; --i) {
    std::cout << words[i - 1];
    if (i != 0) {
      std::cout << " ";
    }
  }
  return 0;
}
