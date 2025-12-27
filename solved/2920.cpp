#include <iostream>
#include <vector>

int main() {
    std::vector<int> scale(8, 0);
    std::cin >> scale[0] >> scale[1] >> scale[2] >> scale[3] >> scale[4] >> scale[5] >> scale[6] >> scale[7];
    if (scale == std::vector<int>{1, 2, 3, 4, 5, 6, 7, 8}) {
        std::cout << "ascending";
    } else if (scale == std::vector<int>{8, 7, 6, 5, 4, 3, 2, 1}) {
        std::cout << "descending";
    } else {
        std::cout << "mixed";
    }

    return 0;
}
