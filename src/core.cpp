// Auto-generated module | 2026-05-11T20:08:25.264885
#include <iostream>
#include <vector>

int compute_714() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_714() << std::endl;
    return 0;
}
