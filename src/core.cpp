// Auto-generated module | 2026-05-12T20:40:26.489338
#include <iostream>
#include <vector>

int compute_125() {
    int base = 274;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_125() << std::endl;
    return 0;
}
