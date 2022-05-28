// Auto-generated module | 2026-05-11T21:04:31.160676
#include <iostream>
#include <vector>

int compute_278() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_278() << std::endl;
    return 0;
}
