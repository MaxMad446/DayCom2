// Auto-generated module | 2026-05-12T21:35:36.288494
#include <iostream>
#include <vector>

int compute_787() {
    int base = 88;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_787() << std::endl;
    return 0;
}
