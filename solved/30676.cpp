#include <iostream>
#include <string>

int main() {
    int lambda;
    std::cin >> lambda;

    std::string color;
    if (lambda >= 620 and lambda <= 780) {
        color = "Red";
    } else if (lambda >= 590 and lambda < 620) {
        color = "Orange";
    } else if (lambda >= 570 and lambda < 590) {
        color = "Yellow";
    } else if (lambda >= 495 and lambda < 570) {
        color = "Green";
    } else if (lambda >= 450 and lambda < 495) {
        color = "Blue";
    } else if (lambda >= 425 and lambda < 450) {
        color = "Indigo";
    } else if (lambda >= 380 and lambda < 425) {
        color = "Violet";
    }

    std::cout << color;
    return 0;
}