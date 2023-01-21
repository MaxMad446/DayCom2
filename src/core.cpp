// Auto-generated module | 2026-05-11T21:35:49.927839
#include <iostream>
#include <vector>

int compute_291() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_291() << std::endl;
    return 0;
}
