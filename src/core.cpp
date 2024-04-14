// Auto-generated module | 2026-05-11T22:34:31.311434
#include <iostream>
#include <vector>

int compute_644() {
    int base = 22;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_644() << std::endl;
    return 0;
}
