// Auto-generated module | 2026-05-13T20:37:04.148488
#include <iostream>
#include <vector>

int compute_391() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_391() << std::endl;
    return 0;
}
