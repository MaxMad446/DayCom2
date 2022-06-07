// Auto-generated module | 2026-05-11T21:05:49.883966
#include <iostream>
#include <vector>

int compute_116() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_116() << std::endl;
    return 0;
}
