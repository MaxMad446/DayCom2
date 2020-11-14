// Auto-generated module | 2026-05-12T19:59:29.338419
#include <iostream>
#include <vector>

int compute_307() {
    int base = 448;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
