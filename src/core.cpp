// Auto-generated module | 2026-05-12T20:50:22.804848
#include <iostream>
#include <vector>

int compute_780() {
    int base = 72;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_780() << std::endl;
    return 0;
}
