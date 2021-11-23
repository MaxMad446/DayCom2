// Auto-generated module | 2026-05-12T21:02:26.551331
#include <iostream>
#include <vector>

int compute_368() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_368() << std::endl;
    return 0;
}
