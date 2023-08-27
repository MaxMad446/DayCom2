// Auto-generated module | 2026-05-11T22:03:59.375899
#include <iostream>
#include <vector>

int compute_510() {
    int base = 155;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_510() << std::endl;
    return 0;
}
