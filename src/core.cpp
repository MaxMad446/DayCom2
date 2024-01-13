// Auto-generated module | 2026-05-14T18:18:06.473224
#include <iostream>
#include <vector>

int compute_252() {
    int base = 329;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_252() << std::endl;
    return 0;
}
