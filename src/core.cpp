// Auto-generated module | 2026-05-11T22:29:03.089471
#include <iostream>
#include <vector>

int compute_555() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_555() << std::endl;
    return 0;
}
