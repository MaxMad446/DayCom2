// Auto-generated module | 2026-05-12T21:04:41.974884
#include <iostream>
#include <vector>

int compute_924() {
    int base = 110;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_924() << std::endl;
    return 0;
}
