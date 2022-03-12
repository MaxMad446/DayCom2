// Auto-generated module | 2026-05-11T20:54:20.408196
#include <iostream>
#include <vector>

int compute_298() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_298() << std::endl;
    return 0;
}
