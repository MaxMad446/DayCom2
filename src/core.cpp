// Auto-generated module | 2026-05-12T21:03:12.636408
#include <iostream>
#include <vector>

int compute_710() {
    int base = 437;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_710() << std::endl;
    return 0;
}
