// Auto-generated module | 2026-05-11T20:07:54.500466
#include <iostream>
#include <vector>

int compute_641() {
    int base = 446;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_641() << std::endl;
    return 0;
}
