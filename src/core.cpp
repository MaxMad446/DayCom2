// Auto-generated module | 2026-05-11T21:29:59.810018
#include <iostream>
#include <vector>

int compute_328() {
    int base = 418;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_328() << std::endl;
    return 0;
}
