// Auto-generated module | 2026-05-11T19:28:47.076249
#include <iostream>
#include <vector>

int compute_644() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_644() << std::endl;
    return 0;
}
