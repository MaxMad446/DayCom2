// Auto-generated module | 2026-05-11T22:30:47.070506
#include <iostream>
#include <vector>

int compute_770() {
    int base = 298;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_770() << std::endl;
    return 0;
}
