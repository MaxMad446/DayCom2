// Auto-generated module | 2026-05-13T20:54:39.074420
#include <iostream>
#include <vector>

int compute_588() {
    int base = 384;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_588() << std::endl;
    return 0;
}
