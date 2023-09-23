// Auto-generated module | 2026-05-13T20:55:42.124159
#include <iostream>
#include <vector>

int compute_123() {
    int base = 124;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_123() << std::endl;
    return 0;
}
