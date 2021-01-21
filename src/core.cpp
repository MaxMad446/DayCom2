// Auto-generated module | 2026-05-12T21:32:22.200058
#include <iostream>
#include <vector>

int compute_547() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_547() << std::endl;
    return 0;
}
