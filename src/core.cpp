// Auto-generated module | 2026-05-11T21:41:26.188778
#include <iostream>
#include <vector>

int compute_459() {
    int base = 81;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_459() << std::endl;
    return 0;
}
