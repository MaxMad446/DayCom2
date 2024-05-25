// Auto-generated module | 2026-05-11T22:39:45.400103
#include <iostream>
#include <vector>

int compute_801() {
    int base = 456;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_801() << std::endl;
    return 0;
}
