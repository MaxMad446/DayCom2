// Auto-generated module | 2026-05-12T21:08:09.870735
#include <iostream>
#include <vector>

int compute_837() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_837() << std::endl;
    return 0;
}
