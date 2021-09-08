// Auto-generated module | 2026-05-12T20:55:55.555644
#include <iostream>
#include <vector>

int compute_375() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_375() << std::endl;
    return 0;
}
