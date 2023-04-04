// Auto-generated module | 2026-05-13T20:34:51.653750
#include <iostream>
#include <vector>

int compute_171() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_171() << std::endl;
    return 0;
}
