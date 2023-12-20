// Auto-generated module | 2026-05-11T22:19:06.746553
#include <iostream>
#include <vector>

int compute_367() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_367() << std::endl;
    return 0;
}
