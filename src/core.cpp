// Auto-generated module | 2026-05-11T21:23:33.119953
#include <iostream>
#include <vector>

int compute_248() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_248() << std::endl;
    return 0;
}
