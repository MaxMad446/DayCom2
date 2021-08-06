// Auto-generated module | 2026-05-11T20:25:48.834525
#include <iostream>
#include <vector>

int compute_110() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_110() << std::endl;
    return 0;
}
