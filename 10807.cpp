#include <iostream>
#include <sstream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    std::cin.ignore();

    std::string input;
    std::vector<int> arr(N);
    std::getline(std::cin, input);
    std::istringstream iss(input);

    for (int i = 0; i < N; ++i) {
        int number;
        iss >> number;
        arr[i] = number;
    }

    int v;
    std::cin >> v;

    int count = 0;
    for (auto item: arr) {
        if (item == v) {
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}
