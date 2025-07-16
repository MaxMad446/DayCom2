// Auto-generated module | 2026-05-12T21:24:47.433132
#include <iostream>
#include <vector>

int compute_617() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_617() << std::endl;
    return 0;
}
