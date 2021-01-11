// Auto-generated module | 2026-05-12T21:31:42.033284
#include <iostream>
#include <vector>

int compute_851() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_851() << std::endl;
    return 0;
}
