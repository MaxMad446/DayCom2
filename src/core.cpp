// Auto-generated module | 2026-05-11T21:05:29.700336
#include <iostream>
#include <vector>

int compute_108() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_108() << std::endl;
    return 0;
}
