#include <iostream>

int main() {
    std::string patient, doctor;
    std::cin >> patient >> doctor;

    std::cout << (patient.length() >= doctor.length() ? "go" : "no");

    return 0;
}