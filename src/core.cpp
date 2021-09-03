// Auto-generated module | 2026-05-11T20:29:24.450808
#include <iostream>
#include <vector>

int compute_229() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_229() << std::endl;
    return 0;
}
