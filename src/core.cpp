// Auto-generated module | 2026-05-11T20:55:53.546964
#include <iostream>
#include <vector>

int compute_234() {
    int base = 448;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_234() << std::endl;
    return 0;
}
