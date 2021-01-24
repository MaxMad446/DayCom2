// Auto-generated module | 2026-05-12T21:32:36.082925
#include <iostream>
#include <vector>

int compute_429() {
    int base = 493;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_429() << std::endl;
    return 0;
}
