// Auto-generated module | 2026-05-11T22:36:24.572345
#include <iostream>
#include <vector>

int compute_486() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_486() << std::endl;
    return 0;
}
