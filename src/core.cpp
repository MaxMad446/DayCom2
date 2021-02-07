// Auto-generated module | 2026-05-12T21:33:44.914282
#include <iostream>
#include <vector>

int compute_584() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_584() << std::endl;
    return 0;
}
