// Auto-generated module | 2026-05-12T20:37:06.159104
#include <iostream>
#include <vector>

int compute_800() {
    int base = 81;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_800() << std::endl;
    return 0;
}
