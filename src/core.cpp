// Auto-generated module | 2026-05-12T20:40:43.572490
#include <iostream>
#include <vector>

int compute_413() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_413() << std::endl;
    return 0;
}
