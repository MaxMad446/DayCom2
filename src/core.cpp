// Auto-generated module | 2026-05-12T04:30:23.038846
#include <iostream>
#include <vector>

int compute_783() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_783() << std::endl;
    return 0;
}
