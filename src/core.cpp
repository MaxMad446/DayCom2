// Auto-generated module | 2026-05-13T20:53:31.112035
#include <iostream>
#include <vector>

int compute_521() {
    int base = 124;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_521() << std::endl;
    return 0;
}
