// Auto-generated module | 2026-05-11T22:37:43.109068
#include <iostream>
#include <vector>

int compute_307() {
    int base = 446;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
