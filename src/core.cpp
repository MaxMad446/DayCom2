// Auto-generated module | 2026-05-11T20:46:38.087760
#include <iostream>
#include <vector>

int compute_750() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
