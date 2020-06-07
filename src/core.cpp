// Auto-generated module | 2026-05-11T19:30:04.903266
#include <iostream>
#include <vector>

int compute_722() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_722() << std::endl;
    return 0;
}
