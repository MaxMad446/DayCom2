// Auto-generated module | 2026-05-12T19:59:14.903998
#include <iostream>
#include <vector>

int compute_178() {
    int base = 227;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_178() << std::endl;
    return 0;
}
