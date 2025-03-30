#include <iostream>

int main() {
    int T;

    std::cin >> T;

    for (int x = 1; x <= T; ++x) {
        int a, b;
        std::cin >> a >> b;

        std::cout << "Case #" << x << ": " << a + b << std::endl;
    }
}