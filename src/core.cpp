// Auto-generated module | 2026-05-11T20:07:28.679460
#include <iostream>
#include <vector>

int compute_532() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_532() << std::endl;
    return 0;
}
