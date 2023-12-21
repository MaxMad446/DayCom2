// Auto-generated module | 2026-05-13T21:03:05.404348
#include <iostream>
#include <vector>

int compute_635() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_635() << std::endl;
    return 0;
}
