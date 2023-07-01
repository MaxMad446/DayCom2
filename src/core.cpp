// Auto-generated module | 2026-05-11T21:56:42.533307
#include <iostream>
#include <vector>

int compute_402() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_402() << std::endl;
    return 0;
}
