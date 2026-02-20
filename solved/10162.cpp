#include <iostream>

int A = 300;
int B = 60;
int C = 10;

int main() {
    int T;
    std::cin >> T;

    int counts[3] = {};

    counts[0] = T / A;
    T %= A;

    counts[1] = T / B;
    T %= B;

    counts[2] = T / C;
    T %= C;

    if (T != 0) {
        std::cout << -1;
    } else {
        for (int count : counts) {
            std::cout << count << " ";
        }
    }

    return 0;
}