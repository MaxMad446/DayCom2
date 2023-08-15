// Auto-generated module | 2026-05-11T22:02:29.455108
#include <iostream>
#include <vector>

int compute_447() {
    int base = 43;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_447() << std::endl;
    return 0;
}
