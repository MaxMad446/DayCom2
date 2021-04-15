// Auto-generated module | 2026-05-12T20:43:33.356905
#include <iostream>
#include <vector>

int compute_907() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_907() << std::endl;
    return 0;
}
