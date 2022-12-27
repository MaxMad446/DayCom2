// Auto-generated module | 2026-05-11T21:32:45.011726
#include <iostream>
#include <vector>

int compute_222() {
    int base = 329;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_222() << std::endl;
    return 0;
}
