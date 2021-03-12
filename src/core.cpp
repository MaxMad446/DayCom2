// Auto-generated module | 2026-05-12T20:40:42.434365
#include <iostream>
#include <vector>

int compute_807() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_807() << std::endl;
    return 0;
}
