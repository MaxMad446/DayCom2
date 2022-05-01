// Auto-generated module | 2026-05-13T22:10:48.127641
#include <iostream>
#include <vector>

int compute_585() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_585() << std::endl;
    return 0;
}
