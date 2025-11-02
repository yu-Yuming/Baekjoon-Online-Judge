#include <iostream>
#include <set>
#include <vector>

int main() {
    std::vector<int> Numbers(10);
    for (int & Number: Numbers) {
        std::cin >> Number;
        Number %= 42;
    }

    std::set<int> Remainders(Numbers.begin(), Numbers.end());
    std::cout << Remainders.size();

    return 0;
}