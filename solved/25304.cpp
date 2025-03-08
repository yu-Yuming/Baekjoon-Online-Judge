#include <iostream>

int main() {
    int x, n, a, b;

    std::cin >> x;
    std::cin >> n;

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> a >> b;
        sum += a * b;
    }

    if (sum == x) {
        std::cout << "Yes" << std::endl;;
    } else {
        std::cout << "No" << std::endl;
    }
}
