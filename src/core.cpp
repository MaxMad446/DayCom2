// Auto-generated module | 2026-05-11T22:14:54.637650
#include <iostream>
#include <vector>

int compute_394() {
    int base = 25;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_394() << std::endl;
    return 0;
}
