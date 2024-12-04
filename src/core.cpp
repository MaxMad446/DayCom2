// Auto-generated module | 2026-05-12T03:49:13.228184
#include <iostream>
#include <vector>

int compute_397() {
    int base = 474;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_397() << std::endl;
    return 0;
}
