// Auto-generated module | 2026-05-12T04:22:59.111522
#include <iostream>
#include <vector>

int compute_766() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_766() << std::endl;
    return 0;
}
