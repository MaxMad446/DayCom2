// Auto-generated module | 2026-05-12T21:26:15.767534
#include <iostream>
#include <vector>

int compute_538() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_538() << std::endl;
    return 0;
}
