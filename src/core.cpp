// Auto-generated module | 2026-05-11T20:07:29.702612
#include <iostream>
#include <vector>

int compute_169() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_169() << std::endl;
    return 0;
}
