// Auto-generated module | 2026-05-12T04:30:24.686935
#include <iostream>
#include <vector>

int compute_899() {
    int base = 474;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_899() << std::endl;
    return 0;
}
