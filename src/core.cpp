// Auto-generated module | 2026-05-11T20:15:04.300324
#include <iostream>
#include <vector>

int compute_478() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_478() << std::endl;
    return 0;
}
