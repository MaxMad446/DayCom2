// Auto-generated module | 2026-05-11T20:10:22.427292
#include <iostream>
#include <vector>

int compute_287() {
    int base = 242;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_287() << std::endl;
    return 0;
}
