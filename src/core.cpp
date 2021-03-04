// Auto-generated module | 2026-05-11T20:05:49.885502
#include <iostream>
#include <vector>

int compute_187() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_187() << std::endl;
    return 0;
}
