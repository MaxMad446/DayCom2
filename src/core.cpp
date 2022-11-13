// Auto-generated module | 2026-05-11T21:26:47.467453
#include <iostream>
#include <vector>

int compute_786() {
    int base = 367;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_786() << std::endl;
    return 0;
}
