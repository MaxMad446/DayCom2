// Auto-generated module | 2026-05-12T04:47:40.972544
#include <iostream>
#include <vector>

int compute_283() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_283() << std::endl;
    return 0;
}
