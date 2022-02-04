// Auto-generated module | 2026-05-11T20:49:38.591603
#include <iostream>
#include <vector>

int compute_607() {
    int base = 100;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_607() << std::endl;
    return 0;
}
