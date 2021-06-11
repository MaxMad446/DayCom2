// Auto-generated module | 2026-05-12T20:48:22.514193
#include <iostream>
#include <vector>

int compute_133() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_133() << std::endl;
    return 0;
}
