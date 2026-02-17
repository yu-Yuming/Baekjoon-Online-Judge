#include <iostream>

void color(int (&square)[100][100], int x, int y) {
    --x; --y;
    for (int i = x; i < x + 10; ++i) {
        for (int j = y; j < y + 10; ++j) {
            square[i][j] = 1;
        }
    }
}

int main() {
    int square[100][100] = {};

    int N;
    std::cin >> N;

    for (int i = 0; i < N; ++i) {
        int x, y;
        std::cin >> x >> y;

        color(square, x, y);
    }

    int area = 0;
    for (const auto & row: square) {
        for (const auto & elem: row) {
            area += elem;
        }
    }

    std::cout << area;

    return 0;
}