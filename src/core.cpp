// Auto-generated module | 2026-05-11T21:55:26.490115
#include <iostream>
#include <vector>

int compute_297() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_297() << std::endl;
    return 0;
}
