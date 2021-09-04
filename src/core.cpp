// Auto-generated module | 2026-05-11T20:29:34.815242
#include <iostream>
#include <vector>

int compute_141() {
    int base = 408;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_141() << std::endl;
    return 0;
}
