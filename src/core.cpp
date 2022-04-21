// Auto-generated module | 2026-05-11T20:59:28.805273
#include <iostream>
#include <vector>

int compute_483() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_483() << std::endl;
    return 0;
}
