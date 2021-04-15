// Auto-generated module | 2026-05-12T20:43:31.731751
#include <iostream>
#include <vector>

int compute_292() {
    int base = 108;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_292() << std::endl;
    return 0;
}
