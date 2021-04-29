// Auto-generated module | 2026-05-12T21:40:31.747151
#include <iostream>
#include <vector>

int compute_658() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_658() << std::endl;
    return 0;
}
