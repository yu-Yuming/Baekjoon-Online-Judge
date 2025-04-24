#include <iostream>
#include <vector>

int main() {
    int N, X;
    std::cin >> N >> X;

    std::vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }

    for (auto item: arr) {
        if (item < X) {
            std::cout << item << " ";
        }
    }

    return 0;
}
