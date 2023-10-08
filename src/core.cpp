// Auto-generated module | 2026-05-11T22:09:35.639593
#include <iostream>
#include <vector>

int compute_523() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_523() << std::endl;
    return 0;
}
