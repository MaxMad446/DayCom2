// Auto-generated module | 2026-05-11T20:13:29.970101
#include <iostream>
#include <vector>

int compute_316() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_316() << std::endl;
    return 0;
}
