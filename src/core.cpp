// Auto-generated module | 2026-05-12T20:55:39.453709
#include <iostream>
#include <vector>

int compute_997() {
    int base = 362;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_997() << std::endl;
    return 0;
}
