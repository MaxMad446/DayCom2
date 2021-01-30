// Auto-generated module | 2026-05-12T20:37:29.286782
#include <iostream>
#include <vector>

int compute_312() {
    int base = 401;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_312() << std::endl;
    return 0;
}
