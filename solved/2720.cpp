#include <iostream>

int main() {
    int T;
    std::cin >> T;
    for (int i = 0; i < T; ++i) {
        int N;
        std::cin >> N;

        // Quarter
        std::cout << N / 25 << ' ';
        N %= 25;

        // Dime
        std::cout << N / 10 << ' ';
        N %= 10;

        // Nickel
        std::cout << N / 5 << ' ';
        N %= 5;

        // Penny
        std::cout << N << std::endl;
    }

    return 0;
}