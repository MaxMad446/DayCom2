// Auto-generated module | 2026-05-12T21:40:34.803211
#include <iostream>
#include <vector>

int compute_251() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_251() << std::endl;
    return 0;
}
