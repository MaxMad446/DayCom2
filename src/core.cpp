// Auto-generated module | 2026-05-11T22:09:04.481376
#include <iostream>
#include <vector>

int compute_561() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_561() << std::endl;
    return 0;
}
