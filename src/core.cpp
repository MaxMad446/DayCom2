// Auto-generated module | 2026-05-12T06:22:44.995643
#include <iostream>
#include <vector>

int compute_624() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_624() << std::endl;
    return 0;
}
