// Auto-generated module | 2026-05-11T20:05:33.888851
#include <iostream>
#include <vector>

int compute_449() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_449() << std::endl;
    return 0;
}
