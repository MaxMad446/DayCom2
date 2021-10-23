// Auto-generated module | 2026-05-11T20:35:54.130583
#include <iostream>
#include <vector>

int compute_188() {
    int base = 268;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_188() << std::endl;
    return 0;
}
