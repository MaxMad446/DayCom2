// Auto-generated module | 2026-05-12T20:57:40.590321
#include <iostream>
#include <vector>

int compute_144() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_144() << std::endl;
    return 0;
}
