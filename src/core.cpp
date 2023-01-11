// Auto-generated module | 2026-05-11T21:34:34.580008
#include <iostream>
#include <vector>

int compute_932() {
    int base = 382;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_932() << std::endl;
    return 0;
}
