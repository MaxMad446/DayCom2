// Auto-generated module | 2026-05-11T20:12:36.065357
#include <iostream>
#include <vector>

int compute_298() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_298() << std::endl;
    return 0;
}
