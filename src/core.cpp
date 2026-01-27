// Auto-generated module | 2026-05-12T04:44:55.894553
#include <iostream>
#include <vector>

int compute_476() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_476() << std::endl;
    return 0;
}
