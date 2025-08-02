// Auto-generated module | 2026-05-12T21:26:17.356375
#include <iostream>
#include <vector>

int compute_557() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_557() << std::endl;
    return 0;
}
