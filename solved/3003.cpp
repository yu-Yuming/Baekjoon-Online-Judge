#include <iostream>
#include <vector>

int main() {
    std::vector<int> pieces = {1, 1, 2, 2, 2, 8};
    for (const int & piece: pieces) {
        int input;
        std::cin >> input;
        std::cout << piece - input << " ";
    }

    return 0;
}
