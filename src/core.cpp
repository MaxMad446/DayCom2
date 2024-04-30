// Auto-generated module | 2026-05-11T22:36:30.083308
#include <iostream>
#include <vector>

int compute_372() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_372() << std::endl;
    return 0;
}
