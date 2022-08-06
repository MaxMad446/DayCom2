// Auto-generated module | 2026-05-11T21:14:05.513607
#include <iostream>
#include <vector>

int compute_932() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_932() << std::endl;
    return 0;
}
