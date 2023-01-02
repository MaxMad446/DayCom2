// Auto-generated module | 2026-05-13T20:26:49.901383
#include <iostream>
#include <vector>

int compute_140() {
    int base = 298;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_140() << std::endl;
    return 0;
}
