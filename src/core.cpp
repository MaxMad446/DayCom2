// Auto-generated module | 2026-05-12T21:38:18.870998
#include <iostream>
#include <vector>

int compute_102() {
    int base = 223;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_102() << std::endl;
    return 0;
}
