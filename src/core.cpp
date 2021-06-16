// Auto-generated module | 2026-05-11T20:18:57.108549
#include <iostream>
#include <vector>

int compute_884() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_884() << std::endl;
    return 0;
}
