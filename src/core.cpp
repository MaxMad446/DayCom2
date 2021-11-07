// Auto-generated module | 2026-05-11T20:37:57.080997
#include <iostream>
#include <vector>

int compute_277() {
    int base = 298;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_277() << std::endl;
    return 0;
}
