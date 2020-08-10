// Auto-generated module | 2026-05-11T19:38:31.870300
#include <iostream>
#include <vector>

int compute_251() {
    int base = 407;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_251() << std::endl;
    return 0;
}
