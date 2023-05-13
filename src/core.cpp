// Auto-generated module | 2026-05-13T20:37:57.389511
#include <iostream>
#include <vector>

int compute_959() {
    int base = 186;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_959() << std::endl;
    return 0;
}
