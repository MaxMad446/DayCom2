// Auto-generated module | 2026-05-12T03:59:19.189986
#include <iostream>
#include <vector>

int compute_476() {
    int base = 92;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_476() << std::endl;
    return 0;
}
