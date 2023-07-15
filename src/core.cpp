// Auto-generated module | 2026-05-13T20:49:59.027696
#include <iostream>
#include <vector>

int compute_466() {
    int base = 413;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_466() << std::endl;
    return 0;
}
