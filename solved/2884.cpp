#include <iostream>

int main() {
    // set 45 minutes earlier
    int h, m;
    std::cin >> h >> m;

    if (m - 45 < 0) {
        m = (m + 60) - 45;
        h = (h - 1) < 0 ? 23 : h - 1;
    } else {
        m -= 45;
    }
    
    std::cout << h << " " << m << std::endl;

    return 0;
}