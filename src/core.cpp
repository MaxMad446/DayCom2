// Auto-generated module | 2026-05-13T20:51:22.619691
#include <iostream>
#include <vector>

int compute_580() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_580() << std::endl;
    return 0;
}
