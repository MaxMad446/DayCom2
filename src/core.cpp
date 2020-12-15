// Auto-generated module | 2026-05-12T20:02:04.013499
#include <iostream>
#include <vector>

int compute_997() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_997() << std::endl;
    return 0;
}
