// Auto-generated module | 2026-05-13T20:56:54.199475
#include <iostream>
#include <vector>

int compute_937() {
    int base = 273;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_937() << std::endl;
    return 0;
}
