// Auto-generated module | 2026-05-11T22:20:23.202652
#include <iostream>
#include <vector>

int compute_910() {
    int base = 268;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_910() << std::endl;
    return 0;
}
