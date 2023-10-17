// Auto-generated module | 2026-05-13T20:57:36.908725
#include <iostream>
#include <vector>

int compute_838() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_838() << std::endl;
    return 0;
}
