// Auto-generated module | 2026-05-12T04:24:49.375022
#include <iostream>
#include <vector>

int compute_501() {
    int base = 252;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_501() << std::endl;
    return 0;
}
