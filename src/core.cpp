// Auto-generated module | 2026-05-11T22:25:33.999793
#include <iostream>
#include <vector>

int compute_578() {
    int base = 268;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_578() << std::endl;
    return 0;
}
