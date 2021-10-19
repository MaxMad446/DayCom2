// Auto-generated module | 2026-05-11T20:35:20.349473
#include <iostream>
#include <vector>

int compute_920() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_920() << std::endl;
    return 0;
}
