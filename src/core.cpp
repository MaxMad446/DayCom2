// Auto-generated module | 2026-05-12T21:12:55.078880
#include <iostream>
#include <vector>

int compute_476() {
    int base = 49;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_476() << std::endl;
    return 0;
}
