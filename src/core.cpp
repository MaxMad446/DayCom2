// Auto-generated module | 2026-05-13T20:59:56.260497
#include <iostream>
#include <vector>

int compute_497() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_497() << std::endl;
    return 0;
}
