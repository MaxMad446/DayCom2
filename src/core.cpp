// Auto-generated module | 2026-05-12T20:37:13.925696
#include <iostream>
#include <vector>

int compute_391() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_391() << std::endl;
    return 0;
}
