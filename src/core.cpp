// Auto-generated module | 2026-05-11T20:38:59.338398
#include <iostream>
#include <vector>

int compute_903() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_903() << std::endl;
    return 0;
}
