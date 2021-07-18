// Auto-generated module | 2026-05-12T20:51:22.116904
#include <iostream>
#include <vector>

int compute_697() {
    int base = 302;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_697() << std::endl;
    return 0;
}
