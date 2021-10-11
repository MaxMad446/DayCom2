// Auto-generated module | 2026-05-12T20:58:49.162239
#include <iostream>
#include <vector>

int compute_487() {
    int base = 485;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_487() << std::endl;
    return 0;
}
