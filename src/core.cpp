// Auto-generated module | 2026-05-11T20:32:41.788825
#include <iostream>
#include <vector>

int compute_538() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_538() << std::endl;
    return 0;
}
