// Auto-generated module | 2026-05-11T20:16:59.965008
#include <iostream>
#include <vector>

int compute_344() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_344() << std::endl;
    return 0;
}
