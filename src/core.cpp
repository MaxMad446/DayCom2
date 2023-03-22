// Auto-generated module | 2026-05-11T21:43:22.366136
#include <iostream>
#include <vector>

int compute_637() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_637() << std::endl;
    return 0;
}
