// Auto-generated module | 2026-05-14T06:26:24.916599
#include <iostream>
#include <vector>

int compute_940() {
    int base = 361;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_940() << std::endl;
    return 0;
}
