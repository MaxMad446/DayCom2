// Auto-generated module | 2026-05-11T20:34:34.056695
#include <iostream>
#include <vector>

int compute_321() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_321() << std::endl;
    return 0;
}
