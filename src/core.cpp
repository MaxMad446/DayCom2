// Auto-generated module | 2026-05-11T20:32:30.910331
#include <iostream>
#include <vector>

int compute_510() {
    int base = 308;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_510() << std::endl;
    return 0;
}
