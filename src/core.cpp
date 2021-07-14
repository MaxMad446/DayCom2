// Auto-generated module | 2026-05-11T20:22:49.133273
#include <iostream>
#include <vector>

int compute_792() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_792() << std::endl;
    return 0;
}
