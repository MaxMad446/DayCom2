// Auto-generated module | 2026-05-12T20:43:39.695511
#include <iostream>
#include <vector>

int compute_204() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_204() << std::endl;
    return 0;
}
