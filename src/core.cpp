// Auto-generated module | 2026-05-12T21:17:33.998610
#include <iostream>
#include <vector>

int compute_801() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_801() << std::endl;
    return 0;
}
