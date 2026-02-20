#include <iostream>

int getFlipCount (std::string S, char flipTarget) {
    int flipCount = 0;

    for (const auto & current: S) {
        if (current == flipTarget) {
            flipCount += 1;
        }
    }

    return flipCount;
}

int main() {
    int T;
    std::cin >> T;

    for (int i = 0; i < T; ++i) {
        std::string S;
        std::cin >> S;

        int flipA = getFlipCount(S, 'b');
        int flipB = getFlipCount(S, 'a');

        std::cout << std::min(flipA, flipB) << std::endl;
    }

    return 0;
}