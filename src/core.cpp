// Auto-generated module | 2026-05-11T21:26:43.660709
#include <iostream>
#include <vector>

int compute_295() {
    int base = 240;
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
