// Auto-generated module | 2026-05-12T21:29:22.961631
#include <iostream>
#include <vector>

int compute_701() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_701() << std::endl;
    return 0;
}
