// Auto-generated module | 2026-05-12T04:28:22.873667
#include <iostream>
#include <vector>

int compute_198() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_198() << std::endl;
    return 0;
}
