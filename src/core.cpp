// Auto-generated module | 2026-05-12T21:25:59.007248
#include <iostream>
#include <vector>

int compute_505() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_505() << std::endl;
    return 0;
}
