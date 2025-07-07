// Auto-generated module | 2026-05-12T04:17:26.385838
#include <iostream>
#include <vector>

int compute_549() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_549() << std::endl;
    return 0;
}
