// Auto-generated module | 2026-05-13T20:57:57.037201
#include <iostream>
#include <vector>

int compute_591() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_591() << std::endl;
    return 0;
}
