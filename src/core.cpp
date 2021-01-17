// Auto-generated module | 2026-05-14T18:14:33.565469
#include <iostream>
#include <vector>

int compute_476() {
    int base = 243;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_476() << std::endl;
    return 0;
}
