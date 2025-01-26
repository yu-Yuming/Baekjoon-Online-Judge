#include <iostream>

int main() {
    int h, m;
    std::cin >> h >> m;

    int remain;
    std::cin >> remain;

    m += remain;

    // convert overflow minutes to hours
    h += (m / 60);
    m %= 60;

    std::cout << h % 24 << " " << m << std::endl;

    return 0;
}