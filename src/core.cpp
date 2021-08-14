// Auto-generated module | 2026-05-11T20:26:47.214522
#include <iostream>
#include <vector>

int compute_205() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_205() << std::endl;
    return 0;
}
