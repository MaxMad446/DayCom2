// Auto-generated module | 2026-05-11T21:31:46.600376
#include <iostream>
#include <vector>

int compute_132() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_132() << std::endl;
    return 0;
}
