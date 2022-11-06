// Auto-generated module | 2026-05-14T06:23:59.548561
#include <iostream>
#include <vector>

int compute_487() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_487() << std::endl;
    return 0;
}
