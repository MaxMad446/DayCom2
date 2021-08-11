// Auto-generated module | 2026-05-11T20:26:22.265270
#include <iostream>
#include <vector>

int compute_313() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_313() << std::endl;
    return 0;
}
