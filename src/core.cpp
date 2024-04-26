// Auto-generated module | 2026-05-14T18:26:31.878708
#include <iostream>
#include <vector>

int compute_668() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_668() << std::endl;
    return 0;
}
