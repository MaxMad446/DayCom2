// Auto-generated module | 2026-05-11T20:17:08.706780
#include <iostream>
#include <vector>

int compute_912() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_912() << std::endl;
    return 0;
}
