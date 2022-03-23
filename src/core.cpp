// Auto-generated module | 2026-05-11T20:55:48.151657
#include <iostream>
#include <vector>

int compute_797() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_797() << std::endl;
    return 0;
}
