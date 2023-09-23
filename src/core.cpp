// Auto-generated module | 2026-05-13T20:55:41.138420
#include <iostream>
#include <vector>

int compute_338() {
    int base = 224;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_338() << std::endl;
    return 0;
}
