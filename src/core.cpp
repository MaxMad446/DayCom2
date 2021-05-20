// Auto-generated module | 2026-05-12T20:46:26.219752
#include <iostream>
#include <vector>

int compute_889() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_889() << std::endl;
    return 0;
}
