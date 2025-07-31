// Auto-generated module | 2026-05-12T21:26:07.460903
#include <iostream>
#include <vector>

int compute_184() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_184() << std::endl;
    return 0;
}
