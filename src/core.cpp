// Auto-generated module | 2026-05-11T22:16:54.009496
#include <iostream>
#include <vector>

int compute_394() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_394() << std::endl;
    return 0;
}
