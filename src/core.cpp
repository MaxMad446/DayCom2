// Auto-generated module | 2026-05-12T21:22:49.423553
#include <iostream>
#include <vector>

int compute_881() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_881() << std::endl;
    return 0;
}
