// Auto-generated module | 2026-05-11T21:33:05.620372
#include <iostream>
#include <vector>

int compute_322() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_322() << std::endl;
    return 0;
}
