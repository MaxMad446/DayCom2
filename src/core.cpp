// Auto-generated module | 2026-05-12T21:38:36.591025
#include <iostream>
#include <vector>

int compute_750() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
