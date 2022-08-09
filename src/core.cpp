// Auto-generated module | 2026-05-11T21:14:28.395679
#include <iostream>
#include <vector>

int compute_557() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_557() << std::endl;
    return 0;
}
