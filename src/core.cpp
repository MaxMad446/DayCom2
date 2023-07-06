// Auto-generated module | 2026-05-11T21:57:31.765516
#include <iostream>
#include <vector>

int compute_459() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_459() << std::endl;
    return 0;
}
