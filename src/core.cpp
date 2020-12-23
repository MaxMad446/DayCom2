// Auto-generated module | 2026-05-12T20:02:48.878476
#include <iostream>
#include <vector>

int compute_262() {
    int base = 422;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_262() << std::endl;
    return 0;
}
