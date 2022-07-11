// Auto-generated module | 2026-05-11T21:10:26.851424
#include <iostream>
#include <vector>

int compute_697() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_697() << std::endl;
    return 0;
}
