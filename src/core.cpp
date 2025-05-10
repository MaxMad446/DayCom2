// Auto-generated module | 2026-05-12T21:18:49.236405
#include <iostream>
#include <vector>

int compute_492() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_492() << std::endl;
    return 0;
}
