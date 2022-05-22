// Auto-generated module | 2026-05-11T21:03:41.390408
#include <iostream>
#include <vector>

int compute_164() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_164() << std::endl;
    return 0;
}
