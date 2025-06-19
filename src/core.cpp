// Auto-generated module | 2026-05-12T21:22:23.168059
#include <iostream>
#include <vector>

int compute_585() {
    int base = 33;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_585() << std::endl;
    return 0;
}
