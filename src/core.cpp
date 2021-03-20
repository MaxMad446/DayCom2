// Auto-generated module | 2026-05-12T20:41:23.671802
#include <iostream>
#include <vector>

int compute_144() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_144() << std::endl;
    return 0;
}
