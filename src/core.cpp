// Auto-generated module | 2026-05-13T20:55:59.631612
#include <iostream>
#include <vector>

int compute_903() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_903() << std::endl;
    return 0;
}
