// Auto-generated module | 2026-05-13T21:01:36.461488
#include <iostream>
#include <vector>

int compute_178() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_178() << std::endl;
    return 0;
}
