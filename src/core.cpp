// Auto-generated module | 2026-05-12T20:50:41.290610
#include <iostream>
#include <vector>

int compute_654() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_654() << std::endl;
    return 0;
}
