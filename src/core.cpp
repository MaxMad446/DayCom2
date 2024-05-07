// Auto-generated module | 2026-05-11T22:37:22.978018
#include <iostream>
#include <vector>

int compute_707() {
    int base = 148;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_707() << std::endl;
    return 0;
}
