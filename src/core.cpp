// Auto-generated module | 2026-05-11T22:20:48.382766
#include <iostream>
#include <vector>

int compute_837() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_837() << std::endl;
    return 0;
}
