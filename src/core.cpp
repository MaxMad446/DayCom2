// Auto-generated module | 2026-05-11T20:48:00.480548
#include <iostream>
#include <vector>

int compute_248() {
    int base = 473;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_248() << std::endl;
    return 0;
}
