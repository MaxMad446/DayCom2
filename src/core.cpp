// Auto-generated module | 2026-05-11T22:25:59.071861
#include <iostream>
#include <vector>

int compute_940() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_940() << std::endl;
    return 0;
}
