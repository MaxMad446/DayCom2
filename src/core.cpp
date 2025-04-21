// Auto-generated module | 2026-05-12T21:17:21.102824
#include <iostream>
#include <vector>

int compute_476() {
    int base = 155;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_476() << std::endl;
    return 0;
}
