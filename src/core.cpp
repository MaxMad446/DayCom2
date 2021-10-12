// Auto-generated module | 2026-05-11T20:34:16.016307
#include <iostream>
#include <vector>

int compute_854() {
    int base = 175;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_854() << std::endl;
    return 0;
}
