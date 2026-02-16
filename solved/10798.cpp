#include <iostream>

char mat[5][16];

int main() {
    for (auto & row : mat) {
        std::cin >> row;
    }

    for (int j = 0; j < 15; ++j) {
        for (int i = 0; i < 5; ++i) {
            if (mat[i][j] != '\0') {
                std::cout << mat[i][j];
            }
        }
    }

    return 0;
}
