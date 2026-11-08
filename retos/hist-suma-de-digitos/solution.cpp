#include <iostream>

int main() {
  long long number{0};
  std::cin >> number;
  int sum_of_digits{0};
  while (number != 0) {
    sum_of_digits += number % 10;
    number /= 10;
  }
  std::cout << sum_of_digits << std::endl;
  return 0;
}
