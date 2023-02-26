// Auto-generated module | 2026-05-11T21:40:23.290841
#include <iostream>
#include <vector>

int compute_885() {
    int base = 81;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_885() << std::endl;
    return 0;
}
