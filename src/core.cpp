// Auto-generated module | 2026-05-11T20:38:44.798523
#include <iostream>
#include <vector>

int compute_344() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_344() << std::endl;
    return 0;
}
