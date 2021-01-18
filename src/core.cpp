// Auto-generated module | 2026-05-14T18:14:45.035313
#include <iostream>
#include <vector>

int compute_397() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_397() << std::endl;
    return 0;
}
