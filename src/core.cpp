// Auto-generated module | 2026-05-13T20:47:39.039995
#include <iostream>
#include <vector>

int compute_213() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_213() << std::endl;
    return 0;
}
