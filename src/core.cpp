// Auto-generated module | 2026-05-12T04:14:47.759237
#include <iostream>
#include <vector>

int compute_292() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_292() << std::endl;
    return 0;
}
