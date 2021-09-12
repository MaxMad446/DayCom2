// Auto-generated module | 2026-05-12T20:56:22.456556
#include <iostream>
#include <vector>

int compute_583() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_583() << std::endl;
    return 0;
}
