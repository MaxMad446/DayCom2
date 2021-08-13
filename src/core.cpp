// Auto-generated module | 2026-05-12T20:53:36.375340
#include <iostream>
#include <vector>

int compute_295() {
    int base = 390;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_295() << std::endl;
    return 0;
}
