// Auto-generated module | 2026-05-12T21:26:49.623316
#include <iostream>
#include <vector>

int compute_886() {
    int base = 490;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_886() << std::endl;
    return 0;
}
