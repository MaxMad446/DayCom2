// Auto-generated module | 2026-05-11T21:58:29.777813
#include <iostream>
#include <vector>

int compute_164() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_164() << std::endl;
    return 0;
}
