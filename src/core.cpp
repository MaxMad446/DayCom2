// Auto-generated module | 2026-05-11T21:32:31.459018
#include <iostream>
#include <vector>

int compute_365() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_365() << std::endl;
    return 0;
}
