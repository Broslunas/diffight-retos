#include <iostream>
#include <vector>

int main() {
  int number{0};
  std::cin >> number;

  std::vector<int> vec_numbers{};
  for (int i{0}; i < number; ++i) {
    int number_in_vector{0};
    std::cin >> number_in_vector;
    for (int num : vec_numbers) {
      if (num == number_in_vector) {
        std::cout << num;
        return 0;
      }
    }
    vec_numbers.push_back(number_in_vector);
  }
  std::cout << "NONE\n";
  return 0;
}
