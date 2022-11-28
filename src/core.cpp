// Auto-generated module | 2026-05-11T21:28:38.004968
#include <iostream>
#include <vector>

int compute_569() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_569() << std::endl;
    return 0;
}
