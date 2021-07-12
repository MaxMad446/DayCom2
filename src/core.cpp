// Auto-generated module | 2026-05-11T20:22:29.056251
#include <iostream>
#include <vector>

int compute_115() {
    int base = 121;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_115() << std::endl;
    return 0;
}
