// Auto-generated module | 2026-05-11T21:47:24.975237
#include <iostream>
#include <vector>

int compute_265() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_265() << std::endl;
    return 0;
}
