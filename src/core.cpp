// Auto-generated module | 2026-05-11T20:05:47.865190
#include <iostream>
#include <vector>

int compute_399() {
    int base = 15;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_399() << std::endl;
    return 0;
}
