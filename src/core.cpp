// Auto-generated module | 2026-05-12T21:34:23.841031
#include <iostream>
#include <vector>

int compute_624() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_624() << std::endl;
    return 0;
}
