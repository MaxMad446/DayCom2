// Auto-generated module | 2026-05-12T21:36:22.847845
#include <iostream>
#include <vector>

int compute_402() {
    int base = 185;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_402() << std::endl;
    return 0;
}
