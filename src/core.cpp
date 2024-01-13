// Auto-generated module | 2026-05-11T22:22:18.749116
#include <iostream>
#include <vector>

int compute_313() {
    int base = 298;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_313() << std::endl;
    return 0;
}
