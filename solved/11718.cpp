#include <iostream>
#include <sstream>

int main() {
    std::string sentense;
    while (getline(std::cin, sentense)) {
        std::cout << sentense << std::endl;
    }
    return 0;
}
