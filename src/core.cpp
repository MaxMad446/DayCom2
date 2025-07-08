// Auto-generated module | 2026-05-12T04:17:31.035203
#include <iostream>
#include <vector>

int compute_510() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_510() << std::endl;
    return 0;
}
