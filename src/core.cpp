// Auto-generated module | 2026-05-12T21:05:31.475286
#include <iostream>
#include <vector>

int compute_319() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_319() << std::endl;
    return 0;
}
