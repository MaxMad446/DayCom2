// Auto-generated module | 2026-05-11T21:15:49.375008
#include <iostream>
#include <vector>

int compute_549() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_549() << std::endl;
    return 0;
}
