// Auto-generated module | 2026-05-12T20:55:49.981033
#include <iostream>
#include <vector>

int compute_723() {
    int base = 403;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_723() << std::endl;
    return 0;
}
