// Auto-generated module | 2026-05-11T21:58:55.744649
#include <iostream>
#include <vector>

int compute_621() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_621() << std::endl;
    return 0;
}
