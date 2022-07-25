// Auto-generated module | 2026-05-11T21:12:23.260560
#include <iostream>
#include <vector>

int compute_884() {
    int base = 421;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_884() << std::endl;
    return 0;
}
