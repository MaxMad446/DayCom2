// Auto-generated module | 2026-05-11T21:01:39.124811
#include <iostream>
#include <vector>

int compute_885() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_885() << std::endl;
    return 0;
}
