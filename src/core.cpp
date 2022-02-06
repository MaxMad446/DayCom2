// Auto-generated module | 2026-05-13T22:03:27.223351
#include <iostream>
#include <vector>

int compute_482() {
    int base = 10;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_482() << std::endl;
    return 0;
}
