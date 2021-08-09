// Auto-generated module | 2026-05-11T20:26:08.379708
#include <iostream>
#include <vector>

int compute_550() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_550() << std::endl;
    return 0;
}
