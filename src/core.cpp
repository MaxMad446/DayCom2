// Auto-generated module | 2026-05-11T20:59:27.204214
#include <iostream>
#include <vector>

int compute_630() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_630() << std::endl;
    return 0;
}
