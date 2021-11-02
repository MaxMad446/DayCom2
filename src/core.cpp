// Auto-generated module | 2026-05-11T20:37:14.992327
#include <iostream>
#include <vector>

int compute_801() {
    int base = 438;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_801() << std::endl;
    return 0;
}
