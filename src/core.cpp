// Auto-generated module | 2026-05-11T22:13:49.948269
#include <iostream>
#include <vector>

int compute_612() {
    int base = 456;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_612() << std::endl;
    return 0;
}
