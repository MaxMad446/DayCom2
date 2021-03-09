// Auto-generated module | 2026-05-12T20:40:29.489358
#include <iostream>
#include <vector>

int compute_414() {
    int base = 445;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_414() << std::endl;
    return 0;
}
