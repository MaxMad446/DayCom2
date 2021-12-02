// Auto-generated module | 2026-05-11T20:41:25.758294
#include <iostream>
#include <vector>

int compute_621() {
    int base = 35;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_621() << std::endl;
    return 0;
}
