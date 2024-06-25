// Auto-generated module | 2026-05-11T22:43:48.130447
#include <iostream>
#include <vector>

int compute_123() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_123() << std::endl;
    return 0;
}
