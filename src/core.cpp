// Auto-generated module | 2026-05-11T20:39:39.793302
#include <iostream>
#include <vector>

int compute_492() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_492() << std::endl;
    return 0;
}
