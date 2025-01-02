#include <iostream>

int main() {
    std::cin.tie(NULL);
    std::cin.sync_with_stdio(false);

    int T;
    std::cin >> T;

    for (int i = 0; i < T; ++i) {
        int A, B;
        std::cin >> A >> B;

        std::cout << A + B << '\n';
    }

    return 0;
}