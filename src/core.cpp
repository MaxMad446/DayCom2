// Auto-generated module | 2026-05-11T20:59:45.103902
#include <iostream>
#include <vector>

int compute_603() {
    int base = 261;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_603() << std::endl;
    return 0;
}
