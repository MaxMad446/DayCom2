// Auto-generated module | 2026-05-13T20:35:53.365546
#include <iostream>
#include <vector>

int compute_114() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_114() << std::endl;
    return 0;
}
