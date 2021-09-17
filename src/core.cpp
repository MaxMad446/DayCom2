// Auto-generated module | 2026-05-12T20:56:48.069190
#include <iostream>
#include <vector>

int compute_324() {
    int base = 442;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_324() << std::endl;
    return 0;
}
