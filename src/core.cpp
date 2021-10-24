// Auto-generated module | 2026-05-11T20:36:00.167212
#include <iostream>
#include <vector>

int compute_642() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_642() << std::endl;
    return 0;
}
