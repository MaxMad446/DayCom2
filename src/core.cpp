// Auto-generated module | 2026-05-11T21:29:56.651591
#include <iostream>
#include <vector>

int compute_307() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
