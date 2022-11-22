// Auto-generated module | 2026-05-11T21:27:49.991231
#include <iostream>
#include <vector>

int compute_413() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_413() << std::endl;
    return 0;
}
