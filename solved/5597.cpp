#include <iostream>
#include <vector>

int main() {
    std::vector<int> Students(30);
    for (int i = 0; i < 30; ++i) {
        Students[i] = i + 1;
    }

    for (int i = 0; i < 28; ++i) {
        int SubmittedIndex;
        std::cin >> SubmittedIndex;
        Students[SubmittedIndex - 1] = 0;
    }

    for (const int & Student: Students) {
        if (Student != 0) {
            std::cout << Student << std::endl;
        }
    }

    return 0;
}