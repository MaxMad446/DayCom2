// Auto-generated module | 2026-05-11T20:30:22.927586
#include <iostream>
#include <vector>

int compute_739() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_739() << std::endl;
    return 0;
}
