// Auto-generated module | 2026-05-12T20:59:22.069343
#include <iostream>
#include <vector>

int compute_187() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_187() << std::endl;
    return 0;
}
