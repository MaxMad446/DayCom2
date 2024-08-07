// Auto-generated module | 2026-05-11T22:49:26.685447
#include <iostream>
#include <vector>

int compute_348() {
    int base = 216;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_348() << std::endl;
    return 0;
}
