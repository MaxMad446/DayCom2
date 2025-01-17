// Auto-generated module | 2026-05-12T03:55:12.812858
#include <iostream>
#include <vector>

int compute_549() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_549() << std::endl;
    return 0;
}
