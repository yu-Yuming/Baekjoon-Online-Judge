#include <iostream>

int main() {
    int N;
    std::cin >> N;
    for (int i = 0; i < N; ++i) {
        std::string results;
        std::cin >> results;
        int combo = 0;
        int score = 0;
        for (const char & result: results) {
            if (result == 'O') {
                combo += 1;
            } else {
                combo = 0;
            }
            score += combo;
        }
        std::cout << score << std::endl;
    }

    return 0;
}