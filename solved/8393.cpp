#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int sum = 0;
    for (size_t i = 1; i <= n; i++)
    {
        sum += i;
    }
        
    std::cout << sum << std::endl;
    return 0;
}