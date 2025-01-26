#include <iostream>
#include <algorithm>

int main() {
    int d1, d2, d3;

    std::cin >> d1 >> d2 >> d3;

    int reward;
    if (d1 == d2 || d2 == d3 || d3 == d1) {
        // all dice are same
        if (d1 == d2 && d2 == d3) {
            reward = 10000 + d1 * 1000;
        } else {
            // two dice are same
            reward = 1000 + (d1 == d2 ? d1 : d3) * 100;
        }
    } else {
        // all dice are different
        reward = std::max({d1, d2, d3}) * 100;
    }

    std::cout << reward << std::endl;

    return 0;
}