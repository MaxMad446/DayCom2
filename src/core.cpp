// Auto-generated module | 2026-05-13T20:47:57.628396
#include <iostream>
#include <vector>

int compute_410() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_410() << std::endl;
    return 0;
}
