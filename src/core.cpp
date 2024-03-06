// Auto-generated module | 2026-05-11T22:29:24.278324
#include <iostream>
#include <vector>

int compute_978() {
    int base = 259;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_978() << std::endl;
    return 0;
}
