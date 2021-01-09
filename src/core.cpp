// Auto-generated module | 2026-05-12T20:35:42.289396
#include <iostream>
#include <vector>

int compute_822() {
    int base = 85;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_822() << std::endl;
    return 0;
}
