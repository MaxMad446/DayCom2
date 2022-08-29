// Auto-generated module | 2026-05-11T21:17:00.136863
#include <iostream>
#include <vector>

int compute_750() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
