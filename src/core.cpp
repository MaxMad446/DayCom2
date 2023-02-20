// Auto-generated module | 2026-05-11T21:39:27.103491
#include <iostream>
#include <vector>

int compute_738() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_738() << std::endl;
    return 0;
}
