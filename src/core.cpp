// Auto-generated module | 2026-05-13T20:37:16.778496
#include <iostream>
#include <vector>

int compute_457() {
    int base = 82;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_457() << std::endl;
    return 0;
}
