// Auto-generated module | 2026-05-11T20:55:38.091375
#include <iostream>
#include <vector>

int compute_218() {
    int base = 314;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_218() << std::endl;
    return 0;
}
