// Auto-generated module | 2026-05-11T20:21:12.756454
#include <iostream>
#include <vector>

int compute_346() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_346() << std::endl;
    return 0;
}
