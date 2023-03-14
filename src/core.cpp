// Auto-generated module | 2026-05-11T21:42:24.602925
#include <iostream>
#include <vector>

int compute_906() {
    int base = 129;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_906() << std::endl;
    return 0;
}
