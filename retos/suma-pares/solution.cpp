#include <bits/stdc++.h>
using namespace std;

int main() {
  int number{0};
  cin >> number;
  int total{0};
  for (int i{0}; i < number; ++i) {
    int value;
    cin >> value;
    if(value % 2 == 0) {
      total += value;
    }
  }
  cout << total;
  return 0;
}
