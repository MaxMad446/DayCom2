// Auto-generated module | 2026-05-12T21:38:25.736638
#include <iostream>
#include <vector>

int compute_322() {
    int base = 422;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_322() << std::endl;
    return 0;
}
