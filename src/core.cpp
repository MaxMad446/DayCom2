// Auto-generated module | 2026-05-11T22:12:43.336955
#include <iostream>
#include <vector>

int compute_644() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_644() << std::endl;
    return 0;
}
