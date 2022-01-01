// Auto-generated module | 2026-05-11T20:45:15.076286
#include <iostream>
#include <vector>

int compute_587() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
