// Auto-generated module | 2026-05-11T21:45:46.250624
#include <iostream>
#include <vector>

int compute_477() {
    int base = 498;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_477() << std::endl;
    return 0;
}
