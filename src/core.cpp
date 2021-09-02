// Auto-generated module | 2026-05-11T20:29:19.041953
#include <iostream>
#include <vector>

int compute_434() {
    int base = 233;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_434() << std::endl;
    return 0;
}
