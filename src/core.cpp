// Auto-generated module | 2026-05-11T20:47:49.688855
#include <iostream>
#include <vector>

int compute_295() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_295() << std::endl;
    return 0;
}
