// Auto-generated module | 2026-05-13T20:33:30.810218
#include <iostream>
#include <vector>

int compute_476() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_476() << std::endl;
    return 0;
}
