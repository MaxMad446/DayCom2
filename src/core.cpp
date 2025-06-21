// Auto-generated module | 2026-05-12T04:15:14.239881
#include <iostream>
#include <vector>

int compute_374() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_374() << std::endl;
    return 0;
}
