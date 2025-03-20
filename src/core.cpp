// Auto-generated module | 2026-05-12T21:14:36.471632
#include <iostream>
#include <vector>

int compute_295() {
    int base = 210;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_295() << std::endl;
    return 0;
}
