// Auto-generated module | 2026-05-12T21:31:24.449320
#include <iostream>
#include <vector>

int compute_891() {
    int base = 446;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_891() << std::endl;
    return 0;
}
