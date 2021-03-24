// Auto-generated module | 2026-05-11T20:08:09.391728
#include <iostream>
#include <vector>

int compute_750() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
