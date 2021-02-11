// Auto-generated module | 2026-05-11T20:02:56.010598
#include <iostream>
#include <vector>

int compute_262() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_262() << std::endl;
    return 0;
}
