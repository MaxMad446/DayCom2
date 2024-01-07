// Auto-generated module | 2026-05-11T22:21:32.547352
#include <iostream>
#include <vector>

int compute_630() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_630() << std::endl;
    return 0;
}
