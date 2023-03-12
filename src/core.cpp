// Auto-generated module | 2026-05-13T20:32:50.003475
#include <iostream>
#include <vector>

int compute_150() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_150() << std::endl;
    return 0;
}
