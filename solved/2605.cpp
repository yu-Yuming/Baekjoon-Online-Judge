#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> list;
    for (int i = 1; i <= N; ++i) {
        int index;
        std::cin >> index;

        list.insert(list.begin() + index, i);
    }

    for (int i = N - 1; i >= 0; --i) {
        std::cout << list[i] << " ";
    }

    return 0;
}