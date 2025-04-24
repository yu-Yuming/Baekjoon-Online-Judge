#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }

    int v;
    int count = 0;
    std::cin >> v;
    for (auto item: arr) {
        if (item == v) {
            count++;
        }
    }

    std::cout << count;

    return 0;
}