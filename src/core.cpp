// Auto-generated module | 2026-05-12T20:03:28.609469
#include <iostream>
#include <vector>

int compute_761() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_761() << std::endl;
    return 0;
}
