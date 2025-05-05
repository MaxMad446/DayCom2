// Auto-generated module | 2026-05-12T04:09:18.374996
#include <iostream>
#include <vector>

int compute_374() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_374() << std::endl;
    return 0;
}
