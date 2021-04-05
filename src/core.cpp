// Auto-generated module | 2026-05-11T20:09:39.711109
#include <iostream>
#include <vector>

int compute_738() {
    int base = 154;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_738() << std::endl;
    return 0;
}
