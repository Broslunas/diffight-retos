#include <iostream>

int main() {
  int number_of_values{0};
  std::cin >> number_of_values;
  int value{0};
  int total_num_harshad{0};
  for (int i{0}; i < number_of_values; ++i) {
    int sum{0};
    std::cin >> value;
    int temp_value{value};
    while (temp_value > 0) {
      sum += temp_value % 10;
      temp_value /= 10;
    }
    if (value % sum == 0) {
      ++total_num_harshad;
    }
  }
  std::cout << total_num_harshad << std::endl;
  return 0;
}
