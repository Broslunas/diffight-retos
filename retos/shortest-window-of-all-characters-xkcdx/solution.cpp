#include <algorithm>
#include <array>
#include <iostream>
#include <string>

int main() {
  std::string s;
  std::getline(std::cin, s);
  if (!s.empty() && s.back() == '\r') s.pop_back();

  // 1) Contar cuántos caracteres distintos hay en S
  std::array<int, 256> total{};
  int distintos{0};
  for (unsigned char c : s) {
    if (total[c]++ == 0) ++distintos;
  }

  // 2) Ventana [izq, der]: se expande por la derecha y se encoge por la izquierda
  std::array<int, 256> cnt{};
  int cubiertos{0};
  int mejor{static_cast<int>(s.size())};
  int izq{0};

  for (int der{0}; der < static_cast<int>(s.size()); ++der) {
    unsigned char c = s[der];
    if (cnt[c]++ == 0) ++cubiertos;

    // Mientras la ventana tenga todos los distintos, intentar acortarla
    while (cubiertos == distintos) {
      mejor = std::min(mejor, der - izq + 1);
      unsigned char l = s[izq++];
      if (--cnt[l] == 0) --cubiertos;
    }
  }

  std::cout << mejor << std::endl;
}
