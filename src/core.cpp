// Auto-generated module | 2026-05-12T21:39:22.508907
#include <iostream>
#include <vector>

int compute_178() {
    int base = 266;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_178() << std::endl;
    return 0;
}
