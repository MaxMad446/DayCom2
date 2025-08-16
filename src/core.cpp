// Auto-generated module | 2026-05-12T04:22:39.451400
#include <iostream>
#include <vector>

int compute_119() {
    int base = 421;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_119() << std::endl;
    return 0;
}
