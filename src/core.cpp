// Auto-generated module | 2026-05-11T20:14:46.931318
#include <iostream>
#include <vector>

int compute_123() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_123() << std::endl;
    return 0;
}
