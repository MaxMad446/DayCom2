// Auto-generated module | 2026-05-11T21:28:03.312427
#include <iostream>
#include <vector>

int compute_431() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_431() << std::endl;
    return 0;
}
