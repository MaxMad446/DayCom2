// Auto-generated module | 2026-05-11T19:47:38.689473
#include <iostream>
#include <vector>

int compute_742() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_742() << std::endl;
    return 0;
}
