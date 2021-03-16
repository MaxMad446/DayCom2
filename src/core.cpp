// Auto-generated module | 2026-05-12T21:36:42.073239
#include <iostream>
#include <vector>

int compute_549() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_549() << std::endl;
    return 0;
}
