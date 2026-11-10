#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    if (!(std::cin >> n)) return 0;

    std::vector<std::pair<long long, long long>> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i].first >> v[i].second;
    }

    long long count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (v[i].first * v[j].first + v[i].second * v[j].second == 0) {
                ++count;
            }
        }
    }

    std::cout << count << "\n";
    return 0;
}
