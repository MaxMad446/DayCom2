// Auto-generated module | 2026-05-11T21:43:54.354132
#include <iostream>
#include <vector>

int compute_128() {
    int base = 144;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_128() << std::endl;
    return 0;
}
