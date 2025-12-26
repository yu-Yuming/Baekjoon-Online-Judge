#include <iostream>

int main() {
    int scoreSum = 0;
    for (int i = 0; i < 5; ++i) {
        int score;
        std::cin >> score;
        scoreSum += score;
    }

    std::cout << scoreSum;

    return 0;
}