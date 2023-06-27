// Auto-generated module | 2026-05-13T20:48:24.675429
#include <iostream>
#include <vector>

int compute_881() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_881() << std::endl;
    return 0;
}
