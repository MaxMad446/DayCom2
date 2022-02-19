// Auto-generated module | 2026-05-13T22:04:40.056477
#include <iostream>
#include <vector>

int compute_986() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_986() << std::endl;
    return 0;
}
