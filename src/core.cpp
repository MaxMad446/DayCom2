// Auto-generated module | 2026-05-12T20:43:03.085489
#include <iostream>
#include <vector>

int compute_881() {
    int base = 329;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_881() << std::endl;
    return 0;
}
