#include <iostream>
#include <vector>

int main() {
    int N, M;

    std::cin >> N >> M;

    std::vector<int> Arr(N);

    for (int OperationIndex = 0; OperationIndex < M; ++OperationIndex) {
        int i, j, k;
        std::cin >> i >> j >> k;

        for (int ArrIndex = i - 1; ArrIndex < j; ++ArrIndex) {
            Arr[ArrIndex] = k;
        }
    }

    for (const int & Element: Arr) {
        std::cout << Element << " ";
    }

    return 0;
}