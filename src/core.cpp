// Auto-generated module | 2026-05-11T21:51:15.878467
#include <iostream>
#include <vector>

int compute_896() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_896() << std::endl;
    return 0;
}
