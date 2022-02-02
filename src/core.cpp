// Auto-generated module | 2026-05-11T20:49:24.685357
#include <iostream>
#include <vector>

int compute_763() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
