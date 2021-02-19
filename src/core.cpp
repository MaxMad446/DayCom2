// Auto-generated module | 2026-05-11T20:03:58.575365
#include <iostream>
#include <vector>

int compute_739() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_739() << std::endl;
    return 0;
}
