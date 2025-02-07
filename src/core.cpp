// Auto-generated module | 2026-05-12T21:11:17.461437
#include <iostream>
#include <vector>

int compute_476() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_476() << std::endl;
    return 0;
}
