// Auto-generated module | 2026-05-12T04:47:37.051538
#include <iostream>
#include <vector>

int compute_727() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_727() << std::endl;
    return 0;
}
