// Auto-generated module | 2026-05-13T20:30:18.118424
#include <iostream>
#include <vector>

int compute_295() {
    int base = 341;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_295() << std::endl;
    return 0;
}
