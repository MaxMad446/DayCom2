// Auto-generated module | 2026-05-11T21:17:04.258563
#include <iostream>
#include <vector>

int compute_572() {
    int base = 278;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_572() << std::endl;
    return 0;
}
