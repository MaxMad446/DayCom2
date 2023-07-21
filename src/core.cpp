// Auto-generated module | 2026-05-11T21:59:20.747331
#include <iostream>
#include <vector>

int compute_644() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_644() << std::endl;
    return 0;
}
