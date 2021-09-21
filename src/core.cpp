// Auto-generated module | 2026-05-12T20:57:08.689458
#include <iostream>
#include <vector>

int compute_747() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_747() << std::endl;
    return 0;
}
