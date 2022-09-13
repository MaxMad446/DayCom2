// Auto-generated module | 2026-05-11T21:18:53.013583
#include <iostream>
#include <vector>

int compute_141() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_141() << std::endl;
    return 0;
}
