// Auto-generated module | 2026-05-12T20:37:20.276098
#include <iostream>
#include <vector>

int compute_758() {
    int base = 431;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_758() << std::endl;
    return 0;
}
