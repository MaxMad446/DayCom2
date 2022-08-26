// Auto-generated module | 2026-05-11T21:16:37.742113
#include <iostream>
#include <vector>

int compute_604() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_604() << std::endl;
    return 0;
}
