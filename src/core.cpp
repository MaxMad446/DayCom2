// Auto-generated module | 2026-05-12T20:36:41.487603
#include <iostream>
#include <vector>

int compute_896() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_896() << std::endl;
    return 0;
}
