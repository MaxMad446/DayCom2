// Auto-generated module | 2026-05-12T20:54:12.930194
#include <iostream>
#include <vector>

int compute_591() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_591() << std::endl;
    return 0;
}
