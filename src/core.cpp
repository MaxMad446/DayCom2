// Auto-generated module | 2026-05-11T22:08:21.830466
#include <iostream>
#include <vector>

int compute_891() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_891() << std::endl;
    return 0;
}
