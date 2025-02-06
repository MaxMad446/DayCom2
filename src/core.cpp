// Auto-generated module | 2026-05-12T03:57:41.338507
#include <iostream>
#include <vector>

int compute_914() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_914() << std::endl;
    return 0;
}
