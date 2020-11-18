// Auto-generated module | 2026-05-11T19:51:56.797309
#include <iostream>
#include <vector>

int compute_307() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
