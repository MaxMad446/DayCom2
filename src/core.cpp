// Auto-generated module | 2026-05-11T21:49:28.582177
#include <iostream>
#include <vector>

int compute_587() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
