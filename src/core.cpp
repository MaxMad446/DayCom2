// Auto-generated module | 2026-05-12T03:43:38.826408
#include <iostream>
#include <vector>

int compute_521() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_521() << std::endl;
    return 0;
}
