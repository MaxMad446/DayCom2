// Auto-generated module | 2026-05-11T19:56:27.792373
#include <iostream>
#include <vector>

int compute_125() {
    int base = 263;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_125() << std::endl;
    return 0;
}
