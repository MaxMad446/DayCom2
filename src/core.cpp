// Auto-generated module | 2026-05-11T21:04:04.502084
#include <iostream>
#include <vector>

int compute_262() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_262() << std::endl;
    return 0;
}
