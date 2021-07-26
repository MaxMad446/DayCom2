// Auto-generated module | 2026-05-11T20:24:23.434965
#include <iostream>
#include <vector>

int compute_360() {
    int base = 15;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_360() << std::endl;
    return 0;
}
