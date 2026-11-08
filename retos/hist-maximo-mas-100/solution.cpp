#include <iostream>

int main() {
  int number;
  std::cin >> number;
  int max_value{-999999};
  for (int i{0}; i < number; ++i) {
    int value{0};
    std::cin >> value;
    if (value + 100 > max_value) {
      max_value = value + 100;
    }
  }
  std::cout << max_value << std::endl;
  return 0;
}
