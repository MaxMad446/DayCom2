// Auto-generated module | 2026-05-11T22:15:17.526948
#include <iostream>
#include <vector>

int compute_113() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_113() << std::endl;
    return 0;
}
