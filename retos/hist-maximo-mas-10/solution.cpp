#include <iostream>

int main() {
  int number;
  std::cin >> number;
  int max_value{-999999};
  for (int i{0}; i < number; ++i) {
    int value{0};
    std::cin >> value;
    if (value + 10 > max_value) {
      max_value = value + 10;
    }
  }
  std::cout << max_value << std::endl;
  return 0;
}
