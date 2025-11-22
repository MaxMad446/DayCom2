// Auto-generated module | 2026-05-12T04:35:51.167322
#include <iostream>
#include <vector>

int compute_344() {
    int base = 198;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_344() << std::endl;
    return 0;
}
