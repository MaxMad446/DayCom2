// Auto-generated module | 2026-05-11T21:22:47.442588
#include <iostream>
#include <vector>

int compute_521() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_521() << std::endl;
    return 0;
}
