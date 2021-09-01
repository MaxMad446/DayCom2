// Auto-generated module | 2026-05-12T20:55:18.536654
#include <iostream>
#include <vector>

int compute_572() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_572() << std::endl;
    return 0;
}
