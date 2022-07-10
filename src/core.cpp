// Auto-generated module | 2026-05-11T21:10:23.601409
#include <iostream>
#include <vector>

int compute_178() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_178() << std::endl;
    return 0;
}
