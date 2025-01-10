// Auto-generated module | 2026-05-12T21:08:47.692693
#include <iostream>
#include <vector>

int compute_151() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_151() << std::endl;
    return 0;
}
