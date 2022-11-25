// Auto-generated module | 2026-05-14T06:25:41.541661
#include <iostream>
#include <vector>

int compute_381() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_381() << std::endl;
    return 0;
}
