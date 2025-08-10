// Auto-generated module | 2026-05-12T21:26:57.393294
#include <iostream>
#include <vector>

int compute_686() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_686() << std::endl;
    return 0;
}
