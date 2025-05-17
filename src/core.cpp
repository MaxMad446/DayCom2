// Auto-generated module | 2026-05-12T21:19:33.011728
#include <iostream>
#include <vector>

int compute_596() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_596() << std::endl;
    return 0;
}
