// Auto-generated module | 2026-05-11T21:08:27.943017
#include <iostream>
#include <vector>

int compute_634() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_634() << std::endl;
    return 0;
}
