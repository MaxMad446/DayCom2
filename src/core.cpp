// Auto-generated module | 2026-05-11T22:16:51.196285
#include <iostream>
#include <vector>

int compute_453() {
    int base = 442;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_453() << std::endl;
    return 0;
}
