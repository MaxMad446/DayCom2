// Auto-generated module | 2026-05-12T20:45:58.320489
#include <iostream>
#include <vector>

int compute_434() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_434() << std::endl;
    return 0;
}
