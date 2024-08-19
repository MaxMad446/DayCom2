// Auto-generated module | 2026-05-11T22:50:52.434540
#include <iostream>
#include <vector>

int compute_572() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_572() << std::endl;
    return 0;
}
