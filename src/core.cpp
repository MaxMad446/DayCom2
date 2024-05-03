// Auto-generated module | 2026-05-11T22:36:49.827720
#include <iostream>
#include <vector>

int compute_925() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_925() << std::endl;
    return 0;
}
