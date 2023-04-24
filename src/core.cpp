// Auto-generated module | 2026-05-11T21:47:30.055682
#include <iostream>
#include <vector>

int compute_434() {
    int base = 35;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_434() << std::endl;
    return 0;
}
