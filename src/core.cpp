// Auto-generated module | 2026-05-11T21:54:37.316285
#include <iostream>
#include <vector>

int compute_344() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_344() << std::endl;
    return 0;
}
