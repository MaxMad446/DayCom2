// Auto-generated module | 2026-05-12T20:40:00.012673
#include <iostream>
#include <vector>

int compute_397() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_397() << std::endl;
    return 0;
}
