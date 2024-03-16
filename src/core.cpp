// Auto-generated module | 2026-05-11T22:30:37.830683
#include <iostream>
#include <vector>

int compute_699() {
    int base = 216;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_699() << std::endl;
    return 0;
}
