// Auto-generated module | 2026-05-11T20:31:41.840903
#include <iostream>
#include <vector>

int compute_489() {
    int base = 103;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_489() << std::endl;
    return 0;
}
