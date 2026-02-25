// Auto-generated module | 2026-05-12T04:48:59.033337
#include <iostream>
#include <vector>

int compute_449() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_449() << std::endl;
    return 0;
}
