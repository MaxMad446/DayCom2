// Auto-generated module | 2026-05-11T21:13:27.909180
#include <iostream>
#include <vector>

int compute_453() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_453() << std::endl;
    return 0;
}
