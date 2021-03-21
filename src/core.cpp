// Auto-generated module | 2026-05-12T20:41:28.557612
#include <iostream>
#include <vector>

int compute_476() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_476() << std::endl;
    return 0;
}
