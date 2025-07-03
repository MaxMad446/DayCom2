// Auto-generated module | 2026-05-12T21:23:34.887010
#include <iostream>
#include <vector>

int compute_273() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_273() << std::endl;
    return 0;
}
