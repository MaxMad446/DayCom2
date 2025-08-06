// Auto-generated module | 2026-05-12T21:26:38.544716
#include <iostream>
#include <vector>

int compute_889() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_889() << std::endl;
    return 0;
}
