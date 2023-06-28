// Auto-generated module | 2026-05-11T21:56:16.916910
#include <iostream>
#include <vector>

int compute_691() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_691() << std::endl;
    return 0;
}
