// Auto-generated module | 2026-05-11T22:04:54.389900
#include <iostream>
#include <vector>

int compute_763() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
