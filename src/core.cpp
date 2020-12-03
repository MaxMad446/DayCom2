// Auto-generated module | 2026-05-12T20:01:04.580529
#include <iostream>
#include <vector>

int compute_782() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_782() << std::endl;
    return 0;
}
