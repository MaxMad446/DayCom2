// Auto-generated module | 2026-05-12T03:38:22.598905
#include <iostream>
#include <vector>

int compute_292() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_292() << std::endl;
    return 0;
}
