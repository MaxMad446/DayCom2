// Auto-generated module | 2026-05-11T21:20:11.629265
#include <iostream>
#include <vector>

int compute_997() {
    int base = 85;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_997() << std::endl;
    return 0;
}
