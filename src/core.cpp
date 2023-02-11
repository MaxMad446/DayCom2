// Auto-generated module | 2026-05-13T20:30:22.743507
#include <iostream>
#include <vector>

int compute_365() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_365() << std::endl;
    return 0;
}
