// Auto-generated module | 2026-05-11T20:34:49.357245
#include <iostream>
#include <vector>

int compute_697() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_697() << std::endl;
    return 0;
}
