// Auto-generated module | 2026-05-11T22:47:25.111256
#include <iostream>
#include <vector>

int compute_141() {
    int base = 244;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_141() << std::endl;
    return 0;
}
