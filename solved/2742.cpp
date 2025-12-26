#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int N;
    std::cin >> N;

    for (int i = N; i >= 1; --i) {
        std::cout << i << '\n';
    }

    return 0;
}