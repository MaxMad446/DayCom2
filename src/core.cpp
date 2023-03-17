// Auto-generated module | 2026-05-11T21:42:43.412001
#include <iostream>
#include <vector>

int compute_125() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_125() << std::endl;
    return 0;
}
