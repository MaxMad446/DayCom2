// Auto-generated module | 2026-05-13T20:34:22.826905
#include <iostream>
#include <vector>

int compute_479() {
    int base = 327;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_479() << std::endl;
    return 0;
}
