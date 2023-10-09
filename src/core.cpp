// Auto-generated module | 2026-05-11T22:09:45.050549
#include <iostream>
#include <vector>

int compute_178() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_178() << std::endl;
    return 0;
}
