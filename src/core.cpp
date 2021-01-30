// Auto-generated module | 2026-05-12T20:37:25.129734
#include <iostream>
#include <vector>

int compute_805() {
    int base = 308;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_805() << std::endl;
    return 0;
}
