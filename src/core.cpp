// Auto-generated module | 2026-05-12T20:40:59.017160
#include <iostream>
#include <vector>

int compute_184() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_184() << std::endl;
    return 0;
}
