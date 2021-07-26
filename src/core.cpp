// Auto-generated module | 2026-05-11T20:24:26.114718
#include <iostream>
#include <vector>

int compute_164() {
    int base = 178;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_164() << std::endl;
    return 0;
}
