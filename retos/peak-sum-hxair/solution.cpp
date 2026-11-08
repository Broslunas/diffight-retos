#include <iostream>
#include <vector>

std::vector<int> GetCimasVector(int number) {
  std::vector<int> cimas_vector{};
  for (int i{0}; i < number; ++i) {
    int value{0};
    std::cin >> value;
    cimas_vector.push_back(value);
  }
  return cimas_vector;
}

int SumOfCimas(const std::vector<int>& cimas_vector) {
  int result{0};
  if (cimas_vector.size() == 1) {
    return cimas_vector[0];
  }
  for (size_t i{0}; i < cimas_vector.size(); ++i) {
    if (i == 0) {
      if (cimas_vector[i] > cimas_vector[1]) {
        result += cimas_vector[i];
      }
    } else if (i == cimas_vector.size() - 1) {
      if (cimas_vector[i] > cimas_vector[i - 1]) {
        result += cimas_vector[i];
      }
    } else {
      if (cimas_vector[i] > cimas_vector[i - 1] && cimas_vector[i] > cimas_vector[i + 1]) {
        result += cimas_vector[i];
      }
    }
  }
  return result;
}

int main() {
  int number{0};
  std::cin >> number;
  std::vector<int> cimas_vector{GetCimasVector(number)};

  std::cout << SumOfCimas(cimas_vector) << std::endl;
  return 0;
}
