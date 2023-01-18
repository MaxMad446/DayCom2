// Auto-generated module | 2026-05-13T20:28:15.829446
#include <iostream>
#include <vector>

int compute_361() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_361() << std::endl;
    return 0;
}
