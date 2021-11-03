// Auto-generated module | 2026-05-11T20:37:24.345400
#include <iostream>
#include <vector>

int compute_631() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_631() << std::endl;
    return 0;
}
