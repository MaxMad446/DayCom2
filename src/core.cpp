// Auto-generated module | 2026-05-11T22:37:28.282895
#include <iostream>
#include <vector>

int compute_650() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_650() << std::endl;
    return 0;
}
