// Auto-generated module | 2026-05-11T21:20:34.731436
#include <iostream>
#include <vector>

int compute_248() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_248() << std::endl;
    return 0;
}
