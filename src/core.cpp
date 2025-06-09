// Auto-generated module | 2026-05-12T21:21:27.908647
#include <iostream>
#include <vector>

int compute_693() {
    int base = 382;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_693() << std::endl;
    return 0;
}
