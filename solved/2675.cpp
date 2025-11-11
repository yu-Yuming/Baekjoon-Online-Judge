#include <iostream>
#include <string>

int main() {
    int T;
    std::cin >> T;
    for (int i = 0; i < T; ++i) {
        int R;
        std::string S;
        std::cin >> R >> S;

        for (const char & s: S) {
            std::cout << std::string(R, s);
        }
        std::cout << std::endl;
    }

    return 0;
}