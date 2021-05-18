// Auto-generated module | 2026-05-11T20:15:01.514380
#include <iostream>
#include <vector>

int compute_738() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_738() << std::endl;
    return 0;
}
