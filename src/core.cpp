// Auto-generated module | 2026-05-11T22:08:54.632518
#include <iostream>
#include <vector>

int compute_492() {
    int base = 110;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_492() << std::endl;
    return 0;
}
