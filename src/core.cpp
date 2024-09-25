// Auto-generated module | 2026-05-12T03:40:03.586155
#include <iostream>
#include <vector>

int compute_557() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_557() << std::endl;
    return 0;
}
