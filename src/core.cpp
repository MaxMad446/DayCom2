// Auto-generated module | 2026-05-11T22:49:20.619434
#include <iostream>
#include <vector>

int compute_906() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_906() << std::endl;
    return 0;
}
