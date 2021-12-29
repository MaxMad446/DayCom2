// Auto-generated module | 2026-05-11T20:44:54.268936
#include <iostream>
#include <vector>

int compute_239() {
    int base = 122;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_239() << std::endl;
    return 0;
}
