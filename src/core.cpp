// Auto-generated module | 2026-05-11T20:46:49.605410
#include <iostream>
#include <vector>

int compute_392() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_392() << std::endl;
    return 0;
}
