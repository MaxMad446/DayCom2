// Auto-generated module | 2026-05-12T19:57:11.466313
#include <iostream>
#include <vector>

int compute_624() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_624() << std::endl;
    return 0;
}
