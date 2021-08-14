// Auto-generated module | 2026-05-11T20:26:48.971438
#include <iostream>
#include <vector>

int compute_587() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
