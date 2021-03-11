// Auto-generated module | 2026-05-12T21:36:17.815084
#include <iostream>
#include <vector>

int compute_805() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_805() << std::endl;
    return 0;
}
