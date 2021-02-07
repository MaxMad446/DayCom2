// Auto-generated module | 2026-05-12T21:33:43.713802
#include <iostream>
#include <vector>

int compute_190() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_190() << std::endl;
    return 0;
}
