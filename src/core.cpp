// Auto-generated module | 2026-05-12T21:22:57.990591
#include <iostream>
#include <vector>

int compute_190() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_190() << std::endl;
    return 0;
}
