#include <iostream>

int main() {
    int h;
    std::cin >> h;

    if (h == 0) {
        std::cout << 1;
        return 0;
    }

    if (h == 1) {
        std::cout << 0;
        return 0;
    }


    if (h % 2) {
        std::cout << 4;
        h -= 1;
    } else {
        std::cout << 8;
        h -= 2;
    }

    while (h > 0) {
        if (h % 2) {
            std::cout << 0;
            h -= 1;
        } else {
            std::cout << 8;
            h -= 2;
        }
    }

    return 0;
}