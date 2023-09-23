// Auto-generated module | 2026-05-11T22:07:35.264009
#include <iostream>
#include <vector>

int compute_381() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_381() << std::endl;
    return 0;
}
