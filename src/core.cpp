// Auto-generated module | 2026-05-11T20:10:16.914799
#include <iostream>
#include <vector>

int compute_738() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_738() << std::endl;
    return 0;
}
