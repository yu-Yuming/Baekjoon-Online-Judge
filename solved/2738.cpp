#include <iostream>
#include <vector>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<std::vector<int>> matA(N);
    for (auto & row: matA) {
        std::vector<int> rowTemp(M);
        for (auto & elem: rowTemp) {
            std::cin >> elem;
        }
        row = rowTemp;
    }

    std::vector<std::vector<int>> matB(N);
    for (auto & row: matB) {
        std::vector<int> rowTemp(M);
        for (auto & elem: rowTemp) {
            std::cin >> elem;
        }
        row = rowTemp;
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cout << matA[i][j] + matB[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
