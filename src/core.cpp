// Auto-generated module | 2026-05-12T20:40:16.160840
#include <iostream>
#include <vector>

int compute_881() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_881() << std::endl;
    return 0;
}
