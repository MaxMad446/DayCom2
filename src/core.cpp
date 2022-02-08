// Auto-generated module | 2026-05-11T20:50:14.206551
#include <iostream>
#include <vector>

int compute_710() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_710() << std::endl;
    return 0;
}
