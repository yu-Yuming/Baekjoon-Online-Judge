#include <iostream>

int main() {
    int T;
    std::cin >> T;

    for (int i = 0; i < T; ++i) {
        int H, W, N;
        std::cin >> H >> W >> N;

        std::cout << (N % H == 0 ? H * 100 + N / H : (N % H) * 100 + (N / H + 1)) << std::endl;
    }

    return 0;
}