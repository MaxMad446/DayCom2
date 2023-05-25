// Auto-generated module | 2026-05-11T21:51:54.700537
#include <iostream>
#include <vector>

int compute_449() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_449() << std::endl;
    return 0;
}
