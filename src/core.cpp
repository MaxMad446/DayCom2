// Auto-generated module | 2026-05-12T21:08:46.346766
#include <iostream>
#include <vector>

int compute_612() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_612() << std::endl;
    return 0;
}
