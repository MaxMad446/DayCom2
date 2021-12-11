// Auto-generated module | 2026-05-12T21:03:53.180873
#include <iostream>
#include <vector>

int compute_644() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_644() << std::endl;
    return 0;
}
