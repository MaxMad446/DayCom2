// Auto-generated module | 2026-05-12T03:59:27.620296
#include <iostream>
#include <vector>

int compute_180() {
    int base = 122;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_180() << std::endl;
    return 0;
}
