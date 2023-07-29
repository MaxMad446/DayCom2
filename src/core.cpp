// Auto-generated module | 2026-05-13T20:50:59.753417
#include <iostream>
#include <vector>

int compute_335() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_335() << std::endl;
    return 0;
}
