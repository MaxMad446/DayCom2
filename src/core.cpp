// Auto-generated module | 2026-05-11T22:42:09.961000
#include <iostream>
#include <vector>

int compute_125() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_125() << std::endl;
    return 0;
}
