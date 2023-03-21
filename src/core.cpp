// Auto-generated module | 2026-05-13T20:33:39.211584
#include <iostream>
#include <vector>

int compute_521() {
    int base = 144;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_521() << std::endl;
    return 0;
}
