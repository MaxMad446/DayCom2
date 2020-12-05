// Auto-generated module | 2026-05-11T19:54:04.500808
#include <iostream>
#include <vector>

int compute_853() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_853() << std::endl;
    return 0;
}
