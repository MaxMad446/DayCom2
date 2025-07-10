// Auto-generated module | 2026-05-12T21:24:16.779594
#include <iostream>
#include <vector>

int compute_864() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_864() << std::endl;
    return 0;
}
